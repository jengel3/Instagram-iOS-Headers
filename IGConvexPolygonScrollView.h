
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGConvexPolygonScrollViewDelegate;
@class UIPanGestureRecognizer, UIPinchGestureRecognizer, POPSpringAnimation, POPDecayAnimation, UIView, NSArray, NSString;

@interface IGConvexPolygonScrollView : UIView <UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	POPSpringAnimation* _bounceAnimation;
	POPDecayAnimation* _scrollAnimation;
	POPSpringAnimation* _zoomAnimation;
	POPSpringAnimation* _translationAnimation;
	char __scrolling;
	char __bouncing;
	char _dragging;
	char _zooming;
	char _scrollEnabled;
	char _decelerating;
	char _zoomBouncing;
	UIView* _contentView;
	float _rotateAngle;
	NSArray* _contentRegion;
	float _cropAspectRatio;
	float _maximumZoomScale;
	id<IGConvexPolygonScrollViewDelegate> _delegate;
	float _lastScale;
	CGSize _contentSize;
	CGSize _viewModelSize;
	CGPoint _lastZoomPoint;

}

@property (assign,nonatomic) char dragging;                                                      //@synthesize dragging=_dragging - In the implementation block
@property (assign,nonatomic) char zooming;                                                       //@synthesize zooming=_zooming - In the implementation block
@property (assign,nonatomic) char decelerating;                                                  //@synthesize decelerating=_decelerating - In the implementation block
@property (assign,nonatomic) char zoomBouncing;                                                  //@synthesize zoomBouncing=_zoomBouncing - In the implementation block
@property (assign,nonatomic) float lastScale;                                                    //@synthesize lastScale=_lastScale - In the implementation block
@property (assign,nonatomic) CGPoint lastZoomPoint;                                              //@synthesize lastZoomPoint=_lastZoomPoint - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize viewModelSize;                                               //@synthesize viewModelSize=_viewModelSize - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) float zoomScale; 
@property (assign,nonatomic) float rotateAngle;                                                  //@synthesize rotateAngle=_rotateAngle - In the implementation block
@property (nonatomic,copy) NSArray * contentRegion;                                              //@synthesize contentRegion=_contentRegion - In the implementation block
@property (assign,nonatomic) float cropAspectRatio;                                              //@synthesize cropAspectRatio=_cropAspectRatio - In the implementation block
@property (assign,nonatomic) float maximumZoomScale;                                             //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) char scrollEnabled;                                                 //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGConvexPolygonScrollViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewModelSize:(CGSize)arg1 ;
-(void)cancelAnimations;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)setContentRegion:(NSArray *)arg1 ;
-(void)setRotateAngle:(float)arg1 ;
-(float)rotateAngle;
-(NSArray *)contentRegion;
-(void)_panFromGestureRecognizer:(id)arg1 ;
-(void)_pinchFromGestureRecognizer:(id)arg1 ;
-(char)_isVisibleRegionInsideConvexPolygonWithOffset:(CGPoint)arg1 scale:(float)arg2 ;
-(CGPoint)scrollVelocity;
-(void)_transitionToBounceAnimationWithVelocity:(CGPoint)arg1 ;
-(void)_noteScrollingEndedAfterDeceleration:(char)arg1 finished:(char)arg2 ;
-(void)_updateScrollState;
-(void)setZoomBouncing:(char)arg1 ;
-(void)_restrainOffset:(CGPoint*)arg1 ;
-(void)_transitionToBounceAnimationWithVelocity:(CGPoint)arg1 targetOffset:(CGPoint)arg2 ;
-(void)_transitionToBounceAnimationWithVelocity:(CGPoint)arg1 targetOffset:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)_transitionToBounceAnimationWithVelocity:(CGPoint)arg1 targetOffset:(CGPoint)arg2 strongBounce:(char)arg3 completion:(/*^block*/id)arg4 ;
-(CGPoint)_applyRubberBandingEffectOnScrollVector:(CGPoint)arg1 ;
-(void)_transitionToScrollAnimationWithVelocity:(CGPoint)arg1 ;
-(void)_noteZoomAnimationEnded:(char)arg1 ;
-(char)dragging;
-(void)setDragging:(char)arg1 ;
-(float)_currentRubberBandingStrength;
-(void)_beginScrollAnimationsWithVelocity:(CGPoint)arg1 ;
-(char)zooming;
-(void)_beginDragging;
-(void)_draggingWithTranslation:(CGPoint)arg1 ;
-(void)_endDraggingWithDecelerationVelocity:(CGPoint)arg1 ;
-(void)setLastZoomPoint:(CGPoint)arg1 ;
-(void)setLastScale:(float)arg1 ;
-(void)setZooming:(char)arg1 ;
-(float)lastScale;
-(void)_zoomToPoint:(CGPoint)arg1 scale:(float)arg2 ;
-(void)_restrainOffset:(CGPoint*)arg1 scale:(float*)arg2 ;
-(void)_zoomBounceFinished:(char)arg1 targetOffset:(CGPoint)arg2 targetScale:(float)arg3 ;
-(void)_zoomAnimationWithTargetScale:(float)arg1 completion:(/*^block*/id)arg2 ;
-(void)_transitionToTranslateAnimationWithVelocity:(CGPoint)arg1 targetOffset:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)_beginZooming;
-(void)_zoomingUpdatedWithGesture:(id)arg1 ;
-(void)_zoomingDidFinished;
-(float)_straightenScaleForAngle:(float)arg1 ;
-(float)_restrainScaleForRotation:(float)arg1 targetScale:(float)arg2 safeScale:(float)arg3 ;
-(CGPoint)_offsetForRotateAngle:(float)arg1 ;
-(void)setRotateAngleZ:(float)arg1 ;
-(char)_isVisibleRegionInsideConvexPolygonWithOffset:(CGPoint)arg1 scale:(float)arg2 convexPlygon:(id)arg3 ;
-(float)aspectRatioAdjustedValue:(float)arg1 ;
-(id)squareRegionFromRectangularRegion:(id)arg1 ;
-(id)rectangularRegionFromSquareRegion:(id)arg1 ;
-(CGPoint)_projectOffsetWithScale:(float)arg1 offset:(CGPoint)arg2 ;
-(float)rotateAngleX;
-(void)setRotateAngleX:(float)arg1 ;
-(float)rotateAngleY;
-(void)setRotateAngleY:(float)arg1 ;
-(float)rotateAngleZ;
-(_GLKMatrix4)contentTransform;
-(CGSize)viewModelSize;
-(char)decelerating;
-(char)zoomBouncing;
-(CGPoint)lastZoomPoint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGConvexPolygonScrollViewDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<IGConvexPolygonScrollViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(CGSize)contentSize;
-(void)setScrollEnabled:(char)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(float)zoomScale;
-(void)setMaximumZoomScale:(float)arg1 ;
-(float)maximumZoomScale;
-(void)setZoomScale:(float)arg1 ;
-(void)setCropAspectRatio:(float)arg1 ;
-(float)cropAspectRatio;
-(void)setDecelerating:(char)arg1 ;
-(char)scrollEnabled;
@end

