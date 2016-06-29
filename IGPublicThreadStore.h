
#import <Instagram/IGThreadStoreNetworkingProtocol.h>
#import <Instagram/IGRealtimeOperationDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>
#import <Instagram/IGThreadStoreProtocol.h>

@class IGDirectThread, NSString, IGNonCurrentUserDefaults, NSMutableArray, NSArray, IGRealtimeManager, IGDirectThreadDiskCache;

@interface IGPublicThreadStore : NSObject <IGThreadStoreNetworkingProtocol, IGRealtimeOperationDelegate, IGUserSessionClearableObject, IGThreadStoreProtocol> {

	IGDirectThread* _ownedPublicThread;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSMutableArray* _unreadFollowedPublicThreads;
	NSMutableArray* _readFollowedPublicThreads;
	NSArray* _orderedFollowedPublicThreads;
	IGRealtimeManager* _realtimeManager;
	IGDirectThreadDiskCache* _directThreadDiskCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * userSessionPK;                                     //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;               //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) NSMutableArray * unreadFollowedPublicThreads;                 //@synthesize unreadFollowedPublicThreads=_unreadFollowedPublicThreads - In the implementation block
@property (nonatomic,retain) NSMutableArray * readFollowedPublicThreads;                   //@synthesize readFollowedPublicThreads=_readFollowedPublicThreads - In the implementation block
@property (nonatomic,retain) IGDirectThread * ownedPublicThread;                           //@synthesize ownedPublicThread=_ownedPublicThread - In the implementation block
@property (nonatomic,retain) NSArray * orderedFollowedPublicThreads;                       //@synthesize orderedFollowedPublicThreads=_orderedFollowedPublicThreads - In the implementation block
@property (nonatomic,retain) IGRealtimeManager * realtimeManager;                          //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (nonatomic,retain) IGDirectThreadDiskCache * directThreadDiskCache;              //@synthesize directThreadDiskCache=_directThreadDiskCache - In the implementation block
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userSessionPK;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)fetchThreadWithID:(id)arg1 cursorOption:(unsigned)arg2 cursorValue:(id)arg3 mergeOption:(unsigned)arg4 successfulThreadHandler:(/*^block*/id)arg5 failureHandler:(/*^block*/id)arg6 ;
-(id)storedThreadWithID:(id)arg1 ;
-(id)updateStoreWithThreadDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(IGDirectThread *)ownedPublicThread;
-(void)onBackground;
-(void)unarchiveCachedThreads;
-(IGDirectThreadDiskCache *)directThreadDiskCache;
-(void)storeMergedThread:(id)arg1 fromExistingThread:(id)arg2 ;
-(void)setOwnedPublicThread:(IGDirectThread *)arg1 ;
-(void)storeFollowedThread:(id)arg1 ;
-(void)postInboxUpdatedNotification;
-(NSArray *)orderedFollowedPublicThreads;
-(unsigned)indexOfThreadID:(id)arg1 inArray:(id)arg2 ;
-(NSMutableArray *)unreadFollowedPublicThreads;
-(NSMutableArray *)readFollowedPublicThreads;
-(void)setUnreadFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(void)setReadFollowedPublicThreads:(NSMutableArray *)arg1 ;
-(char)removeThreadWithID:(id)arg1 ;
-(void)storeThread:(id)arg1 into:(id)arg2 ;
-(/*^block*/id)itemComparator;
-(void)cacheThreadsToDisk:(id)arg1 ;
-(void)cacheThreadToDisk:(id)arg1 withAdditionalContent:(char)arg2 ;
-(void)storeThreadExistingThread:(id)arg1 ;
-(void)storeThread:(id)arg1 ;
-(void)postNotificationForAddedContent:(id)arg1 thread:(id)arg2 ;
-(void)setOrderedFollowedPublicThreads:(NSArray *)arg1 ;
-(void)addContent:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleAddMessageRealtimeEventWithDictionary:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleRemoveRealtimeEventForItemWithId:(id)arg1 forThreadId:(id)arg2 ;
-(void)handleReplaceViewCountRealtimeEventWithViewCount:(id)arg1 itemId:(id)arg2 threadID:(id)arg3 ;
-(IGRealtimeManager *)realtimeManager;
-(void)refreshInboxWithOldestCursor:(id)arg1 successfulInboxHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)postThreadsNeedRefreshNotification;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(id)updateStoreWithThread:(id)arg1 mergeOption:(unsigned)arg2 ;
-(id)getNextFollowedThreadIDForCurrentThreadId:(id)arg1 ;
-(void)markFollowedThreadAsRead:(id)arg1 ;
-(void)updateFollowedThreadsStatusWithDictionaries:(id)arg1 ;
-(void)updateOwnedThreadStatusWithDictionary:(id)arg1 ;
-(void)postInboxUpdatedNotificationWithMegaphone:(id)arg1 ;
-(void)getOwnedPublicThreadwithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)getUnreadFollowedPublicThreadsWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)getReadFollowedPublicThreadsWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)getPublicThreadForUserPK:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)deleteContent:(id)arg1 fromThread:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)recordThreadsDisplayingOrder;
-(void)updateThreadStoreWithUpload:(id)arg1 isNewUpload:(char)arg2 ;
-(void)subscribeRealTimeInfo:(id)arg1 ;
-(void)unSubscribeRealtime;
-(void)setRealtimeManager:(IGRealtimeManager *)arg1 ;
-(void)setDirectThreadDiskCache:(IGDirectThreadDiskCache *)arg1 ;
-(void)sendSeenTimestampForThreadID:(id)arg1 forContent:(id)arg2 ;
-(void)sanityCheckUrls:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)fetchThreadWithID:(id)arg1 retryCount:(int)arg2 cursorOption:(unsigned)arg3 cursorValue:(id)arg4 mergeOption:(unsigned)arg5 successfulThreadHandler:(/*^block*/id)arg6 failureHandler:(/*^block*/id)arg7 ;
-(id)threads;
@end

