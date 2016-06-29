

@interface IGDirectThreadNetworker : NSObject
+(id)sharedNetworker;
-(void)requestSetThreadMuted:(char)arg1 threadId:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)requestHideThreadWithId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

