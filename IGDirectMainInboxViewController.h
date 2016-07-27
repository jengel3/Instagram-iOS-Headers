
#import <Instagram/IGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectPendingInboxDelegate.h>
#import <Instagram/IGDirectPushPromptViewDelegate.h>
#import <Instagram/IGDirectInboxCellDelegate.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGDirectInboxControllerType.h>
#import <Instagram/IGUIPerfLoggable.h>

@class NSOrderedSet, IGUserSession, IGPlainTableView, NSString, IGDirectPendingRequestsHeaderView, NSArray, IGRefreshControl, IGGenericMegaphone, IGGenericMegaphoneView, IGDefaultGenericMegaphoneLogger, IGDirectEmptyInboxView, IGDirectUIPerfLogProxy, IGDirectPushPromptView, IGDirectInboxService, IGDirectMainInboxAnalyticsLogger, IGDirectNewMessageCoordinator, IGDirectThreadStore;

@interface IGDirectMainInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingInboxDelegate, IGDirectPushPromptViewDelegate, IGDirectInboxCellDelegate, IGGenericMegaphoneViewDelegate, IGDirectInboxControllerType, IGUIPerfLoggable> {

	char _isFetchingData;
	char _loadingPreviousThreads;
	char _hasLoadedOnce;
	char _needsRefreshForThreadUpdateNotification;
	NSOrderedSet* _threads;
	IGUserSession* _userSession;
	IGPlainTableView* _tableView;
	NSString* _oldestCursor;
	NSString* _nextCursor;
	IGDirectPendingRequestsHeaderView* _pendingRequestsHeader;
	NSString* _countedAt;
	NSArray* _pendingRequestUsers;
	int _pendingRequestCount;
	IGRefreshControl* _refreshControl;
	IGGenericMegaphone* _megaphone;
	IGGenericMegaphoneView* _megaphoneView;
	IGDefaultGenericMegaphoneLogger* _megaphoneLogger;
	IGDirectEmptyInboxView* _emptyInboxView;
	IGDirectUIPerfLogProxy* _perfLogProxy;
	IGDirectPushPromptView* _pushPromptView;
	IGDirectInboxService* _service;
	IGDirectMainInboxAnalyticsLogger* _analyticsLogger;
	IGDirectNewMessageCoordinator* _messageCoordinator;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                          //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSOrderedSet * threads;                                                   //@synthesize threads=_threads - In the implementation block
@property (nonatomic,readonly) IGDirectThreadStore * directThreadStore; 
@property (assign,nonatomic) char isFetchingData;                                                    //@synthesize isFetchingData=_isFetchingData - In the implementation block
@property (nonatomic,copy) NSString * oldestCursor;                                                  //@synthesize oldestCursor=_oldestCursor - In the implementation block
@property (nonatomic,copy) NSString * nextCursor;                                                    //@synthesize nextCursor=_nextCursor - In the implementation block
@property (assign,nonatomic) char loadingPreviousThreads;                                            //@synthesize loadingPreviousThreads=_loadingPreviousThreads - In the implementation block
@property (nonatomic,retain) IGDirectPendingRequestsHeaderView * pendingRequestsHeader;              //@synthesize pendingRequestsHeader=_pendingRequestsHeader - In the implementation block
@property (nonatomic,copy) NSString * countedAt;                                                     //@synthesize countedAt=_countedAt - In the implementation block
@property (nonatomic,copy) NSArray * pendingRequestUsers;                                            //@synthesize pendingRequestUsers=_pendingRequestUsers - In the implementation block
@property (assign,nonatomic) int pendingRequestCount;                                                //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                                      //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) IGGenericMegaphone * megaphone;                                         //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * megaphoneView;                                 //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,retain) IGDefaultGenericMegaphoneLogger * megaphoneLogger;                      //@synthesize megaphoneLogger=_megaphoneLogger - In the implementation block
@property (assign,nonatomic) char hasLoadedOnce;                                                     //@synthesize hasLoadedOnce=_hasLoadedOnce - In the implementation block
@property (nonatomic,retain) IGDirectEmptyInboxView * emptyInboxView;                                //@synthesize emptyInboxView=_emptyInboxView - In the implementation block
@property (assign,nonatomic) char needsRefreshForThreadUpdateNotification;                           //@synthesize needsRefreshForThreadUpdateNotification=_needsRefreshForThreadUpdateNotification - In the implementation block
@property (nonatomic,retain) IGDirectUIPerfLogProxy * perfLogProxy;                                  //@synthesize perfLogProxy=_perfLogProxy - In the implementation block
@property (nonatomic,retain) IGDirectPushPromptView * pushPromptView;                                //@synthesize pushPromptView=_pushPromptView - In the implementation block
@property (nonatomic,readonly) IGDirectInboxService * service;                                       //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IGDirectMainInboxAnalyticsLogger * analyticsLogger;                   //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) IGDirectNewMessageCoordinator * messageCoordinator;                   //@synthesize messageCoordinator=_messageCoordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(IGDirectThreadStore *)directThreadStore;
-(void)inboxUpdateNotificationReceivedWithMegaphone:(id)arg1 ;
-(void)inboxUpdateNotificationReceived:(id)arg1 ;
-(void)threadUpdateNotificationReceived;
-(void)setNeedsRefreshForThreadUpdateNotification:(char)arg1 ;
-(void)updateTableviewUIState;
-(void)setMegaphone:(IGGenericMegaphone *)arg1 ;
-(void)setMegaphoneLogger:(IGDefaultGenericMegaphoneLogger *)arg1 ;
-(void)setMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(IGGenericMegaphoneView *)megaphoneView;
-(void)updateTableHeaderView;
-(IGGenericMegaphone *)megaphone;
-(IGDefaultGenericMegaphoneLogger *)megaphoneLogger;
-(IGDirectPushPromptView *)pushPromptView;
-(void)refreshDataWithFullRefresh:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendNewDirect;
-(void)reloadDataFromPullToRefresh;
-(void)onAppForeground:(id)arg1 ;
-(IGDirectNewMessageCoordinator *)messageCoordinator;
-(char)isFetchingData;
-(char)needsRefreshForThreadUpdateNotification;
-(IGDirectUIPerfLogProxy *)perfLogProxy;
-(void)setIsFetchingData:(char)arg1 ;
-(void)setPendingRequestUsers:(NSArray *)arg1 ;
-(NSString *)oldestCursor;
-(void)setOldestCursor:(NSString *)arg1 ;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(void)setHasLoadedOnce:(char)arg1 ;
-(char)loadingPreviousThreads;
-(void)setLoadingPreviousThreads:(char)arg1 ;
-(void)replaceThread:(id)arg1 withThread:(id)arg2 ;
-(void)updateNux;
-(float)cellProfilePictureVerticalPadding;
-(char)shouldShowPendingInbox;
-(char)shouldShowEmptyInbox;
-(void)configureCellForCurrentPendingRequests:(id)arg1 ;
-(id)tableView:(id)arg1 threadCellForInboxPath:(id)arg2 ;
-(IGDirectEmptyInboxView *)emptyInboxView;
-(void)setEmptyInboxView:(IGDirectEmptyInboxView *)arg1 ;
-(NSArray *)pendingRequestUsers;
-(void)inboxCell:(id)arg1 wantsDeleteForThread:(id)arg2 ;
-(void)inboxCell:(id)arg1 setMuted:(char)arg2 forThread:(id)arg3 ;
-(void)pushToPendingInboxAnimated:(char)arg1 ;
-(char)findAndCloseActionCellsExcludingCell:(id)arg1 ;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3 ;
-(void)loadMoreThreads;
-(char)isFirstDelete;
-(void)performHideForThread:(id)arg1 ;
-(void)hideThreadLocally:(id)arg1 ;
-(void)threadUpdated:(id)arg1 ;
-(char)hasLoadedOnce;
-(void)legacyMegaphoneViewDidDismiss:(id)arg1 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(void)pendingInbox:(id)arg1 didUpdateThread:(id)arg2 withAccept:(char)arg3 remainingInviter:(id)arg4 ;
-(void)pendingInboxDidClear:(id)arg1 ;
-(void)pendingInboxDidActionThreads:(id)arg1 ;
-(void)pushPromptViewTappedDismiss:(id)arg1 ;
-(void)pushPromptViewDidTapSettingsButton:(id)arg1 ;
-(char)inboxCellWantsToPan:(id)arg1 ;
-(void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2 ;
-(void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2 ;
-(void)reloadInbox;
-(NSString *)nextCursor;
-(void)setNextCursor:(NSString *)arg1 ;
-(IGDirectPendingRequestsHeaderView *)pendingRequestsHeader;
-(void)setPendingRequestsHeader:(IGDirectPendingRequestsHeaderView *)arg1 ;
-(NSString *)countedAt;
-(void)setCountedAt:(NSString *)arg1 ;
-(void)setPerfLogProxy:(IGDirectUIPerfLogProxy *)arg1 ;
-(void)setPushPromptView:(IGDirectPushPromptView *)arg1 ;
-(IGDirectMainInboxAnalyticsLogger *)analyticsLogger;
-(int)pendingRequestCount;
-(void)setPendingRequestCount:(int)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(IGPlainTableView *)tableView;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
-(IGDirectInboxService *)service;
-(IGUserSession *)userSession;
-(NSOrderedSet *)threads;
@end

