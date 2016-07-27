
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGDirectPendingInboxThreadItemControllerDelegate.h>
#import <Instagram/IGDirectPendingInboxControllerType.h>

@protocol IGDirectPendingInboxDelegate;
@class IGUserSession, IGListCollectionView, IGListAdapter, IGListAdapterPerfLogger, IGRefreshControl, IGDirectPendingInboxService, IGDirectPendingInboxAnalyticsLogger, IGDirectUIPerfLogProxy, IGDirectInboxCellSwipeCoordinator, IGDirectInboxCellSelectCoordinator, IGDirectPendingInboxNuxViewModel, IGDirectPendingInboxNuxItemController, NSString;

@interface IGDirectPendingInboxViewController2 : IGViewController <IGListAdapterDataSource, UIScrollViewDelegate, IGDirectPendingInboxThreadItemControllerDelegate, IGDirectPendingInboxControllerType> {

	id<IGDirectPendingInboxDelegate> _delegate;
	int _totalPending;
	IGUserSession* _userSession;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGListAdapterPerfLogger* _adapterPerfLogger;
	IGRefreshControl* _refreshControl;
	IGDirectPendingInboxService* _service;
	IGDirectPendingInboxAnalyticsLogger* _analyticsLogger;
	IGDirectUIPerfLogProxy* _uiPerfLogger;
	IGDirectInboxCellSwipeCoordinator* _swipeCoordinator;
	IGDirectInboxCellSelectCoordinator* _selectCoordinator;
	IGDirectPendingInboxNuxViewModel* _nuxViewModel;
	IGDirectPendingInboxNuxItemController* _nuxItemController;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                            //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                            //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListAdapterPerfLogger * adapterPerfLogger;                            //@synthesize adapterPerfLogger=_adapterPerfLogger - In the implementation block
@property (nonatomic,readonly) IGRefreshControl * refreshControl;                                      //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,readonly) IGDirectPendingInboxService * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IGDirectPendingInboxAnalyticsLogger * analyticsLogger;                  //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) IGDirectUIPerfLogProxy * uiPerfLogger;                                  //@synthesize uiPerfLogger=_uiPerfLogger - In the implementation block
@property (nonatomic,readonly) IGDirectInboxCellSwipeCoordinator * swipeCoordinator;                   //@synthesize swipeCoordinator=_swipeCoordinator - In the implementation block
@property (nonatomic,readonly) IGDirectInboxCellSelectCoordinator * selectCoordinator;                 //@synthesize selectCoordinator=_selectCoordinator - In the implementation block
@property (nonatomic,readonly) IGDirectPendingInboxNuxViewModel * nuxViewModel;                        //@synthesize nuxViewModel=_nuxViewModel - In the implementation block
@property (nonatomic,readonly) IGDirectPendingInboxNuxItemController * nuxItemController;              //@synthesize nuxItemController=_nuxItemController - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int totalPending;                                                         //@synthesize totalPending=_totalPending - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)setTotalPending:(int)arg1 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(int)totalPending;
-(IGDirectPendingInboxAnalyticsLogger *)analyticsLogger;
-(void)inboxThreadItemController:(id)arg1 didAllowThreadWithId:(id)arg2 ;
-(void)inboxThreadItemController:(id)arg1 didDeclineThreadWithId:(id)arg2 ;
-(void)setupCollectionViewAndListAdapter;
-(void)updateInboxUIStateAnimated:(char)arg1 ;
-(IGDirectInboxCellSwipeCoordinator *)swipeCoordinator;
-(void)fetchInboxDataFromFirstPage:(char)arg1 ;
-(void)fetchNextPage;
-(IGDirectUIPerfLogProxy *)uiPerfLogger;
-(id)initWithUserSession:(id)arg1 service:(id)arg2 analyticsLogger:(id)arg3 uiPerfLogger:(id)arg4 ;
-(IGDirectInboxCellSelectCoordinator *)selectCoordinator;
-(void)updateViewWithUpdatedContentInsets;
-(IGDirectPendingInboxNuxViewModel *)nuxViewModel;
-(IGDirectPendingInboxNuxItemController *)nuxItemController;
-(IGListAdapterPerfLogger *)adapterPerfLogger;
-(char)prefersTabBarHidden;
-(void)setDelegate:(id<IGDirectPendingInboxDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(id<IGDirectPendingInboxDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(IGRefreshControl *)refreshControl;
-(IGDirectPendingInboxService *)service;
-(IGUserSession *)userSession;
-(void)refresh;
@end

