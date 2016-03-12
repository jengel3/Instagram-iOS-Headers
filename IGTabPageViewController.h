
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGTabControlDelegate.h>
#import <Instagram/IGPageViewControllerDataSource.h>
#import <Instagram/IGPageViewControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol IGTabPageViewControllerDelegate;
@class NSArray, IGTabControl, IGPageViewController, UIViewController, UIView, NSString;

@interface IGTabPageViewController : IGViewController <IGTabControlDelegate, IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGCustomViewController> {

	char _displaysTabsInNavigationBar;
	NSArray* _contentViewControllers;
	id<IGTabPageViewControllerDelegate> _delegate;
	IGTabControl* _tabControl;
	IGPageViewController* _pageViewController;

}

@property (nonatomic,retain) NSArray * contentViewControllers;                                 //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (assign,nonatomic,__weak) id<IGTabPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGTabControl * tabControl;                                        //@synthesize tabControl=_tabControl - In the implementation block
@property (nonatomic,retain) UIViewController * currentViewController; 
@property (nonatomic,readonly) UIView * pagingContentView; 
@property (assign,nonatomic) char displaysTabsInNavigationBar;                                 //@synthesize displaysTabsInNavigationBar=_displaysTabsInNavigationBar - In the implementation block
@property (nonatomic,retain) IGPageViewController * pageViewController;                        //@synthesize pageViewController=_pageViewController - In the implementation block
@property (nonatomic,readonly) char hidesTabControl; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ig_keyViewControllers;
-(void)pageViewControllerDidFinishScrolling:(id)arg1 ;
-(int)numberOfPagesForPageViewController:(id)arg1 ;
-(id)pageViewController:(id)arg1 controllerForIndex:(int)arg2 ;
-(void)pageViewController:(id)arg1 willShowViewController:(id)arg2 ;
-(IGTabControl *)tabControl;
-(char)displaysTabsInNavigationBar;
-(UIViewController *)currentViewController;
-(char)hidesTabControl;
-(void)setCurrentViewController:(id)arg1 animated:(char)arg2 ;
-(void)setTabControl:(IGTabControl *)arg1 ;
-(void)reloadTabs;
-(UIEdgeInsets)preferredContentInsetsWithoutTabControl;
-(id)viewControllerAtIndex:(int)arg1 ;
-(void)switchToViewController:(id)arg1 animated:(char)arg2 ;
-(void)tabControl:(id)arg1 tappedSegmentIndex:(unsigned)arg2 ;
-(id)initWithContentViewControllers:(id)arg1 ;
-(void)setDisplaysTabsInNavigationBar:(char)arg1 ;
-(void)setCurrentViewController:(UIViewController *)arg1 ;
-(UIView *)pagingContentView;
-(void)presentViewController:(id)arg1 animated:(char)arg2 ;
-(void)setDelegate:(id<IGTabPageViewControllerDelegate>)arg1 ;
-(id<IGTabPageViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)automaticallyAdjustsScrollViewInsets;
-(UIEdgeInsets)preferredContentInsets;
-(int)pageCount;
-(void)configure;
-(void)setPageViewController:(IGPageViewController *)arg1 ;
-(IGPageViewController *)pageViewController;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(NSArray *)contentViewControllers;
@end

