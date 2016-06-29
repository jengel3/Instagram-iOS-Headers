
#import <Instagram/RCTEventEmitter.h>

@interface RCTPushNotificationManager : RCTEventEmitter {

	/*^block*/id _requestPermissionsResolveBlock;

}

@property (nonatomic,copy) id requestPermissionsResolveBlock;              //@synthesize requestPermissionsResolveBlock=_requestPermissionsResolveBlock - In the implementation block
+(id)moduleName;
+(void)didRegisterUserNotificationSettings:(id)arg1 ;
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 ;
+(void)didReceiveRemoteNotification:(id)arg1 ;
+(void)didReceiveLocalNotification:(id)arg1 ;
+(id)__rct_export__1820;
+(id)__rct_export__1901;
+(id)__rct_export__1972;
+(id)__rct_export__2363;
+(id)__rct_export__2414;
+(id)__rct_export__2685;
+(id)__rct_export__2736;
+(id)__rct_export__2787;
+(id)__rct_export__2838;
+(id)__rct_export__3019;
+(void)load;
-(id)constantsToExport;
-(id)supportedEvents;
-(void)handleLocalNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationsRegistered:(id)arg1 ;
-(void)handleRegisterUserNotificationSettings:(id)arg1 ;
-(id)requestPermissionsResolveBlock;
-(void)setRequestPermissionsResolveBlock:(id)arg1 ;
-(void)getApplicationIconBadgeNumber:(/*^block*/id)arg1 ;
-(void)requestPermissions:(id)arg1 resolver:(/*^block*/id)arg2 rejecter:(/*^block*/id)arg3 ;
-(void)abandonPermissions;
-(void)checkPermissions:(/*^block*/id)arg1 ;
-(void)presentLocalNotification:(id)arg1 ;
-(void)getInitialNotification:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)scheduleLocalNotification:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(int)arg1 ;
-(void)cancelAllLocalNotifications;
-(void)stopObserving;
-(void)cancelLocalNotifications:(id)arg1 ;
@end

