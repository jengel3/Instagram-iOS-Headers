
#import <Instagram/IGViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGFeedScrollViewListener.h>
#import <Instagram/IGFeedPreviewingType.h>
#import <Instagram/IGPagingListAdapterControllerDelegate.h>
#import <Instagram/IGBugReportingProtocol.h>

@class IGListCollectionView, IGFeedNetworkSource, IGListAdapter, IGContextualFeedItemConfiguration, IGUser, IGFeedStatusView, IGRefreshControl, IGFeedPreviewingHandler, IGListAdapterPerfLogger, IGFeedScrollViewAnnouncer, IGFeedItemControllerComponents, IGPagingListAdapterController, IGFeedFocusCoordinator, NSString;

@interface IGContextualFeedViewController : IGViewController <IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFeedStatusViewDelegate, IGFeedScrollViewListener, IGFeedPreviewingType, IGPagingListAdapterControllerDelegate, IGBugReportingProtocol> {

	char _hasScrolledToFocusedItem;
	IGListCollectionView* _collectionView;
	IGFeedNetworkSource* _feedNetworkSource;
	IGListAdapter* _listAdapter;
	IGContextualFeedItemConfiguration* _itemConfiguration;
	IGUser* _currentUser;
	IGFeedStatusView* _feedStatusView;
	IGRefreshControl* _refreshControl;
	IGFeedPreviewingHandler* _previewingHandler;
	IGListAdapterPerfLogger* _adapterPerfLogger;
	IGFeedScrollViewAnnouncer* _feedScrollAnnouncer;
	IGFeedItemControllerComponents* _feedItemControllerComponents;
	IGPagingListAdapterController* _pagingListAdapterController;
	IGFeedFocusCoordinator* _focusCoordinator;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;                                                //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGContextualFeedItemConfiguration * itemConfiguration;                      //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                       //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * feedStatusView;                                          //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,readonly) IGRefreshControl * refreshControl;                                          //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,readonly) IGFeedPreviewingHandler * previewingHandler;                                //@synthesize previewingHandler=_previewingHandler - In the implementation block
@property (nonatomic,readonly) IGListAdapterPerfLogger * adapterPerfLogger;                                //@synthesize adapterPerfLogger=_adapterPerfLogger - In the implementation block
@property (nonatomic,readonly) IGFeedScrollViewAnnouncer * feedScrollAnnouncer;                            //@synthesize feedScrollAnnouncer=_feedScrollAnnouncer - In the implementation block
@property (nonatomic,readonly) IGFeedItemControllerComponents * feedItemControllerComponents;              //@synthesize feedItemControllerComponents=_feedItemControllerComponents - In the implementation block
@property (nonatomic,readonly) IGPagingListAdapterController * pagingListAdapterController;                //@synthesize pagingListAdapterController=_pagingListAdapterController - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                                  //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char hasScrolledToFocusedItem;                                                //@synthesize hasScrolledToFocusedItem=_hasScrolledToFocusedItem - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                                    //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
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
-(IGListAdapter *)listAdapter;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(void)scrollViewDidEndDragging:(id)arg1 ;
-(void)setupCollectionViewAndAdapter;
-(void)fetchNextPage;
-(void)setupFeedStatusView;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)refreshDataIfNotFullyLoaded;
-(void)scrollToFocusedItem;
-(IGPagingListAdapterController *)pagingListAdapterController;
-(char)hasScrolledToFocusedItem;
-(void)setHasScrolledToFocusedItem:(char)arg1 ;
-(void)fetchPreviousPage;
-(IGFeedNetworkSource *)feedNetworkSource;
-(IGContextualFeedItemConfiguration *)itemConfiguration;
-(IGFeedScrollViewAnnouncer *)feedScrollAnnouncer;
-(IGFeedPreviewingHandler *)previewingHandler;
-(IGFeedItemControllerComponents *)feedItemControllerComponents;
-(IGFeedStatusView *)feedStatusView;
-(void)updateFeedStateAnimated:(char)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)scrollViewWillScrollNearBottom:(id)arg1 ;
-(void)scrollViewWillScrollNearTop:(id)arg1 ;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(IGListAdapterPerfLogger *)adapterPerfLogger;
-(id)bugReportDescription;
-(id)initWithFeedNetworkSource:(id)arg1 currentUser:(id)arg2 itemConfiguration:(id)arg3 focusCoordinator:(id)arg4 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
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

