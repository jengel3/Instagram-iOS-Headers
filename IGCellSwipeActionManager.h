
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGCellSwipeActionManagerActionDelegate, IGCellSwipeActionManagerPanningDelegate, IGCellSwipeActionManagerSwipingDelegate;
@class NSArray, UIView, UIPanGestureRecognizer, NSString;

@interface IGCellSwipeActionManager : NSObject <UIGestureRecognizerDelegate> {

	char _dragging;
	char _shouldDrag;
	char _didCompleteExpandAnimation;
	char _isShowingActions;
	id<IGCellSwipeActionManagerActionDelegate> _actionDelegate;
	id<IGCellSwipeActionManagerPanningDelegate> _panningDelegate;
	id<IGCellSwipeActionManagerSwipingDelegate> _swipingDelegate;
	NSArray* _actionButtons;
	NSArray* _accessibleElements;
	UIView* _hostingView;
	float _actionButtonWidth;
	UIView* _actionButtonContainerView;
	UIView* _contentScreenshotView;
	UIView* _swipeActionsContainerView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	float _totalTranslationX;
	float _contentScreenshotViewBeginningX;
	float _swipeCompletionThresholdX;
	unsigned _panState;
	CGRect _originalActionButtonContainerViewFrame;

}

@property (nonatomic,retain) UIView * hostingView;                                                            //@synthesize hostingView=_hostingView - In the implementation block
@property (assign,nonatomic) float actionButtonWidth;                                                         //@synthesize actionButtonWidth=_actionButtonWidth - In the implementation block
@property (nonatomic,retain) UIView * actionButtonContainerView;                                              //@synthesize actionButtonContainerView=_actionButtonContainerView - In the implementation block
@property (nonatomic,retain) UIView * contentScreenshotView;                                                  //@synthesize contentScreenshotView=_contentScreenshotView - In the implementation block
@property (nonatomic,retain) UIView * swipeActionsContainerView;                                              //@synthesize swipeActionsContainerView=_swipeActionsContainerView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                   //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,getter=isDragging,nonatomic) char dragging;                                                 //@synthesize dragging=_dragging - In the implementation block
@property (assign,nonatomic) char shouldDrag;                                                                 //@synthesize shouldDrag=_shouldDrag - In the implementation block
@property (nonatomic,readonly) char swipeToActionDisabled; 
@property (assign,nonatomic) CGRect originalActionButtonContainerViewFrame;                                   //@synthesize originalActionButtonContainerViewFrame=_originalActionButtonContainerViewFrame - In the implementation block
@property (assign,nonatomic) float totalTranslationX;                                                         //@synthesize totalTranslationX=_totalTranslationX - In the implementation block
@property (assign,nonatomic) float contentScreenshotViewBeginningX;                                           //@synthesize contentScreenshotViewBeginningX=_contentScreenshotViewBeginningX - In the implementation block
@property (assign,nonatomic) char didCompleteExpandAnimation;                                                 //@synthesize didCompleteExpandAnimation=_didCompleteExpandAnimation - In the implementation block
@property (assign,nonatomic) char isShowingActions;                                                           //@synthesize isShowingActions=_isShowingActions - In the implementation block
@property (assign,nonatomic) float swipeCompletionThresholdX;                                                 //@synthesize swipeCompletionThresholdX=_swipeCompletionThresholdX - In the implementation block
@property (assign,nonatomic) unsigned panState;                                                               //@synthesize panState=_panState - In the implementation block
@property (nonatomic,retain) NSArray * accessibleElements;                                                    //@synthesize accessibleElements=_accessibleElements - In the implementation block
@property (assign,nonatomic,__weak) id<IGCellSwipeActionManagerActionDelegate> actionDelegate;                //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGCellSwipeActionManagerPanningDelegate> panningDelegate;              //@synthesize panningDelegate=_panningDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGCellSwipeActionManagerSwipingDelegate> swipingDelegate;              //@synthesize swipingDelegate=_swipingDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * actionButtons;                                                       //@synthesize actionButtons=_actionButtons - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)hostingView;
-(void)setHostingView:(UIView *)arg1 ;
-(void)setDragging:(char)arg1 ;
-(void)removeSwipingView;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(float)actionsViewButtonsTotalWidth;
-(float)calculateSwipeCompletionThresholdForHostingViewFrame:(CGRect)arg1 totalButtonWidth:(float)arg2 buttonWidth:(float)arg3 ;
-(id<IGCellSwipeActionManagerSwipingDelegate>)swipingDelegate;
-(void)showActionView:(char)arg1 duration:(double)arg2 ;
-(void)setupSwipingView;
-(UIView *)contentScreenshotView;
-(id)addBasicAnimationToView:(id)arg1 toFrame:(CGRect)arg2 duration:(double)arg3 name:(id)arg4 ;
-(float)actionButtonWidth;
-(UIView *)actionButtonContainerView;
-(CGRect)defaultFrameForButtonAtIndex:(unsigned)arg1 buttons:(id)arg2 buttonWidth:(float)arg3 containerView:(id)arg4 ;
-(void)setPanState:(unsigned)arg1 ;
-(void)setIsShowingActions:(char)arg1 ;
-(void)hideActionView:(char)arg1 duration:(double)arg2 ;
-(unsigned)panState;
-(id)createAccessibilityCloseButton;
-(float)swipeViewHorizontalDistanceFromActionView;
-(float)swipeCompletionThresholdX;
-(char)swipeToActionDisabled;
-(char)shouldDrag;
-(void)setTotalTranslationX:(float)arg1 ;
-(void)setContentScreenshotViewBeginningX:(float)arg1 ;
-(id<IGCellSwipeActionManagerPanningDelegate>)panningDelegate;
-(float)totalTranslationX;
-(float)contentScreenshotViewBeginningX;
-(CGRect)originalActionButtonContainerViewFrame;
-(void)cellDidPanWithVelocity:(CGPoint)arg1 ;
-(void)animateSwipeWithVelocity:(CGPoint)arg1 ;
-(void)setDidCompleteExpandAnimation:(char)arg1 ;
-(unsigned)panStateFromSwipeViewFrame:(CGRect)arg1 ;
-(void)handleActionButtonFramesForPanState:(unsigned)arg1 deltaX:(float)arg2 ;
-(char)didCompleteExpandAnimation;
-(unsigned)swipeCompletionActionForPanDirection:(unsigned)arg1 ;
-(id)addSpringAnimationToView:(id)arg1 toFrame:(CGRect)arg2 name:(id)arg3 ;
-(char)isShowingActions;
-(void)showActionViewWithVelocity:(CGPoint)arg1 ;
-(void)hideActionViewWithVelocity:(CGPoint)arg1 ;
-(void)setSwipeActionsContainerView:(UIView *)arg1 ;
-(UIView *)swipeActionsContainerView;
-(id)createActionsButtonViewWithBounds:(CGRect)arg1 ;
-(void)setActionButtonContainerView:(UIView *)arg1 ;
-(void)fillActionsButtonContainerView:(id)arg1 withButtonViews:(id)arg2 buttonWidth:(float)arg3 ;
-(void)setOriginalActionButtonContainerViewFrame:(CGRect)arg1 ;
-(void)setContentScreenshotView:(UIView *)arg1 ;
-(void)handleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)handleHideActionView:(id)arg1 ;
-(id)accessibileElements;
-(void)setPanningDelegate:(id<IGCellSwipeActionManagerPanningDelegate>)arg1 ;
-(void)setActionButtonWidth:(float)arg1 ;
-(void)setShouldDrag:(char)arg1 ;
-(void)setSwipeCompletionThresholdX:(float)arg1 ;
-(void)setSwipingDelegate:(id<IGCellSwipeActionManagerSwipingDelegate>)arg1 ;
-(id)initWithHostingView:(id)arg1 actionButtons:(id)arg2 actionButtonWidth:(float)arg3 ;
-(void)showActionView:(char)arg1 ;
-(void)hideActionView:(char)arg1 ;
-(void)peekActionView;
-(NSArray *)accessibleElements;
-(void)setAccessibleElements:(NSArray *)arg1 ;
-(id<IGCellSwipeActionManagerActionDelegate>)actionDelegate;
-(void)setActionDelegate:(id<IGCellSwipeActionManagerActionDelegate>)arg1 ;
-(void)dealloc;
-(char)isDragging;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(NSArray *)actionButtons;
@end

