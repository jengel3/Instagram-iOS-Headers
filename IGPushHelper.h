/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:59 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface IGPushHelper : NSObject {

	NSMutableArray* _cachedFeedItems;
	char _freshAppInstall;

}

@property (assign,getter=isFreshAppInstall,nonatomic) char freshAppInstall;              //@synthesize freshAppInstall=_freshAppInstall - In the implementation block
+(id)sharedPushHelper;
-(char)isFreshAppInstall;
-(id)categoriesForPushNotifications;
-(char)appHasPushPermissions;
-(char)appHasAskedSystemForPushPermissions;
-(char)isTimeToPromptForPushPermissions;
-(id)convertTokenToDeviceID:(id)arg1 ;
-(void)handleBackgroundPushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleForegroundPushNotification:(id)arg1 ;
-(void)showNotificationBarWithUserInfo:(id)arg1 andThreadId:(id)arg2 ;
-(void)startPushRegistrationWithForce:(char)arg1 ;
-(char)shouldShowPushMegaphone;
-(void)registerForPushWithToken:(id)arg1 ;
-(void)handlePushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)onBackTapped:(id)arg1 ;
-(void)clearFeedItemCache;
-(void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFreshAppInstall:(char)arg1 ;
-(id)init;
@end

