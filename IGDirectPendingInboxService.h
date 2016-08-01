

@class IGDirectPendingInboxNetworker, IGDirectCache, NSOrderedSet, IGDirectInboxPendingRequests;

@interface IGDirectPendingInboxService : NSObject {

	IGDirectPendingInboxNetworker* _networker;

}

@property (nonatomic,readonly) IGDirectCache * cache; 
@property (nonatomic,readonly) IGDirectPendingInboxNetworker * networker;                   //@synthesize networker=_networker - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * pendingThreads; 
@property (nonatomic,readonly) IGDirectInboxPendingRequests * pendingRequests; 
-(void)fetchDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)allowThreadsWithIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineThreadsWithIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteFetchInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(IGDirectPendingInboxNetworker *)networker;
-(void)updatePendingRequestWithChangedThreadCount:(unsigned)arg1 ;
-(NSOrderedSet *)pendingThreads;
-(void)blockThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(IGDirectCache *)cache;
-(IGDirectInboxPendingRequests *)pendingRequests;
@end

