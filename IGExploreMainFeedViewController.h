
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGExploreMainFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedNetworkSourceHideDelegate.h>
#import <Instagram/IGExploreMainFeedLayoutDataSource.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGExploreSearchControllerDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGSearchOriginControllerProtocol.h>
#import <Instagram/IGEventViewerViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class IGListCollectionView, IGListAdapter, IGExploreMainFeedNetworkSource, IGExploreMainFeedLayout, NSMutableOrderedSet, IGSpinnerModel, IGFeedVideoCellManager, IGPullToRefreshViewManager, NSString, IGExploreMainFeedPreviewingHandler, NSIndexPath, IGFeedFocusCoordinator, IGChannelFocusCoordinator, IGExploreMainFeedLogger, IGCollectionViewVisibility, IGExploreTTILogger, IGSearchViewController, IGExploreVolumeViewController, NSDate, NSArray;

@interface IGExploreMainFeedViewController : IGViewController <IGExploreMainFeedNetworkSourceDelegate, IGFeedNetworkSourceDelegate, IGFeedNetworkSourceHideDelegate, IGExploreMainFeedLayoutDataSource, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGExploreSearchControllerDelegate, IGPullToRefreshProtocol, IGAnalyticsModule, IGSearchOriginControllerProtocol, IGEventViewerViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	char _hasInteractedOnExplore;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGExploreMainFeedNetworkSource* _networkSource;
	IGExploreMainFeedLayout* _feedLayout;
	NSMutableOrderedSet* _items;
	IGSpinnerModel* _spinner;
	IGFeedVideoCellManager* _videoCellManager;
	IGPullToRefreshViewManager* _pullToRefreshManager;
	NSString* _currentUserPK;
	IGExploreMainFeedPreviewingHandler* _previewDelegate;
	NSIndexPath* _currentActiveChannelIndexPath;
	IGFeedFocusCoordinator* _mediaFocusCoordinator;
	IGChannelFocusCoordinator* _channelFocusCoordinator;
	IGExploreMainFeedLogger* _logger;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGExploreTTILogger* _ttiLogger;
	IGSearchViewController* _searchController;
	IGExploreVolumeViewController* _volumeViewController;
	NSDate* _lastFullFetchTime;
	int _stalenessThresholdSeconds;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) IGExploreMainFeedNetworkSource * networkSource;                     //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedLayout * feedLayout;                                 //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGSpinnerModel * spinner;                                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGFeedVideoCellManager * videoCellManager;                            //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGPullToRefreshViewManager * pullToRefreshManager;                  //@synthesize pullToRefreshManager=_pullToRefreshManager - In the implementation block
@property (nonatomic,readonly) NSString * currentUserPK;                                           //@synthesize currentUserPK=_currentUserPK - In the implementation block
@property (nonatomic,retain) IGExploreMainFeedPreviewingHandler * previewDelegate;                 //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentActiveChannelIndexPath;                          //@synthesize currentActiveChannelIndexPath=_currentActiveChannelIndexPath - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * mediaFocusCoordinator;                     //@synthesize mediaFocusCoordinator=_mediaFocusCoordinator - In the implementation block
@property (nonatomic,readonly) IGChannelFocusCoordinator * channelFocusCoordinator;                //@synthesize channelFocusCoordinator=_channelFocusCoordinator - In the implementation block
@property (nonatomic,readonly) IGExploreMainFeedLogger * logger;                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;              //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) IGExploreTTILogger * ttiLogger;                                     //@synthesize ttiLogger=_ttiLogger - In the implementation block
@property (nonatomic,retain) IGSearchViewController * searchController;                            //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,readonly) IGExploreVolumeViewController * volumeViewController;               //@synthesize volumeViewController=_volumeViewController - In the implementation block
@property (nonatomic,retain) NSDate * lastFullFetchTime;                                           //@synthesize lastFullFetchTime=_lastFullFetchTime - In the implementation block
@property (assign,nonatomic) int stalenessThresholdSeconds;                                        //@synthesize stalenessThresholdSeconds=_stalenessThresholdSeconds - In the implementation block
@property (assign,nonatomic) char hasInteractedOnExplore;                                          //@synthesize hasInteractedOnExplore=_hasInteractedOnExplore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(id)additionalParamsForFetchRequest;
-(void)setupCollectionViewAndAdapter;
-(IGListAdapter *)listAdapter;
-(IGPullToRefreshViewManager *)pullToRefreshManager;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(NSString *)currentUserPK;
-(void)scrollViewDidEndScrolling;
-(void)didDismissEventViewerViewController:(id)arg1 ;
-(void)mainFeedReloadDidFinish:(id)arg1 ;
-(IGExploreTTILogger *)ttiLogger;
-(void)navigationControllerWillShowSearch;
-(void)showSearchController;
-(int)stalenessThresholdSeconds;
-(char)hasInteractedOnExplore;
-(void)setHasInteractedOnExplore:(char)arg1 ;
-(char)shouldSendBackgroundFetchFinishNotification;
-(void)sendOutNotificationForUserInteract;
-(void)searchControllerSearchBarTapped:(id)arg1 ;
-(void)searchControllerCancelButtonTapped:(id)arg1 ;
-(void)searchController:(id)arg1 switchedToViewController:(id)arg2 ;
-(void)searchControllerPeopleIconTapped:(id)arg1 ;
-(void)searchControllerDirectIconTapped:(id)arg1 ;
-(void)resetSearchControllerIfNeeded;
-(void)prepareForPopToRootTransition;
-(void)setStalenessThresholdSeconds:(int)arg1 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGChannelFocusCoordinator *)channelFocusCoordinator;
-(IGExploreMainFeedNetworkSource *)networkSource;
-(void)feedNetworkSource:(id)arg1 didHideObject:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 exploreMainFeedLayout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)exploreMainFeedNetworkSourceDidGetEmptyResponseForPrefetch:(id)arg1 ;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadInitialExploreItems:(id)arg2 ;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadMoreExploreItems:(id)arg2 ;
-(void)setupLocationManager;
-(void)setupSearchViewController;
-(NSDate *)lastFullFetchTime;
-(void)setupLogger;
-(void)setupPullToRefreshManager;
-(void)setupPreview;
-(void)updateChannelFromImmersiveViewer;
-(void)syncWithContexualFeed;
-(void)sendOutNotificationIfExplorePrefetchFinished;
-(void)reloadFeed;
-(void)removeLastSpinner;
-(void)updateFeed;
-(void)setLastFullFetchTime:(NSDate *)arg1 ;
-(id)generateRankToken;
-(id)generateLocation;
-(IGFeedFocusCoordinator *)mediaFocusCoordinator;
-(void)setCurrentActiveChannelIndexPath:(NSIndexPath *)arg1 ;
-(void)loadNextPage;
-(NSIndexPath *)currentActiveChannelIndexPath;
-(void)setupVideoCellManagerForCollectionView:(id)arg1 ;
-(void)setVideoCellManager:(IGFeedVideoCellManager *)arg1 ;
-(void)scrollToItem:(id)arg1 animated:(char)arg2 ;
-(void)playVideoForChannel:(id)arg1 startTime:(float)arg2 ;
-(void)backgroundFetchExploreIfStale;
-(void)trimFeedItemsByAmount:(unsigned)arg1 ;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(void)logImpressions;
-(IGExploreMainFeedLogger *)logger;
-(IGExploreMainFeedPreviewingHandler *)previewDelegate;
-(void)setPreviewDelegate:(IGExploreMainFeedPreviewingHandler *)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(id)init;
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
-(int)viewType;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)addItems:(id)arg1 ;
-(IGSearchViewController *)searchController;
-(void)setSearchController:(IGSearchViewController *)arg1 ;
-(IGSpinnerModel *)spinner;
-(void)setFeedLayout:(IGExploreMainFeedLayout *)arg1 ;
-(IGExploreMainFeedLayout *)feedLayout;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(NSArray *)allItems;
-(IGExploreVolumeViewController *)volumeViewController;
@end

