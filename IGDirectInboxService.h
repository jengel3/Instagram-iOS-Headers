

@class IGUserSession, NSDate, IGDirectInboxNetworker, IGDirectThreadNetworker, IGDirectCache, NSOrderedSet, IGDirectInboxPendingRequests;

@interface IGDirectInboxService : NSObject {

	char _isRefreshingInbox;
	char _isTailLoadingInbox;
	IGUserSession* _userSession;
	NSDate* _cacheExpirationDate;
	IGDirectInboxNetworker* _inboxNetworker;
	IGDirectThreadNetworker* _threadNetworker;

}

@property (nonatomic,__weak,readonly) IGUserSession * userSession;                          //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGDirectCache * cache; 
@property (nonatomic,retain) NSDate * cacheExpirationDate;                                  //@synthesize cacheExpirationDate=_cacheExpirationDate - In the implementation block
@property (nonatomic,readonly) IGDirectInboxNetworker * inboxNetworker;                     //@synthesize inboxNetworker=_inboxNetworker - In the implementation block
@property (nonatomic,readonly) IGDirectThreadNetworker * threadNetworker;                   //@synthesize threadNetworker=_threadNetworker - In the implementation block
@property (assign,nonatomic) char isRefreshingInbox;                                        //@synthesize isRefreshingInbox=_isRefreshingInbox - In the implementation block
@property (assign,nonatomic) char isTailLoadingInbox;                                       //@synthesize isTailLoadingInbox=_isTailLoadingInbox - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * inboxThreads; 
@property (nonatomic,readonly) IGDirectInboxPendingRequests * pendingRequests; 
@property (nonatomic,readonly) unsigned inboxSubscriptionStatus; 
-(id)initWithUserSession:(id)arg1 ;
-(void)fetchThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)isRefreshingInbox;
-(char)isTailLoadingInbox;
-(void)markLoadingStateFromFirstPage:(char)arg1 ;
-(void)unmarkLoadingStateFromFirstPage:(char)arg1 ;
-(unsigned)inboxSubscriptionStatus;
-(void)requestInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)resetLocalInboxBadgeCount;
-(IGDirectInboxNetworker *)inboxNetworker;
-(IGDirectThreadNetworker *)threadNetworker;
-(id)threadWithId:(id)arg1 ;
-(void)setIsRefreshingInbox:(char)arg1 ;
-(void)setIsTailLoadingInbox:(char)arg1 ;
-(NSOrderedSet *)inboxThreads;
-(void)fetchInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)clearInboxBadgeCount;
-(void)setThreadMuted:(char)arg1 threadId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)cacheExpirationDate;
-(void)setCacheExpirationDate:(NSDate *)arg1 ;
-(IGDirectCache *)cache;
-(IGUserSession *)userSession;
-(IGDirectInboxPendingRequests *)pendingRequests;
@end

