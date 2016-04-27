
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTPushNotificationManager : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)didRegisterUserNotificationSettings:(id)arg1 ;
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 ;
+(void)didReceiveRemoteNotification:(id)arg1 ;
+(void)didReceiveLocalNotification:(id)arg1 ;
+(id)__rct_export__1460;
+(id)__rct_export__1541;
+(id)__rct_export__1592;
+(id)__rct_export__1903;
+(id)__rct_export__1954;
+(id)__rct_export__2225;
+(id)__rct_export__2276;
+(id)__rct_export__2327;
+(id)__rct_export__2378;
+(void)load;
-(id)constantsToExport;
-(void)handleLocalNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationReceived:(id)arg1 ;
-(void)handleRemoteNotificationsRegistered:(id)arg1 ;
-(void)getApplicationIconBadgeNumber:(/*^block*/id)arg1 ;
-(void)requestPermissions:(id)arg1 ;
-(void)abandonPermissions;
-(void)checkPermissions:(/*^block*/id)arg1 ;
-(void)presentLocalNotification:(id)arg1 ;
-(void)dealloc;
-(void)scheduleLocalNotification:(id)arg1 ;
-(void)setApplicationIconBadgeNumber:(int)arg1 ;
-(void)cancelAllLocalNotifications;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)cancelLocalNotifications:(id)arg1 ;
@end

