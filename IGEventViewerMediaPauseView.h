
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGEventViewerMediaPauseViewDelegate;
@class IGBlurredImageView, IGEventViewerMediaPauseViewButton, CALayer;

@interface IGEventViewerMediaPauseView : UIView {

	id<IGEventViewerMediaPauseViewDelegate> _delegate;
	IGBlurredImageView* _blurredImageView;
	IGEventViewerMediaPauseViewButton* _shareButton;
	IGEventViewerMediaPauseViewButton* _viewPostButton;
	CALayer* _dimmedLayer;

}

@property (nonatomic,__weak,readonly) IGEventViewerMediaPauseViewButton * shareButton;                 //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerMediaPauseViewButton * viewPostButton;              //@synthesize viewPostButton=_viewPostButton - In the implementation block
@property (nonatomic,readonly) CALayer * dimmedLayer;                                                  //@synthesize dimmedLayer=_dimmedLayer - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaPauseViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;                                  //@synthesize blurredImageView=_blurredImageView - In the implementation block
-(void)setupBlurView;
-(void)setupDimmedLayer;
-(void)setupTapGesture;
-(void)didReceiveTapGesture:(id)arg1 ;
-(CALayer *)dimmedLayer;
-(void)setupDirectShareButton;
-(void)setupViewPostButton;
-(void)didTapShareButton:(id)arg1 ;
-(void)didTapViewPostButton:(id)arg1 ;
-(IGEventViewerMediaPauseViewButton *)viewPostButton;
-(IGBlurredImageView *)blurredImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEventViewerMediaPauseViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEventViewerMediaPauseViewDelegate>)delegate;
-(IGEventViewerMediaPauseViewButton *)shareButton;
@end

