
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
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)setFeedSource:(id)arg1 ;
-(char)enableNavState;
-(void)handleLoadedContentDidChange;
-(void)onPostDeleted:(id)arg1 ;
-(void)updateTitleWithFeedItem:(id)arg1 ;
-(UINavigationItem *)pageViewControllerNavigationItem;
-(void)didBecomeCurrentInPageViewController:(id)arg1 ;
-(void)didResignCurrentInPageViewController:(id)arg1 ;
-(id)singleFeedItemConfiguration;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(int)viewType;
-(void)viewDidLoad;
@end

