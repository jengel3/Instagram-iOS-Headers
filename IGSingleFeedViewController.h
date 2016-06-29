
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGPageViewControllerChildViewController.h>
#import <Instagram/IGAnalyticsModule.h>

@class UINavigationItem, NSString;

@interface IGSingleFeedViewController : IGFeedViewController_DEPRECATED <IGPageViewControllerChildViewController, IGAnalyticsModule> {

	UINavigationItem* _pageViewControllerNavigationItem;

}

@property (nonatomic,readonly) UINavigationItem * pageViewControllerNavigationItem;              //@synthesize pageViewControllerNavigationItem=_pageViewControllerNavigationItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)onPostDeleted:(id)arg1 ;
-(void)handleLoadedContentDidChange;
-(void)updateTitleWithFeedItem:(id)arg1 ;
-(UINavigationItem *)pageViewControllerNavigationItem;
-(id)singleFeedItemConfiguration;
-(void)didResignCurrentInPageViewController:(id)arg1 ;
-(void)didBecomeCurrentInPageViewController:(id)arg1 ;
-(id)initWithNetworkSource:(id)arg1 ;
-(void)dealloc;
-(id)navigationItem;
-(void)viewDidLoad;
@end

