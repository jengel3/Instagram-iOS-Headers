

@class NSString;

@interface IGDirectPendingNetworker : NSObject {

	NSString* _nextPageCursorId;

}

@property (nonatomic,copy) NSString * nextPageCursorId;              //@synthesize nextPageCursorId=_nextPageCursorId - In the implementation block
+(id)sharedNetworker;
-(NSString *)nextPageCursorId;
-(void)setNextPageCursorId:(NSString *)arg1 ;
-(void)approvePendingThreadsWithIds:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)declinePendingThreadsWithIds:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)requestPendingInboxDataFromFirstPage:(char)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(char)hasNextPage;
@end

