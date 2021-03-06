

#import <Instagram/Instagram-Structs.h>
@class UIViewController, IGNavigationBar, UIView, IGScrollingHeaderItem, UIScrollView, NSSet;

@interface IGScrollingHeaderCoordinator : NSObject {

	char _isAnimatingTransition;
	UIViewController* _activeViewController;
	IGNavigationBar* _navigationBar;
	UIView* _statusBar;
	IGScrollingHeaderItem* _activeHeaderItem;
	float _headerAdjustmentAmount;
	UIScrollView* _activeScrollView;
	NSSet* _scrollingViews;
	float _headerAnchor;

}

@property (assign,nonatomic,__weak) IGScrollingHeaderItem * activeHeaderItem;              //@synthesize activeHeaderItem=_activeHeaderItem - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * activeScrollView;                       //@synthesize activeScrollView=_activeScrollView - In the implementation block
@property (assign,nonatomic) float headerAdjustmentAmount;                                 //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
@property (nonatomic,readonly) NSSet * scrollingViews;                                     //@synthesize scrollingViews=_scrollingViews - In the implementation block
@property (assign,nonatomic) float headerAnchor;                                           //@synthesize headerAnchor=_headerAnchor - In the implementation block
@property (assign,nonatomic) char isAnimatingTransition;                                   //@synthesize isAnimatingTransition=_isAnimatingTransition - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * activeViewController;               //@synthesize activeViewController=_activeViewController - In the implementation block
@property (nonatomic,__weak,readonly) IGNavigationBar * navigationBar;                     //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,__weak,readonly) UIView * statusBar;                                  //@synthesize statusBar=_statusBar - In the implementation block
+(unsigned)navigationBarStateForViewController:(id)arg1 ;
+(id)scrollingHeaderItemForViewController:(id)arg1 ;
+(unsigned)statusBarStateForViewController:(id)arg1 ;
+(id)headerSnapshotForViewController:(id)arg1 navigationBar:(id)arg2 ;
+(id)scrollingHeaderViewControllerForViewController:(id)arg1 ;
-(float)headerAdjustmentAmount;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(void)setHeaderScrolledAway:(char)arg1 forViewController:(id)arg2 animated:(char)arg3 ;
-(void)synchronizeViewControllerHeaderState:(id)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)releaseActiveViewController:(id)arg1 ;
-(void)layoutHeaderForViewController:(id)arg1 animated:(char)arg2 ;
-(void)layoutHeaderForActiveViewControllerAnimated:(char)arg1 ;
-(void)setActiveScrollView:(UIScrollView *)arg1 ;
-(void)setActiveHeaderItem:(IGScrollingHeaderItem *)arg1 ;
-(IGScrollingHeaderItem *)activeHeaderItem;
-(void)updateTransformNavigationViews:(id)arg1 percentVisible:(float)arg2 ;
-(void)onDidEndDecelerating:(id)arg1 ;
-(void)onDidEndDragging:(id)arg1 ;
-(void)onDidBeginDragging:(id)arg1 ;
-(void)setHeaderAnchor:(float)arg1 ;
-(UIScrollView *)activeScrollView;
-(float)headerAnchor;
-(void)updateHeaderAnimated:(char)arg1 ;
-(NSSet *)scrollingViews;
-(void)updateStatusBarIfNeededWithTransform:(CGAffineTransform)arg1 ;
-(void)updateNavigationOverlayWithPercentVisible:(float)arg1 ;
-(void)setIsAnimatingTransition:(char)arg1 ;
-(void)setHeaderY:(float)arg1 animated:(char)arg2 ;
-(void)positionHeaderAfterScrolling;
-(void)dealloc;
-(IGNavigationBar *)navigationBar;
-(UIView *)statusBar;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(UIViewController *)activeViewController;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(char)isAnimatingTransition;
@end

