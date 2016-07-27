

@class NSString, IGDirectThreadStore;

@interface IGDirectInboxNetworker : NSObject {

	NSString* _nextPageCursorId;

}

@property (nonatomic,copy) NSString * nextPageCursorId;                        //@synthesize nextPageCursorId=_nextPageCursorId - In the implementation block
@property (nonatomic,readonly) IGDirectThreadStore * threadStore; 
+(id)sharedNetworker;
-(void)fetchInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(NSString *)nextPageCursorId;
-(void)logRequestTimePerfWithView:(id)arg1 duration:(double)arg2 threadID:(id)arg3 succeeded:(char)arg4 isFirstPage:(char)arg5 ;
-(void)setNextPageCursorId:(NSString *)arg1 ;
-(void)connectToRealtimeWithSubscriptionInfo:(id)arg1 ;
-(IGDirectThreadStore *)threadStore;
-(void)requestClearInboxCount;
-(char)hasNextPage;
@end

