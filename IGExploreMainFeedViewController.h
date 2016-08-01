
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGExploreMainFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedNetworkSourceHideDelegate.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGExploreMainFeedLayoutDataSource.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGExploreSearchControllerDelegate.h>
#import <Instagram/IGExploreInterestSelectionItemControllerDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGSearchOriginControllerProtocol.h>
#import <Instagram/IGEventViewerViewControllerDelegate.h>

@class IGListCollectionView, IGListAdapter, NSString, IGUserSession, IGExploreMainFeedNetworkSource, IGFeedStatusView, IGExploreMainFeedLayout, NSMutableOrderedSet, IGSpinnerModel, NSArray, IGFeedVideoCellManager, IGRefreshControl, IGExploreMainFeedPreviewingHandler, NSIndexPath, IGFeedFocusCoordinator, IGChannelFocusCoordinator, IGExploreMainFeedLogger, IGCollectionViewVisibility, IGExploreTTILogger, IGSearchViewController, IGExploreVolumeViewController, NSDate, IGListAdapterUpdaterLogger;

@interface IGExploreMainFeedViewController : IGViewController <IGExploreMainFeedNetworkSourceDelegate, IGFeedNetworkSourceDelegate, IGFeedNetworkSourceHideDelegate, IGFeedStatusViewDelegate, IGExploreMainFeedLayoutDataSource, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGExploreSearchControllerDelegate, IGExploreInterestSelectionItemControllerDelegate, IGAnalyticsModule, IGSearchOriginControllerProtocol, IGEventViewerViewControllerDelegate> {

	char _didScrollOnce;
	char _hasInteractedOnExplore;
	char _shouldShowExplorePromptInThisSession;
	char _didLoadInitialItems;
	char _didPerformActionsAfterInitialLoad;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	NSString* _sessionId;
	IGUserSession* _userSession;
	IGExploreMainFeedNetworkSource* _networkSource;
	IGExploreMainFeedNetworkSource* _prefetchNetworkSource;
	IGFeedStatusView* _feedStatusView;
	IGExploreMainFeedLayout* _feedLayout;
	NSMutableOrderedSet* _items;
	IGSpinnerModel* _spinner;
	NSArray* _prefetchItems;
	IGFeedVideoCellManager* _videoCellManager;
	IGRefreshControl* _refreshControl;
	IGExploreMainFeedPreviewingHandler* _previewDelegate;
	NSIndexPath* _currentActiveChannelIndexPath;
	IGFeedFocusCoordinator* _mediaFocusCoordinator;
	IGChannelFocusCoordinator* _channelFocusCoordinator;
	float _initialOffset;
	IGExploreMainFeedLogger* _logger;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGExploreTTILogger* _ttiLogger;
	IGSearchViewController* _searchController;
	IGExploreVolumeViewController* _volumeViewController;
	NSDate* _lastFullFetchTime;
	NSDate* _lastPrefetchTime;
	int _stalenessThresholdSeconds;
	NSString* _exploreInterestMessage;
	IGListAdapterUpdaterLogger* _adapterPerfLogger;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedNetworkSource * networkSource;                       //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedNetworkSource * prefetchNetworkSource;               //@synthesize prefetchNetworkSource=_prefetchNetworkSource - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * feedStatusView;                                  //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedLayout * feedLayout;                                 //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGSpinnerModel * spinner;                                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSArray * prefetchItems;                                              //@synthesize prefetchItems=_prefetchItems - In the implementation block
@property (nonatomic,retain) IGFeedVideoCellManager * videoCellManager;                            //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGRefreshControl * refreshControl;                                  //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedPreviewingHandler * previewDelegate;                 //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentActiveChannelIndexPath;                          //@synthesize currentActiveChannelIndexPath=_currentActiveChannelIndexPath - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * mediaFocusCoordinator;                     //@synthesize mediaFocusCoordinator=_mediaFocusCoordinator - In the implementation block
@property (nonatomic,readonly) IGChannelFocusCoordinator * channelFocusCoordinator;                //@synthesize channelFocusCoordinator=_channelFocusCoordinator - In the implementation block
@property (assign,nonatomic) float initialOffset;                                                  //@synthesize initialOffset=_initialOffset - In the implementation block
@property (assign,nonatomic) char didScrollOnce;                                                   //@synthesize didScrollOnce=_didScrollOnce - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLogger * logger;                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;              //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) IGExploreTTILogger * ttiLogger;                                     //@synthesize ttiLogger=_ttiLogger - In the implementation block
@property (nonatomic,retain) IGSearchViewController * searchController;                            //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) IGExploreVolumeViewController * volumeViewController;               //@synthesize volumeViewController=_volumeViewController - In the implementation block
@property (nonatomic,retain) NSDate * lastFullFetchTime;                                           //@synthesize lastFullFetchTime=_lastFullFetchTime - In the implementation block
@property (nonatomic,retain) NSDate * lastPrefetchTime;                                            //@synthesize lastPrefetchTime=_lastPrefetchTime - In the implementation block
@property (assign,nonatomic) int stalenessThresholdSeconds;                                        //@synthesize stalenessThresholdSeconds=_stalenessThresholdSeconds - In the implementation block
@property (assign,nonatomic) char hasInteractedOnExplore;                                          //@synthesize hasInteractedOnExplore=_hasInteractedOnExplore - In the implementation block
@property (assign,nonatomic) char shouldShowExplorePromptInThisSession;                            //@synthesize shouldShowExplorePromptInThisSession=_shouldShowExplorePromptInThisSession - In the implementation block
@property (assign,nonatomic) char didLoadInitialItems;                                             //@synthesize didLoadInitialItems=_didLoadInitialItems - In the implementation block
@property (assign,nonatomic) char didPerformActionsAfterInitialLoad;                               //@synthesize didPerformActionsAfterInitialLoad=_didPerformActionsAfterInitialLoad - In the implementation block
@property (nonatomic,copy) NSString * exploreInterestMessage;                                      //@synthesize exploreInterestMessage=_exploreInterestMessage - In the implementation block
@property (nonatomic,readonly) IGListAdapterUpdaterLogger * adapterPerfLogger;                     //@synthesize adapterPerfLogger=_adapterPerfLogger - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,retain) NSString * sessionId;                                                 //@synthesize sessionId=_sessionId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)scrollToItem:(id)arg1 animated:(char)arg2 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)setupCollectionViewAndAdapter;
-(void)requestToDismissEventViewerViewController:(id)arg1 ;
-(CGRect)currentChannelFrameInWindow;
-(id)currentChannelImageView;
-(IGExploreTTILogger *)ttiLogger;
-(void)resetSearchControllerIfNeeded;
-(void)prepareForPopToRootTransition;
-(void)setupPullToRefreshManager;
-(void)removeLastSpinner;
-(void)reloadFeed;
-(void)updateFeed;
-(IGExploreMainFeedNetworkSource *)networkSource;
-(void)loadNextPage;
-(char)fetchMore;
-(void)setNetworkSource:(IGExploreMainFeedNetworkSource *)arg1 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGChannelFocusCoordinator *)channelFocusCoordinator;
-(CGSize)collectionView:(id)arg1 exploreMainFeedLayout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)exploreMainFeedNetworkSourceDidGetEmptyResponseForPrefetch:(id)arg1 ;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadExplorePromptFlag:(char)arg2 ;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadInitialExploreItems:(id)arg2 ;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadMoreExploreItems:(id)arg2 ;
-(void)setupLocationManager;
-(void)mainFeedReloadDidFinish:(id)arg1 ;
-(void)setupSearchViewController;
-(NSDate *)lastPrefetchTime;
-(int)stalenessThresholdSeconds;
-(NSArray *)prefetchItems;
-(IGExploreMainFeedNetworkSource *)prefetchNetworkSource;
-(void)setLastFullFetchTime:(NSDate *)arg1 ;
-(void)setPrefetchNetworkSource:(IGExploreMainFeedNetworkSource *)arg1 ;
-(void)setLastPrefetchTime:(NSDate *)arg1 ;
-(void)setPrefetchItems:(NSArray *)arg1 ;
-(void)setupLogger;
-(void)setupPreview;
-(void)fetchFrequentItemsIfNeeded;
-(void)setInitialOffset:(float)arg1 ;
-(void)updateChannelFromImmersiveViewer;
-(void)playVideoForChannel:(id)arg1 startTime:(float)arg2 ;
-(void)syncWithContexualFeed;
-(void)performActionsAfterInitialLoadIfNecessary;
-(void)logImpressions;
-(id)paramsForFetchAction:(int)arg1 ;
-(id)locationParams;
-(NSIndexPath *)currentActiveChannelIndexPath;
-(void)sendOutNotificationIfExplorePrefetchFinished;
-(NSString *)exploreInterestMessage;
-(void)setExploreInterestMessage:(NSString *)arg1 ;
-(void)setDidLoadInitialItems:(char)arg1 ;
-(void)setShouldShowExplorePromptInThisSession:(char)arg1 ;
-(void)setupLastFetchTimeForFeedNetworkSource:(id)arg1 ;
-(void)resetLastFetchTimeForFeedNetworkSource:(id)arg1 ;
-(void)showAlertMessageWhenNetworkFailed;
-(IGFeedFocusCoordinator *)mediaFocusCoordinator;
-(void)setCurrentActiveChannelIndexPath:(NSIndexPath *)arg1 ;
-(void)navigationControllerWillShowSearch;
-(char)shouldCheckLoadMoreOnScroll;
-(char)shouldLoadMoreFromNetworkSource:(id)arg1 scrollingToTargetContentOffset:(CGPoint)arg2 inScrollView:(id)arg3 ;
-(void)sendOutNotificationForUserInteract;
-(void)setupVideoCellManagerForCollectionView:(id)arg1 ;
-(void)logScrollEventForScrollView:(id)arg1 ;
-(void)logImpressionsIfNecessary;
-(void)backgroundFetchExploreIfStale;
-(NSDate *)lastFullFetchTime;
-(void)prefetchData;
-(void)trimFeedItemsByAmount:(unsigned)arg1 ;
-(char)hasInteractedOnExplore;
-(char)shouldSendBackgroundFetchFinishNotification;
-(char)shouldShowExplorePromptInThisSession;
-(void)setHasInteractedOnExplore:(char)arg1 ;
-(float)numberOfPagesThresholdForLoadingMore;
-(char)shouldPerformActionsAfterInitialLoad;
-(void)setDidPerformActionsAfterInitialLoad:(char)arg1 ;
-(char)didPerformActionsAfterInitialLoad;
-(char)didLoadInitialItems;
-(char)didScrollOnce;
-(float)initialOffset;
-(void)setDidScrollOnce:(char)arg1 ;
-(void)searchControllerSearchBarTapped:(id)arg1 ;
-(void)searchControllerCancelButtonTapped:(id)arg1 ;
-(void)searchControllerChannelHomeTapped:(id)arg1 ;
-(void)searchController:(id)arg1 switchedToViewController:(id)arg2 ;
-(void)searchControllerPeopleIconTapped:(id)arg1 ;
-(void)searchControllerDirectIconTapped:(id)arg1 ;
-(void)exploreInterestSelectionItemController:(id)arg1 didSaveInterestsWithMessage:(id)arg2 ;
-(void)exploreInterestSelectionItemControllerDidTapSeeMore:(id)arg1 ;
-(void)exploreInterestSelectionItemControllerDidTapDone:(id)arg1 ;
-(void)setStalenessThresholdSeconds:(int)arg1 ;
-(void)feedNetworkSource:(id)arg1 didHideObject:(id)arg2 ;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(void)setVideoCellManager:(IGFeedVideoCellManager *)arg1 ;
-(void)setupFeedStatusView;
-(IGFeedStatusView *)feedStatusView;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(IGListAdapterUpdaterLogger *)adapterPerfLogger;
-(void)showSearchController;
-(char)enableNavState;
-(IGExploreMainFeedLogger *)logger;
-(IGExploreMainFeedPreviewingHandler *)previewDelegate;
-(void)setPreviewDelegate:(IGExploreMainFeedPreviewingHandler *)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSMutableOrderedSet *)items;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(IGRefreshControl *)refreshControl;
-(void)addItems:(id)arg1 ;
-(IGSearchViewController *)searchController;
-(void)setSearchController:(IGSearchViewController *)arg1 ;
-(IGSpinnerModel *)spinner;
-(void)setFeedLayout:(IGExploreMainFeedLayout *)arg1 ;
-(IGExploreMainFeedLayout *)feedLayout;
-(void)registerForNotifications;
-(IGUserSession *)userSession;
-(void)unregisterForNotifications;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(char)isViewVisible;
-(void)fetch;
-(NSArray *)allItems;
-(IGExploreVolumeViewController *)volumeViewController;
@end

