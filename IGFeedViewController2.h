
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAlbumSubscriptionTrayNetworkSourceDelegate.h>
#import <Instagram/IGAnalyticsRaindropProtocol.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGMegaphoneItemControllerDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGScrollingHeaderDelegate.h>

@protocol IGFeedItemConfigurationType, IGFeedConfigurationType, IGFeedMegaphoneProvider;
@class IGListCollectionView, IGFeedNetworkSource, NSString, IGListAdapter, IGUser, IGFeedVideoCellManager, IGCollectionViewVisibility, IGFeedHeartAnimator, IGFeedStatusView, IGPullToRefreshViewManager, IGMediaUploadManager, IGFindFriendsItemController, IGListAdapterScrollingContext, IGFeedPreviewingHandler, IGFeedFocusCoordinator, IGFeedViewControllerTracker, IGFollowAccountListModel, IGAlbumSubscriptionTrayNetworkSource, IGAlbumSubscriptionTrayModel, IGAnalyticsMetadata, IGRaindropNavEvent, IGMutableRaindropRankInfo;

@interface IGFeedViewController2 : IGViewController <IGAlbumSubscriptionTrayNetworkSourceDelegate, IGAnalyticsRaindropProtocol, IGFeedNetworkSourceDelegate, IGFeedItemLoggingProviderDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGMegaphoneItemControllerDelegate, IGPullToRefreshProtocol, UICollectionViewDelegate, IGScrollingHeaderDelegate> {

	char _hasScrolledToFocusedItem;
	IGListCollectionView* _collectionView;
	IGFeedNetworkSource* _feedNetworkSource;
	NSString* _feedAnalyticsModule;
	IGListAdapter* _listAdapter;
	id<IGFeedItemConfigurationType> _itemConfiguration;
	id<IGFeedConfigurationType> _configuration;
	IGUser* _currentUser;
	IGFeedVideoCellManager* _videoCellManager;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedHeartAnimator* _heartAnimator;
	IGFeedStatusView* _feedStatusView;
	IGPullToRefreshViewManager* _pullToRefreshManager;
	id<IGFeedMegaphoneProvider> _megaphoneProvider;
	IGMediaUploadManager* _uploadManager;
	IGFindFriendsItemController* _findFriendsItemController;
	IGListAdapterScrollingContext* _scrollingContext;
	IGFeedPreviewingHandler* _previewingHandler;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGFeedViewControllerTracker* _impressionTracker;
	IGFollowAccountListModel* _followAccountListModel;
	IGAlbumSubscriptionTrayNetworkSource* _albumNetworkSource;
	IGAlbumSubscriptionTrayModel* _albumModel;

}

@property (nonatomic,readonly) IGListCollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                                //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (nonatomic,copy) NSString * feedAnalyticsModule;                                             //@synthesize feedAnalyticsModule=_feedAnalyticsModule - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                            //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> itemConfiguration;                      //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (nonatomic,readonly) id<IGFeedConfigurationType> configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                   //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                              //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;                  //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) IGFeedHeartAnimator * heartAnimator;                                    //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * feedStatusView;                                      //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,readonly) IGPullToRefreshViewManager * pullToRefreshManager;                      //@synthesize pullToRefreshManager=_pullToRefreshManager - In the implementation block
@property (nonatomic,readonly) id<IGFeedMegaphoneProvider> megaphoneProvider;                          //@synthesize megaphoneProvider=_megaphoneProvider - In the implementation block
@property (nonatomic,readonly) IGMediaUploadManager * uploadManager;                                   //@synthesize uploadManager=_uploadManager - In the implementation block
@property (nonatomic,readonly) IGFindFriendsItemController * findFriendsItemController;                //@synthesize findFriendsItemController=_findFriendsItemController - In the implementation block
@property (nonatomic,readonly) IGListAdapterScrollingContext * scrollingContext;                       //@synthesize scrollingContext=_scrollingContext - In the implementation block
@property (nonatomic,readonly) IGFeedPreviewingHandler * previewingHandler;                            //@synthesize previewingHandler=_previewingHandler - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                              //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char hasScrolledToFocusedItem;                                            //@synthesize hasScrolledToFocusedItem=_hasScrolledToFocusedItem - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerTracker * impressionTracker;                        //@synthesize impressionTracker=_impressionTracker - In the implementation block
@property (nonatomic,retain) IGFollowAccountListModel * followAccountListModel;                        //@synthesize followAccountListModel=_followAccountListModel - In the implementation block
@property (nonatomic,readonly) IGAlbumSubscriptionTrayNetworkSource * albumNetworkSource;              //@synthesize albumNetworkSource=_albumNetworkSource - In the implementation block
@property (nonatomic,retain) IGAlbumSubscriptionTrayModel * albumModel;                                //@synthesize albumModel=_albumModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo; 
-(IGFeedFocusCoordinator *)focusCoordinator;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)prepareFeedNetworkSourceForPreloading;
-(IGFeedNetworkSource *)feedNetworkSource;
-(void)albumNetworkSource:(id)arg1 didReceiveItems:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(id)analyticsModule;
-(void)setupCollectionViewAndAdapter;
-(char)enableNavState;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGPullToRefreshViewManager *)pullToRefreshManager;
-(void)scrollViewDidEndScrolling;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(IGFeedStatusView *)feedStatusView;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(IGFollowAccountListModel *)followAccountListModel;
-(IGFeedHeartAnimator *)heartAnimator;
-(IGListAdapterScrollingContext *)scrollingContext;
-(void)onRefreshButton:(id)arg1 ;
-(IGFeedPreviewingHandler *)previewingHandler;
-(void)onApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)refreshDataIfNotFullyLoaded;
-(void)layoutCollectionView;
-(void)scrollToFocusedItem;
-(void)updateFullViewImpressionTracker;
-(void)updateImpressionTrackers;
-(void)updatePageCells;
-(IGFeedViewControllerTracker *)impressionTracker;
-(char)hasScrolledToFocusedItem;
-(void)setHasScrolledToFocusedItem:(char)arg1 ;
-(IGAlbumSubscriptionTrayNetworkSource *)albumNetworkSource;
-(void)fetchNextPage;
-(IGAlbumSubscriptionTrayModel *)albumModel;
-(IGMediaUploadManager *)uploadManager;
-(id<IGFeedMegaphoneProvider>)megaphoneProvider;
-(char)shouldAddFindFriendsItemController;
-(IGFindFriendsItemController *)findFriendsItemController;
-(id<IGFeedItemConfigurationType>)itemConfiguration;
-(void)updateFeedState;
-(void)setFollowAccountListModel:(IGFollowAccountListModel *)arg1 ;
-(void)showErrorMessage:(id)arg1 ;
-(void)setAlbumModel:(IGAlbumSubscriptionTrayModel *)arg1 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(void)didDismissMegaphoneItemController:(id)arg1 ;
-(void)didChangeHeaderAdjustmentAmount:(float)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 itemConfiguration:(id)arg2 configuration:(id)arg3 currentUser:(id)arg4 focusCoordinator:(id)arg5 megaphoneProvider:(id)arg6 uploadManager:(id)arg7 ;
-(NSString *)feedAnalyticsModule;
-(void)setFeedAnalyticsModule:(NSString *)arg1 ;
-(void)updateRefreshButton;
-(void)updateTitle;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id<IGFeedConfigurationType>)configuration;
-(id)refreshButton;
-(IGUser *)currentUser;
-(void)refresh;
@end

