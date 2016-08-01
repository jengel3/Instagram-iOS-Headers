

@interface FBSDKGraphRequestPiggybackManager : NSObject
+(void)addPiggybackRequests:(id)arg1 ;
+(void)addRefreshPiggybackIfStale:(id)arg1 ;
+(void)addServerConfigurationPiggyback:(id)arg1 ;
+(void)addRefreshPiggyback:(id)arg1 permissionHandler:(/*^block*/id)arg2 ;
@end

