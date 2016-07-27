
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedItemZoomViewControllerDelegate;
@class IGImageView, NSString, IGPhoto, UIView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;

@interface IGFeedItemZoomViewController : IGViewController <UIGestureRecognizerDelegate> {

	IGImageView* _zoomView;
	id<IGFeedItemZoomViewControllerDelegate> _delegate;
	NSString* _analyticsModule;
	IGPhoto* _photo;
	UIView* _dimmedView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	CGPoint _originalPosition;

}

@property (nonatomic,copy) NSString * analyticsModule;                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                                                     //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) UIView * dimmedView;                                                   //@synthesize dimmedView=_dimmedView - In the implementation block
@property (assign,nonatomic) CGPoint originalPosition;                                              //@synthesize originalPosition=_originalPosition - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                         //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                     //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIRotationGestureRecognizer * rotationGestureRecognizer;               //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (nonatomic,readonly) IGImageView * zoomView;                                              //@synthesize zoomView=_zoomView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pop_animationDidStop:(id)arg1 finished:(char)arg2 ;
-(NSString *)analyticsModule;
-(UIView *)dimmedView;
-(id)initWithImageURL:(id)arg1 photoFrame:(CGRect)arg2 photo:(id)arg3 pinchGestureRecognizer:(id)arg4 panGestureRecognizer:(id)arg5 rotationGestureRecognizer:(id)arg6 analyticsModule:(id)arg7 ;
-(void)setupAnimationViews;
-(void)setupGestureRecognizers;
-(void)userDidInteract:(id)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 forView:(id)arg2 ;
-(void)updateAlphaOfBackgroundViews;
-(CGPoint)originalPosition;
-(void)resetViewsToPosition:(CGPoint)arg1 ;
-(void)setDimmedView:(UIView *)arg1 ;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(void)setRotationGestureRecognizer:(UIRotationGestureRecognizer *)arg1 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(IGPhoto *)photo;
-(void)setDelegate:(id<IGFeedItemZoomViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGFeedItemZoomViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)viewDidLoad;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(IGImageView *)zoomView;
-(CATransform3D)currentTransform;
@end

