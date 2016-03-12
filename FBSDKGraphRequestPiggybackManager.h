

@interface FBSDKGraphRequestPiggybackManager : NSObject
+(void)addRefreshPiggybackIfStale:(id)arg1 ;
+(void)addServerConfigurationPiggyback:(id)arg1 ;
+(void)addRefreshPiggyback:(id)arg1 permissionHandler:(/*^block*/id)arg2 ;
+(void)addPiggybackRequests:(id)arg1 ;
@end

