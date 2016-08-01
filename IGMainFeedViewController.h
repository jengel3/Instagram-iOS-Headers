
#import <Instagram/IGViewController.h>
#import <Instagram/IGAlbumDataControllerListener.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGMegaphoneItemControllerDelegate.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGFeedScrollViewListener.h>
#import <Instagram/IGFeedPreviewingType.h>
#import <Instagram/IGMainFeedNetworkSourceDelegate.h>
#import <Instagram/IGMainFeedNetworkSourceControllerDelegate.h>
#import <Instagram/IGBugReportingProtocol.h>

@protocol IGFeedMegaphoneProvider;
@class IGListCollectionView, IGListAdapter, IGUser, IGFeedStatusView, IGRefreshControl, IGDogfooderAlertBarPresenter, IGMediaUploadManager, IGFindFriendsItemController, IGFeedPreviewingHandler, IGListAdapterUpdaterLogger, IGFeedViewControllerScrollPerfLogger, IGFeedScrollViewAnnouncer, IGMainFeedNudgeHelper, IGAlbumDataController, IGAlbumTrayLoggingContext, IGFeedItemControllerComponents, IGFollowAccountListModel, IGFeedReshareNUXManager, IGMainFeedNetworkSourceController, IGAlbumTrayItemController, NSString;

@interface IGMainFeedViewController : IGViewController <IGAlbumDataControllerListener, IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGMegaphoneItemControllerDelegate, IGFeedStatusViewDelegate, IGFeedScrollViewListener, IGFeedPreviewingType, IGMainFeedNetworkSourceDelegate, IGMainFeedNetworkSourceControllerDelegate, IGBugReportingProtocol> {

	char _hasQueuedUpdate;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGUser* _currentUser;
	IGFeedStatusView* _feedStatusView;
	IGRefreshControl* _refreshControl;
	id<IGFeedMegaphoneProvider> _megaphoneProvider;
	IGDogfooderAlertBarPresenter* _dogfooderAlertBarPresenter;
	IGMediaUploadManager* _uploadManager;
	IGFindFriendsItemController* _findFriendsItemController;
	IGFeedPreviewingHandler* _previewingHandler;
	IGListAdapterUpdaterLogger* _listAdapterUpdaterLogger;
	IGFeedViewControllerScrollPerfLogger* _scrollPerfLogger;
	IGFeedScrollViewAnnouncer* _feedScrollAnnouncer;
	IGMainFeedNudgeHelper* _nudgeHelper;
	IGAlbumDataController* _albumDataController;
	IGAlbumTrayLoggingContext* _albumTrayLoggingContext;
	IGFeedItemControllerComponents* _feedItemControllerComponents;
	IGFollowAccountListModel* _followAccountListModel;
	IGFeedReshareNUXManager* _reshareNUXManager;
	IGMainFeedNetworkSourceController* _networkSourceController;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;                                                //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                       //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * feedStatusView;                                          //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,readonly) IGRefreshControl * refreshControl;                                          //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,readonly) id<IGFeedMegaphoneProvider> megaphoneProvider;                              //@synthesize megaphoneProvider=_megaphoneProvider - In the implementation block
@property (nonatomic,readonly) IGDogfooderAlertBarPresenter * dogfooderAlertBarPresenter;                  //@synthesize dogfooderAlertBarPresenter=_dogfooderAlertBarPresenter - In the implementation block
@property (nonatomic,readonly) IGMediaUploadManager * uploadManager;                                       //@synthesize uploadManager=_uploadManager - In the implementation block
@property (nonatomic,readonly) IGFindFriendsItemController * findFriendsItemController;                    //@synthesize findFriendsItemController=_findFriendsItemController - In the implementation block
@property (nonatomic,readonly) IGFeedPreviewingHandler * previewingHandler;                                //@synthesize previewingHandler=_previewingHandler - In the implementation block
@property (nonatomic,readonly) IGListAdapterUpdaterLogger * listAdapterUpdaterLogger;                      //@synthesize listAdapterUpdaterLogger=_listAdapterUpdaterLogger - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerScrollPerfLogger * scrollPerfLogger;                    //@synthesize scrollPerfLogger=_scrollPerfLogger - In the implementation block
@property (nonatomic,readonly) IGFeedScrollViewAnnouncer * feedScrollAnnouncer;                            //@synthesize feedScrollAnnouncer=_feedScrollAnnouncer - In the implementation block
@property (nonatomic,readonly) IGMainFeedNudgeHelper * nudgeHelper;                                        //@synthesize nudgeHelper=_nudgeHelper - In the implementation block
@property (nonatomic,readonly) IGAlbumDataController * albumDataController;                                //@synthesize albumDataController=_albumDataController - In the implementation block
@property (nonatomic,readonly) IGAlbumTrayLoggingContext * albumTrayLoggingContext;                        //@synthesize albumTrayLoggingContext=_albumTrayLoggingContext - In the implementation block
@property (nonatomic,readonly) IGFeedItemControllerComponents * feedItemControllerComponents;              //@synthesize feedItemControllerComponents=_feedItemControllerComponents - In the implementation block
@property (nonatomic,retain) IGFollowAccountListModel * followAccountListModel;                            //@synthesize followAccountListModel=_followAccountListModel - In the implementation block
@property (assign,nonatomic) char hasQueuedUpdate;                                                         //@synthesize hasQueuedUpdate=_hasQueuedUpdate - In the implementation block
@property (nonatomic,retain) IGFeedReshareNUXManager * reshareNUXManager;                                  //@synthesize reshareNUXManager=_reshareNUXManager - In the implementation block
@property (nonatomic,readonly) IGMainFeedNetworkSourceController * networkSourceController;                //@synthesize networkSourceController=_networkSourceController - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGAlbumTrayItemController * albumTrayItemController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)changeView;
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(IGAlbumTrayItemController *)albumTrayItemController;
-(IGListAdapter *)listAdapter;
-(IGListAdapterUpdaterLogger *)listAdapterUpdaterLogger;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)albumDataController:(id)arg1 didUpdateWithRefreshType:(int)arg2 updateDuration:(double)arg3 ;
-(void)albumDataController:(id)arg1 fetchTrayDidFailWithError:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 ;
-(void)setupCollectionViewAndAdapter;
-(void)fetchNextPage;
-(void)didDismissMegaphoneItemController:(id)arg1 ;
-(void)megaphoneItemController:(id)arg1 didSelectButton:(id)arg2 ;
-(void)mainFeedNetworkSourceDidGetEmptyNewStories:(id)arg1 ;
-(void)mainFeedNetworkSource:(id)arg1 didGetNumberOfNewStories:(int)arg2 ;
-(void)setReshareNUXManager:(IGFeedReshareNUXManager *)arg1 ;
-(IGFeedReshareNUXManager *)reshareNUXManager;
-(id)bugReportDescription;
-(IGFollowAccountListModel *)followAccountListModel;
-(IGAlbumDataController *)albumDataController;
-(void)setupFeedStatusView;
-(IGDogfooderAlertBarPresenter *)dogfooderAlertBarPresenter;
-(void)onFeedItemWillPost:(id)arg1 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onApplicationWillEnterForegroundNotification:(id)arg1 ;
-(IGMainFeedNetworkSourceController *)networkSourceController;
-(void)showFakePullToRefresh;
-(void)setHasQueuedUpdate:(char)arg1 ;
-(char)hasQueuedUpdate;
-(IGFeedViewControllerScrollPerfLogger *)scrollPerfLogger;
-(void)loadPrefetchContent;
-(void)updateFeedStateAnimated:(char)arg1 finishRefreshing:(char)arg2 ;
-(IGMediaUploadManager *)uploadManager;
-(id<IGFeedMegaphoneProvider>)megaphoneProvider;
-(char)shouldAddFindFriendsItemController;
-(IGFindFriendsItemController *)findFriendsItemController;
-(void)setFollowAccountListModel:(IGFollowAccountListModel *)arg1 ;
-(void)didTapOnHeaderToReloadFeed:(id)arg1 ;
-(void)foregroundTriggerFetchFeed:(id)arg1 ;
-(IGMainFeedNudgeHelper *)nudgeHelper;
-(IGAlbumTrayLoggingContext *)albumTrayLoggingContext;
-(IGFeedScrollViewAnnouncer *)feedScrollAnnouncer;
-(IGFeedPreviewingHandler *)previewingHandler;
-(IGFeedItemControllerComponents *)feedItemControllerComponents;
-(IGFeedStatusView *)feedStatusView;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)scrollViewWillScrollNearBottom:(id)arg1 ;
-(void)scrollViewWillScrollNearTop:(id)arg1 ;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(void)scrollToTopOnTappedTabBar;
-(char)enableNavState;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(IGRefreshControl *)refreshControl;
-(IGUser *)currentUser;
-(void)refresh;
@end

