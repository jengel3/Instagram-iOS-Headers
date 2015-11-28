
#import <Instagram/IGFeedViewController.h>
#import <Instagram/IGPageViewControllerChildViewController.h>

@class UINavigationItem, NSString;

@interface IGSingleFeedViewController : IGFeedViewController <IGPageViewControllerChildViewController> {

	char _shouldShowFollowButton;
	char _showAttribution;
	UINavigationItem* _pageViewControllerNavigationItem;

}

@property (assign,nonatomic) char shouldShowFollowButton;                              //@synthesize shouldShowFollowButton=_shouldShowFollowButton - In the implementation block
@property (assign,nonatomic) char showAttribution;                                     //@synthesize showAttribution=_showAttribution - In the implementation block
@property (readonly) UINavigationItem * pageViewControllerNavigationItem;              //@synthesize pageViewControllerNavigationItem=_pageViewControllerNavigationItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)setFeedSource:(id)arg1 ;
-(char)enableNavState;
-(void)handleLoadedContentDidChange;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(void)onPostDeleted:(id)arg1 ;
-(char)shouldPrefetchMediaForFeedItems;
-(void)setShouldShowFollowButton:(char)arg1 ;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1 ;
-(void)updateTitleWithFeedItem:(id)arg1 ;
-(char)shouldShowFollowButton;
-(UINavigationItem *)pageViewControllerNavigationItem;
-(void)didBecomeCurrentInPageViewController:(id)arg1 ;
-(void)didResignCurrentInPageViewController:(id)arg1 ;
-(void)setShowAttribution:(char)arg1 ;
-(char)showAttribution;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(int)viewType;
-(void)viewDidLoad;
@end

