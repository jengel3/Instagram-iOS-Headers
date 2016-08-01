
#import <Instagram/RCTEventEmitter.h>

@interface RCTPushNotificationManager : RCTEventEmitter {

	/*^block*/id _requestPermissionsResolveBlock;

}
+(void)didReceiveLocalNotification:(id)arg1 ;
+(id)moduleName;
+(void)didRegisterUserNotificationSettings:(id)arg1 ;
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 ;
+(void)didReceiveRemoteNotification:(id)arg1 ;
+(id)__rct_export__1910;
+(id)__rct_export__1991;
+(id)__rct_export__2062;
+(id)__rct_export__2453;
+(id)__rct_export__2504;
+(id)__rct_export__2775;
+(id)__rct_export__2826;
+(id)__rct_export__2877;
+(id)__rct_export__2928;
+(id)__rct_export__3149;
+(id)__rct_export__33210;
+(void)load;
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

