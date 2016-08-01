

@class IGDirectNetworkPerfLogger, NSString, IGService;

@interface IGDirectPendingInboxNetworker : NSObject {

	IGDirectNetworkPerfLogger* _perfLogger;
	NSString* _nextPageCursorId;

}

@property (nonatomic,readonly) IGService * apiService; 
@property (nonatomic,readonly) IGDirectNetworkPerfLogger * perfLogger;              //@synthesize perfLogger=_perfLogger - In the implementation block
@property (nonatomic,copy) NSString * nextPageCursorId;                             //@synthesize nextPageCursorId=_nextPageCursorId - In the implementation block
@property (nonatomic,readonly) char hasNextPage; 
+(id)sharedNetworker;
-(IGDirectNetworkPerfLogger *)perfLogger;
-(NSString *)nextPageCursorId;
-(void)setNextPageCursorId:(NSString *)arg1 ;
-(IGService *)apiService;
-(void)approvePendingThreadsWithIds:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)declinePendingThreadsWithIds:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)blockPendingThreadWithId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)requestPendingInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)acceptMessages:(char)arg1 fromUserWithId:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)init;
-(char)hasNextPage;
@end

