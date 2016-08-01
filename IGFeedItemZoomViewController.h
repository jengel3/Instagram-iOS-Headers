
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedItemZoomViewControllerDelegate;
@class NSString, IGPostItem, UIView, IGImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;

@interface IGFeedItemZoomViewController : IGViewController <UIGestureRecognizerDelegate> {

	char _rotationEnabled;
	char _zoomLimitEnabled;
	id<IGFeedItemZoomViewControllerDelegate> _delegate;
	NSString* _analyticsModule;
	IGPostItem* _post;
	UIView* _zoomView;
	IGImageView* _imageView;
	UIView* _videoView;
	UIView* _dimmedView;
	float _previousRotationAngle;
	float _maxZoomScale;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	CGPoint _originalPosition;

}

@property (nonatomic,copy) NSString * analyticsModule;                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) IGPostItem * post;                                                   //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) UIView * zoomView;                                                     //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,retain) IGImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                                    //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) UIView * dimmedView;                                                   //@synthesize dimmedView=_dimmedView - In the implementation block
@property (assign,nonatomic) CGPoint originalPosition;                                              //@synthesize originalPosition=_originalPosition - In the implementation block
@property (assign,nonatomic) float previousRotationAngle;                                           //@synthesize previousRotationAngle=_previousRotationAngle - In the implementation block
@property (nonatomic,readonly) char rotationEnabled;                                                //@synthesize rotationEnabled=_rotationEnabled - In the implementation block
@property (nonatomic,readonly) char zoomLimitEnabled;                                               //@synthesize zoomLimitEnabled=_zoomLimitEnabled - In the implementation block
@property (nonatomic,readonly) float maxZoomScale;                                                  //@synthesize maxZoomScale=_maxZoomScale - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                         //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                     //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIRotationGestureRecognizer * rotationGestureRecognizer;               //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pop_animationDidStop:(id)arg1 finished:(char)arg2 ;
-(NSString *)analyticsModule;
-(IGPostItem *)post;
-(UIView *)dimmedView;
-(void)setRotationGestureRecognizer:(UIRotationGestureRecognizer *)arg1 ;
-(void)setupZoomingParams;
-(void)setupAnimationViews;
-(void)setupGestureRecognizers;
-(void)userDidInteract:(id)arg1 ;
-(CGPoint)originalPosition;
-(void)resetViewsToPosition:(CGPoint)arg1 ;
-(void)setAnchorPoint:(CGPoint)arg1 forView:(id)arg2 ;
-(void)updateAlphaOfBackgroundViews;
-(float)normalizeVelocity:(float)arg1 ;
-(char)zoomLimitEnabled;
-(float)maxZoomScale;
-(float)previousRotationAngle;
-(void)setPreviousRotationAngle:(float)arg1 ;
-(void)setDimmedView:(UIView *)arg1 ;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(id)initWithVideoView:(id)arg1 frame:(CGRect)arg2 pinchGestureRecognizer:(id)arg3 panGestureRecognizer:(id)arg4 rotationGestureRecognizer:(id)arg5 analyticsModule:(id)arg6 ;
-(id)initWithImageURL:(id)arg1 frame:(CGRect)arg2 pinchGestureRecognizer:(id)arg3 panGestureRecognizer:(id)arg4 rotationGestureRecognizer:(id)arg5 analyticsModule:(id)arg6 ;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(void)setVideoView:(UIView *)arg1 ;
-(UIView *)videoView;
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
-(void)viewDidAppear:(char)arg1 ;
-(IGImageView *)imageView;
-(void)setImageView:(IGImageView *)arg1 ;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(UIView *)zoomView;
-(void)setZoomView:(UIView *)arg1 ;
-(CATransform3D)currentTransform;
-(char)rotationEnabled;
@end

