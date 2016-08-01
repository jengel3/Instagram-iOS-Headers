

@class IGDirectNetworkPerfLogger, IGService;

@interface IGDirectThreadNetworker : NSObject {

	IGDirectNetworkPerfLogger* _perfLogger;

}

@property (nonatomic,readonly) IGService * apiService; 
@property (nonatomic,readonly) IGDirectNetworkPerfLogger * perfLogger;              //@synthesize perfLogger=_perfLogger - In the implementation block
@property (nonatomic,readonly) char isNetworkReachable; 
+(id)sharedNetworker;
-(IGDirectNetworkPerfLogger *)perfLogger;
-(IGService *)apiService;
-(void)requestThreadWithId:(id)arg1 cursor:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)requestThreadWithUserIds:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)requestSetThreadMuted:(char)arg1 threadId:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)requestHideThreadWithId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)requestRenameThreadWithName:(id)arg1 threadId:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)requestLeaveThreadWithId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)requestAddUsersWithIds:(id)arg1 toThreadWithId:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)requestDeleteMessageWithId:(id)arg1 fromThreadWithId:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)requestSetSeenTimestampForMessageWithId:(id)arg1 threadId:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(char)isNetworkReachable;
-(id)init;
@end

