
#import <Instagram/IGRealtimeOperationDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMapTable, NSString, IGNonCurrentUserDefaults, IGDirectThreadDiskCache, IGRealtimeManager;

@interface IGDirectThreadStore : NSObject <IGRealtimeOperationDelegate, IGUserSessionClearableObject> {

	NSMapTable* _threads;
	unsigned _backgroundTask;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	IGDirectThreadDiskCache* _directThreadDiskCache;
	IGRealtimeManager* _realtimeManager;

}

@property (nonatomic,retain) NSString * userSessionPK;                                     //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;               //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) IGDirectThreadDiskCache * directThreadDiskCache;              //@synthesize directThreadDiskCache=_directThreadDiskCache - In the implementation block
@property (nonatomic,retain) IGRealtimeManager * realtimeManager;                          //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(IGRealtimeManager *)realtimeManager;
-(void)setRealtimeManager:(IGRealtimeManager *)arg1 ;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(id)allThreadsIncludingLocal;
-(id)storedThreadWithID:(id)arg1 ;
-(void)refreshInboxWithNextMaxID:(id)arg1 successfulInboxHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)setMuteStatusOfThreadWithID:(id)arg1 to:(char)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)deleteLocalThreadWithID:(id)arg1 ;
-(void)hideThreadWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(id)allPendingThreadsSorted;
-(void)allowAllPendingThreadsSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)declineAllPendingThreadsSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)refreshPendingInboxWithNextMaxID:(id)arg1 successfulInboxHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(id)allThreadsSorted;
-(id)storedThreadWithUsers:(id)arg1 ;
-(void)onBackground;
-(IGDirectThreadDiskCache *)directThreadDiskCache;
-(void)storeThread:(id)arg1 withID:(id)arg2 ;
-(void)postInboxUpdatedNotification;
-(void)cacheThreadsToDisk:(id)arg1 ;
-(id)_sortedThreadsWithPending:(char)arg1 withUploads:(char)arg2 ;
-(id)updateStoreWithThreadDictionary:(id)arg1 isPending:(char)arg2 ;
-(void)postThreadUpdatedNotificationForThread:(id)arg1 ;
-(void)removeThreadWithID:(id)arg1 ;
-(id)updateStoreWithThreadDictionary:(id)arg1 ;
-(void)postThreadUpdatedNotificationForThread:(id)arg1 withReason:(int)arg2 ;
-(void)postNotificationForAddedContent:(id)arg1 thread:(id)arg2 ;
-(void)fetchThreadWithID:(id)arg1 withNextMaxID:(id)arg2 pending:(char)arg3 successfulThreadHandler:(/*^block*/id)arg4 failureHandler:(/*^block*/id)arg5 ;
-(void)postInboxUpdatedNotificationWithMegaphone:(id)arg1 ;
-(void)handleRealtimeAddContent:(id)arg1 threadID:(id)arg2 ;
-(void)handleAddMessageRealtimeEventWithDictionary:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleRemoveRealtimeEventForItemWithId:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleRealtimeSeenEventForUserId:(id)arg1 contentInfo:(id)arg2 andThreadId:(id)arg3 ;
-(void)handleRealtimeThreadEventWithThreadInfo:(id)arg1 ;
-(void)handleRealtimeUnseenCountEventWithCount:(id)arg1 withSequenceString:(id)arg2 ;
-(void)refreshInbox;
-(void)postThreadsNeedRefreshNotification;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)deleteContent:(id)arg1 fromThread:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)leaveThreadWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)sendSeenTimestampForThreadID:(id)arg1 forContent:(id)arg2 ;
-(void)allowPendingThreadWithThreadID:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)declinePendingThreadWithThreadID:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)blockCreatorOfPendingThreadWithThreadID:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)acceptDirectMessagesFromUserID:(id)arg1 accept:(char)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)renameThreadWithID:(id)arg1 toName:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)addUsers:(id)arg1 toThread:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)postThreadUpdatedNotificationForThreadID:(id)arg1 ;
-(void)updateThreadStoreWithUpload:(id)arg1 isNewUpload:(char)arg2 ;
-(void)postLocalThreadUpdatedFromUploadKey:(id)arg1 toThreadID:(id)arg2 ;
-(void)setDirectThreadDiskCache:(IGDirectThreadDiskCache *)arg1 ;
-(unsigned)subscriptionStatus;
-(void)archive;
-(void)dealloc;
@end

