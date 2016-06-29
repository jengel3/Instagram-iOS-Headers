
#import <Instagram/RCTEventEmitter.h>

@interface RCTLinkingManager : RCTEventEmitter
+(id)moduleName;
+(id)__rct_export__720;
+(id)__rct_export__841;
+(id)__rct_export__1032;
+(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
+(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
+(void)load;
-(id)supportedEvents;
-(void)handleOpenURLNotification:(id)arg1 ;
-(void)openURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)canOpenURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)getInitialURL:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
@end

