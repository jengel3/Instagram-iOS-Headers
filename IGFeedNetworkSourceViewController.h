
#import <Instagram/IGCollectionViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGCollectionViewControllerDelegate.h>

@protocol IGFeedItemConfigurationType, IGFeedConfigurationType;
@class IGFeedNetworkSource, IGPrefetchPostsConfiguration, NSMapTable, IGFeedStatusView, UIBarButtonItem, NSArray, NSString;

@interface IGFeedNetworkSourceViewController : IGCollectionViewController <IGFeedNetworkSourceDelegate, IGFeedStatusViewDelegate, IGCollectionViewControllerDelegate> {

	char _showRefreshButton;
	char _shouldAnnounceFeedRefreshEvents;
	id<IGFeedItemConfigurationType> _feedItemConfiguration;
	id<IGFeedConfigurationType> _feedConfiguration;
	IGFeedNetworkSource* _feedSource;
	IGPrefetchPostsConfiguration* _prefetchConfiguration;
	NSMapTable* _headerViewsToRank;
	NSMapTable* _footerViewsToRank;
	IGFeedStatusView* _feedStatusView;
	UIBarButtonItem* _refreshButton;

}

@property (nonatomic,readonly) NSMapTable * headerViewsToRank;                                   //@synthesize headerViewsToRank=_headerViewsToRank - In the implementation block
@property (nonatomic,readonly) NSMapTable * footerViewsToRank;                                   //@synthesize footerViewsToRank=_footerViewsToRank - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                                  //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * refreshButton;                                    //@synthesize refreshButton=_refreshButton - In the implementation block
@property (assign,nonatomic) char shouldAnnounceFeedRefreshEvents;                               //@synthesize shouldAnnounceFeedRefreshEvents=_shouldAnnounceFeedRefreshEvents - In the implementation block
@property (nonatomic,retain) id<IGFeedItemConfigurationType> feedItemConfiguration;              //@synthesize feedItemConfiguration=_feedItemConfiguration - In the implementation block
@property (nonatomic,retain) id<IGFeedConfigurationType> feedConfiguration;                      //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                                   //@synthesize feedSource=_feedSource - In the implementation block
@property (assign,nonatomic) char showRefreshButton;                                             //@synthesize showRefreshButton=_showRefreshButton - In the implementation block
@property (nonatomic,readonly) NSArray * promotionBannerConfigurations; 
@property (nonatomic,retain) IGPrefetchPostsConfiguration * prefetchConfiguration;               //@synthesize prefetchConfiguration=_prefetchConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(IGFeedNetworkSource *)feedSource;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(char)showRefreshButton;
-(id)analyticsExtras;
-(void)setShowRefreshButton:(char)arg1 ;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(id)restrictedView;
-(char)isTopOnly;
-(void)onRestrictedLearnMoreTapped:(id)arg1 ;
-(void)setRestrictedView:(id)arg1 ;
-(void)fetchMore;
-(IGPrefetchPostsConfiguration *)prefetchConfiguration;
-(void)setPrefetchConfiguration:(IGPrefetchPostsConfiguration *)arg1 ;
-(NSArray *)promotionBannerConfigurations;
-(void)onNetworkTransferRateChanged:(id)arg1 ;
-(void)addFooterView:(id)arg1 withRank:(int)arg2 animated:(char)arg3 ;
-(void)reloadWithNewObjects:(id)arg1 ;
-(void)setViews:(id)arg1 toWidth:(float)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)updateFeedAfterReloadingforFetchAction:(int)arg1 ;
-(void)showErrorLoadMessageIfPossible;
-(char)shouldAnnounceFeedRefreshEvents;
-(void)setShouldAnnounceFeedRefreshEvents:(char)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidEndScrolling;
-(void)didTakeRefreshAction;
-(void)onRefreshTapped:(id)arg1 ;
-(void)layoutHeaderViews;
-(void)layoutFooterViews;
-(void)collectionViewControllerDidStartPullToRefreshAction:(id)arg1 ;
-(void)collectionViewController:(id)arg1 didScrollWithDistanceToEndOfContent:(float)arg2 isScrollingDown:(char)arg3 ;
-(id)initWithFeedNetworkSource:(id)arg1 layout:(id)arg2 showsPullToRefresh:(char)arg3 feedConfiguration:(id)arg4 ;
-(void)collectionViewControllerDidScrollToEndOfContent:(id)arg1 ;
-(void)addHeaderView:(id)arg1 withRank:(int)arg2 animated:(char)arg3 ;
-(void)removeHeaderView:(id)arg1 animated:(char)arg2 ;
-(void)removeFooterView:(id)arg1 animated:(char)arg2 ;
-(id<IGFeedItemConfigurationType>)feedItemConfiguration;
-(void)setFeedItemConfiguration:(id<IGFeedItemConfigurationType>)arg1 ;
-(void)setFeedConfiguration:(id<IGFeedConfigurationType>)arg1 ;
-(NSMapTable *)headerViewsToRank;
-(NSMapTable *)footerViewsToRank;
-(id<IGFeedConfigurationType>)feedConfiguration;
-(IGFeedStatusView *)feedStatusView;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(void)feedStatusView:(id)arg1 didChangeComputedHeight:(float)arg2 ;
-(float)visibleContentHeight;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)updateRestrictedViewWithName:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)accessibilityScroll:(int)arg1 ;
-(void)setRefreshButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)refreshButton;
@end

