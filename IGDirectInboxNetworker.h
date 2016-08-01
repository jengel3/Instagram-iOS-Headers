

@class IGDirectNetworkPerfLogger, NSString, IGService;

@interface IGDirectInboxNetworker : NSObject {

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
-(void)connectToRealtimeWithSubscriptionInfo:(id)arg1 ;
-(IGService *)apiService;
-(void)requestClearInboxCount;
-(void)fetchInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)init;
-(char)hasNextPage;
@end

