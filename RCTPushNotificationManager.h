
#import <Instagram/RCTEventEmitter.h>

@interface RCTPushNotificationManager : RCTEventEmitter {

	/*^block*/id _requestPermissionsResolveBlock;

}
+(void)didReceiveLocalNotification:(id)arg1 ;
+(id)moduleName;
+(void)didRegisterUserNotificationSettings:(id)arg1 ;
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 ;
+(void)didReceiveRemoteNotification:(id)arg1 ;
+(id)__rct_export__2070;
+(id)__rct_export__2151;
+(id)__rct_export__2222;
+(id)__rct_export__2613;
+(id)__rct_export__2664;
+(id)__rct_export__2935;
+(id)__rct_export__2986;
+(id)__rct_export__3037;
+(id)__rct_export__3088;
+(id)__rct_export__3309;
+(id)__rct_export__34710;
+(void)load;
-(id)constantsToExport;
-(id)methodQueue;
-(id)supportedEvents;
-(void)handleLocalNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationsRegistered:(id)arg1 ;
-(void)handleRegisterUserNotificationSettings:(id)arg1 ;
-(void)getApplicationIconBadgeNumber:(/*^block*/id)arg1 ;
-(void)requestPermissions:(id)arg1 resolver:(/*^block*/id)arg2 rejecter:(/*^block*/id)arg3 ;
-(void)abandonPermissions;
-(void)checkPermissions:(/*^block*/id)arg1 ;
-(void)presentLocalNotification:(id)arg1 ;
-(void)getInitialNotification:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)getScheduledLocalNotifications:(/*^block*/id)arg1 ;
-(void)startObserving;
-(void)scheduleLocalNotification:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(int)arg1 ;
-(void)cancelAllLocalNotifications;
-(void)stopObserving;
-(void)cancelLocalNotifications:(id)arg1 ;
@end

