

@class IGDirectCache, NSDate, IGDirectInboxNetworker, IGDirectThreadNetworker, IGDirectThreadStore, NSOrderedSet;

@interface IGDirectCoreService : NSObject {

	char _isRefreshingInbox;
	char _isTailLoadingInbox;
	IGDirectCache* _cache;
	NSDate* _cacheExpirationDate;
	IGDirectInboxNetworker* _inboxNetworker;
	IGDirectThreadNetworker* _threadNetworker;

}

@property (nonatomic,readonly) IGDirectThreadStore * threadStore; 
@property (nonatomic,readonly) IGDirectCache * cache;                                  //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * cacheExpirationDate;                             //@synthesize cacheExpirationDate=_cacheExpirationDate - In the implementation block
@property (nonatomic,readonly) IGDirectInboxNetworker * inboxNetworker;                //@synthesize inboxNetworker=_inboxNetworker - In the implementation block
@property (nonatomic,readonly) IGDirectThreadNetworker * threadNetworker;              //@synthesize threadNetworker=_threadNetworker - In the implementation block
@property (assign,nonatomic) char isRefreshingInbox;                                   //@synthesize isRefreshingInbox=_isRefreshingInbox - In the implementation block
@property (assign,nonatomic) char isTailLoadingInbox;                                  //@synthesize isTailLoadingInbox=_isTailLoadingInbox - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * inboxThreads; 
@property (nonatomic,readonly) unsigned inboxSubscriptionStatus; 
-(IGDirectThreadStore *)threadStore;
-(void)fetchThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markLoadingStateFromFirstPage:(char)arg1 ;
-(void)unmarkLoadingStateFromFirstPage:(char)arg1 ;
-(unsigned)inboxSubscriptionStatus;
-(void)localFetchInboxDataFromFirstPage:(char)arg1 allowNetworkingIfCacheMiss:(char)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)remoteFetchInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)resetLocalInboxBadgeCount;
-(IGDirectThreadNetworker *)threadNetworker;
-(id)threadWithId:(id)arg1 ;
-(void)setIsRefreshingInbox:(char)arg1 ;
-(void)setIsTailLoadingInbox:(char)arg1 ;
-(NSDate *)cacheExpirationDate;
-(void)setCacheExpirationDate:(NSDate *)arg1 ;
-(char)isTailLoadingInbox;
-(char)isRefreshingInbox;
-(void)setThreadMuted:(char)arg1 threadId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IGDirectInboxNetworker *)inboxNetworker;
-(void)fetchInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(NSOrderedSet *)inboxThreads;
-(void)clearInboxBadgeCount;
-(id)init;
-(IGDirectCache *)cache;
@end

