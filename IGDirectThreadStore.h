
#import <Instagram/IGRealtimeOperationDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>
#import <Instagram/IGThreadStoreProtocol.h>
#import <Instagram/IGDirectCaching.h>

@class NSMapTable, NSString, IGNonCurrentUserDefaults, IGDirectRefreshService, IGBadgeHelper, IGDirectThreadDiskCache, IGRealtimeManager, IGDirectThreadMerger;

@interface IGDirectThreadStore : NSObject <IGRealtimeOperationDelegate, IGUserSessionClearableObject, IGThreadStoreProtocol, IGDirectCaching> {

	NSMapTable* _threads;
	unsigned _backgroundTask;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	IGDirectRefreshService* _directRefreshService;
	IGBadgeHelper* _badgeHelper;
	IGDirectThreadDiskCache* _directThreadDiskCache;
	IGRealtimeManager* _realtimeManager;
	IGDirectThreadMerger* _threadMerger;

}

@property (nonatomic,readonly) NSString * userSessionPK;                                          //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,readonly) IGNonCurrentUserDefaults * sessionUserDefaults;                    //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,__weak,readonly) IGDirectRefreshService * directRefreshService;              //@synthesize directRefreshService=_directRefreshService - In the implementation block
@property (nonatomic,readonly) IGBadgeHelper * badgeHelper;                                       //@synthesize badgeHelper=_badgeHelper - In the implementation block
@property (nonatomic,retain) IGDirectThreadDiskCache * directThreadDiskCache;                     //@synthesize directThreadDiskCache=_directThreadDiskCache - In the implementation block
@property (nonatomic,retain) IGRealtimeManager * realtimeManager;                                 //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (nonatomic,retain) IGDirectThreadMerger * threadMerger;                                 //@synthesize threadMerger=_threadMerger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(NSString *)userSessionPK;
-(void)willSwitchUsers;
-(void)willLogOut;
-(IGBadgeHelper *)badgeHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)onBackground;
-(IGDirectThreadDiskCache *)directThreadDiskCache;
-(id)storedThreadWithID:(id)arg1 ;
-(IGDirectThreadMerger *)threadMerger;
-(void)storeThread:(id)arg1 ;
-(void)postInboxUpdatedNotification;
-(void)cacheThreadsToDisk:(id)arg1 ;
-(void)fetchThreadsWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)cacheThreadToDisk:(id)arg1 withAdditionalContent:(char)arg2 ;
-(IGRealtimeManager *)realtimeManager;
-(id)threadsWithOptions:(id)arg1 ;
-(id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned)arg2 ;
-(void)fetchThreadWithID:(id)arg1 cursorOption:(unsigned)arg2 cursorValue:(id)arg3 mergeOption:(unsigned)arg4 successfulThreadHandler:(/*^block*/id)arg5 failureHandler:(/*^block*/id)arg6 ;
-(void)addContent:(id)arg1 forThreadId:(id)arg2 ;
-(void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(char)arg3 ;
-(id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(void)handleAddMessageRealtimeEventWithDictionary:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleRemoveRealtimeEventForItemWithId:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleReplaceMessageRealtimeEventWithDictionary:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleRealtimeSeenEventForUserId:(id)arg1 contentInfo:(id)arg2 andThreadId:(id)arg3 ;
-(void)handleRealtimeThreadEventWithThreadInfo:(id)arg1 ;
-(void)handleRealtimeUnseenCountEventWithCount:(id)arg1 withSequenceString:(id)arg2 ;
-(IGDirectRefreshService *)directRefreshService;
-(void)postThreadsNeedRefreshNotification;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(id)storedThreadWithUsers:(id)arg1 ;
-(id)allPendingMessages;
-(void)removePendingMessage:(id)arg1 ;
-(void)removeAllPendingMessages;
-(void)updateOrAddPendingMessage:(id)arg1 ;
-(void)removeThreadWithId:(id)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 directRefreshService:(id)arg3 badgeHelper:(id)arg4 ;
-(void)setDirectThreadDiskCache:(IGDirectThreadDiskCache *)arg1 ;
-(void)setRealtimeManager:(IGRealtimeManager *)arg1 ;
-(void)setThreadMerger:(IGDirectThreadMerger *)arg1 ;
-(void)fetchThreadWithID:(id)arg1 retryCount:(int)arg2 cursorOption:(unsigned)arg3 cursorValue:(id)arg4 mergeOption:(unsigned)arg5 successfulThreadHandler:(/*^block*/id)arg6 failureHandler:(/*^block*/id)arg7 ;
-(void)refreshPendingInboxWithOldestCursor:(id)arg1 successfulInboxHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)logRequestTimePerfWithView:(id)arg1 duration:(double)arg2 threadID:(id)arg3 succeeded:(char)arg4 isFirstPage:(char)arg5 ;
-(void)addUsers:(id)arg1 toThread:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)deleteContent:(id)arg1 fromThread:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)leaveThreadWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)renameThreadWithID:(id)arg1 toName:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)blockCreatorOfPendingThreadWithThreadID:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)sendSeenTimestampForThreadID:(id)arg1 forContent:(id)arg2 ;
-(void)acceptDirectMessagesFromUserID:(id)arg1 accept:(char)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(unsigned)subscriptionStatus;
-(void)dealloc;
@end

