
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGPanAnimationViewDelegate;
@class UIImageView, UIImage;

@interface IGPanAnimationView : UIView {

	id<IGPanAnimationViewDelegate> _delegate;
	UIImageView* _centerImageView;
	UIImageView* _leftNewImageView;
	UIImageView* _rightNewImageView;
	CGRect _viewBound;

}

@property (nonatomic,retain) UIImageView * centerImageView;                               //@synthesize centerImageView=_centerImageView - In the implementation block
@property (nonatomic,retain) UIImageView * leftNewImageView;                              //@synthesize leftNewImageView=_leftNewImageView - In the implementation block
@property (nonatomic,retain) UIImageView * rightNewImageView;                             //@synthesize rightNewImageView=_rightNewImageView - In the implementation block
@property (assign,nonatomic) CGRect viewBound;                                            //@synthesize viewBound=_viewBound - In the implementation block
@property (assign,nonatomic,__weak) id<IGPanAnimationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * centerImage; 
@property (nonatomic,retain) UIImage * leftImage; 
@property (nonatomic,retain) UIImage * rightImage; 
-(void)setCenterImageView:(UIImageView *)arg1 ;
-(void)setLeftNewImageView:(UIImageView *)arg1 ;
-(UIImageView *)leftNewImageView;
-(void)setRightNewImageView:(UIImageView *)arg1 ;
-(UIImageView *)rightNewImageView;
-(UIImageView *)centerImageView;
-(void)setupGestureRecognizer;
-(CGRect)viewBound;
-(void)setViewBound:(CGRect)arg1 ;
-(char)panGestureMovingRight:(float)arg1 ;
-(void)finishTranslationAnimation:(id)arg1 ;
-(float)computeAnimationTime:(float)arg1 ;
-(void)finishRightPanAnimation:(/*^block*/id*)arg1 completion:(/*^block*/id*)arg2 duration:(float)arg3 ;
-(void)cancelLeftPanAnimation:(/*^block*/id*)arg1 completion:(/*^block*/id*)arg2 duration:(float)arg3 ;
-(void)cancelRightPanAnimation:(/*^block*/id*)arg1 completion:(/*^block*/id*)arg2 duration:(float)arg3 ;
-(void)finishLeftPanAnimation:(/*^block*/id*)arg1 completion:(/*^block*/id*)arg2 duration:(float)arg3 ;
-(char)shouldFinishPanAnimation:(id)arg1 ;
-(void)setLeftImage:(id)arg1 centerImage:(id)arg2 rightImage:(id)arg3 ;
-(void)setRightImage:(UIImage *)arg1 ;
-(UIImage *)rightImage;
-(void)setLeftImage:(UIImage *)arg1 ;
-(UIImage *)leftImage;
-(void)setDelegate:(id<IGPanAnimationViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<IGPanAnimationViewDelegate>)delegate;
-(void)reset;
-(void)handlePan:(id)arg1 ;
-(void)setCenterImage:(UIImage *)arg1 ;
-(UIImage *)centerImage;
@end

