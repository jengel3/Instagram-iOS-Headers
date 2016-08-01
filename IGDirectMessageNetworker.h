

@interface IGDirectMessageNetworker : NSObject
+(id)sharedNetworker;
-(void)requestReactionWithParameters:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)apiService;
@end

