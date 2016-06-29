
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGMegaphoneItemControllerDelegate.h>
#import <Instagram/IGDirectInboxThreadItemControllerDelegate.h>
#import <Instagram/IGDirectInboxPendingRequestsItemControllerDelegate.h>
#import <Instagram/IGDirectInboxControllerType.h>
#import <Instagram/IGUIPerfLoggable.h>

@class IGUserSession, IGDirectCoreService, IGDirectCache, IGDirectInboxThreadCellViewModel, IGDirectInboxPendingRequests, IGGenericMegaphone, IGListCollectionView, IGListAdapter, IGRefreshControl, IGDirectEmptyInboxView, IGDirectInboxUpdateObserver, IGDirectMainInboxAnalyticsLogger, IGDirectUIPerfLogProxy, IGDirectNewMessageCoordinator, NSString;

@interface IGDirectMainInboxViewController2 : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGMegaphoneItemControllerDelegate, IGDirectInboxThreadItemControllerDelegate, IGDirectInboxPendingRequestsItemControllerDelegate, IGDirectInboxControllerType, IGUIPerfLoggable> {

	IGUserSession* _userSession;
	IGDirectCoreService* _service;
	IGDirectCache* _cache;
	IGDirectInboxThreadCellViewModel* _currentlyOpenViewModel;
	IGDirectInboxPendingRequests* _pendingRequests;
	IGGenericMegaphone* _megaphone;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGRefreshControl* _refreshControl;
	IGDirectEmptyInboxView* _emptyInboxView;
	IGDirectInboxUpdateObserver* _inboxObserver;
	IGDirectMainInboxAnalyticsLogger* _analyticsLogger;
	IGDirectUIPerfLogProxy* _uiPerfLogger;
	IGDirectNewMessageCoordinator* _messageCoordinator;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                          //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGDirectCoreService * service;                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IGDirectCache * cache;                                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) IGDirectInboxThreadCellViewModel * currentlyOpenViewModel;              //@synthesize currentlyOpenViewModel=_currentlyOpenViewModel - In the implementation block
@property (nonatomic,retain) IGDirectInboxPendingRequests * pendingRequests;                         //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                         //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                          //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGRefreshControl * refreshControl;                                    //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) IGDirectEmptyInboxView * emptyInboxView;                                //@synthesize emptyInboxView=_emptyInboxView - In the implementation block
@property (nonatomic,retain) IGDirectInboxUpdateObserver * inboxObserver;                            //@synthesize inboxObserver=_inboxObserver - In the implementation block
@property (nonatomic,readonly) IGDirectMainInboxAnalyticsLogger * analyticsLogger;                   //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) IGDirectUIPerfLogProxy * uiPerfLogger;                                //@synthesize uiPerfLogger=_uiPerfLogger - In the implementation block
@property (nonatomic,readonly) IGDirectNewMessageCoordinator * messageCoordinator;                   //@synthesize messageCoordinator=_messageCoordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(id)initWithUserSession:(id)arg1 ;
-(IGGenericMegaphone *)megaphone;
-(IGDirectMainInboxAnalyticsLogger *)analyticsLogger;
-(void)inboxPendingRequestsItemController:(id)arg1 didUpdateToPendingRequests:(id)arg2 ;
-(void)inboxThreadItemController:(id)arg1 didSetThreadMuted:(char)arg2 threadId:(id)arg3 ;
-(void)inboxThreadItemController:(id)arg1 didSwipeOpenViewModel:(id)arg2 ;
-(void)inboxThreadItemController:(id)arg1 didDeleteThreadWithId:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 service:(id)arg2 cache:(id)arg3 analyticsLogger:(id)arg4 uiPerfLogger:(id)arg5 ;
-(void)setupCollectionViewAndListAdapter;
-(void)setupNewMessageButton;
-(void)setupMessageCoordinator;
-(void)didTapNewMessageButton:(id)arg1 ;
-(void)updateInboxUIState;
-(void)setInboxObserver:(IGDirectInboxUpdateObserver *)arg1 ;
-(void)setCurrentlyOpenViewModel:(IGDirectInboxThreadCellViewModel *)arg1 ;
-(void)fetchInboxDataFromFirstPage:(char)arg1 ;
-(IGDirectInboxThreadCellViewModel *)currentlyOpenViewModel;
-(void)fetchNextPage;
-(IGDirectUIPerfLogProxy *)uiPerfLogger;
-(void)didDismissMegaphoneItemController:(id)arg1 ;
-(IGDirectInboxUpdateObserver *)inboxObserver;
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(IGDirectNewMessageCoordinator *)messageCoordinator;
-(IGDirectEmptyInboxView *)emptyInboxView;
-(void)setEmptyInboxView:(IGDirectEmptyInboxView *)arg1 ;
-(void)pushToPendingInboxAnimated:(char)arg1 ;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(void)reloadInbox;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)extendedLayoutIncludesOpaqueBars;
-(char)automaticallyAdjustsScrollViewInsets;
-(IGRefreshControl *)refreshControl;
-(IGDirectCache *)cache;
-(IGDirectCoreService *)service;
-(IGUserSession *)userSession;
-(IGDirectInboxPendingRequests *)pendingRequests;
-(void)setPendingRequests:(IGDirectInboxPendingRequests *)arg1 ;
-(void)setup;
-(void)refresh;
@end

