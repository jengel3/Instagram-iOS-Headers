

@class IGDirectCache, IGDirectPendingNetworker, IGDirectThreadStore, NSOrderedSet, IGDirectInboxPendingRequests;

@interface IGDirectPendingInboxService : NSObject {

	IGDirectCache* _cache;
	IGDirectPendingNetworker* _pendingInboxNetworker;

}

@property (nonatomic,readonly) IGDirectCache * cache;                                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) IGDirectThreadStore * threadStore; 
@property (nonatomic,readonly) IGDirectPendingNetworker * pendingInboxNetworker;              //@synthesize pendingInboxNetworker=_pendingInboxNetworker - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * pendingThreads; 
@property (nonatomic,readonly) IGDirectInboxPendingRequests * pendingRequests; 
-(void)allowThreadsWithIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineThreadsWithIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IGDirectThreadStore *)threadStore;
-(void)remoteFetchInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(IGDirectPendingNetworker *)pendingInboxNetworker;
-(void)updatePendingRequestWithChangedThreadCount:(unsigned)arg1 ;
-(NSOrderedSet *)pendingThreads;
-(void)fetchDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)init;
-(IGDirectCache *)cache;
-(IGDirectInboxPendingRequests *)pendingRequests;
@end

