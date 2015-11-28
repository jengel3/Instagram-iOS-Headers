

@class NSMutableArray;

@interface IGPushHelper : NSObject {

	NSMutableArray* _cachedFeedItems;
	char _freshAppInstall;

}

@property (assign,getter=isFreshAppInstall,nonatomic) char freshAppInstall;              //@synthesize freshAppInstall=_freshAppInstall - In the implementation block
+(char)switchUsersIfNecessary:(id)arg1 ;
+(id)sharedPushHelper;
-(char)isFreshAppInstall;
-(id)categoriesForPushNotifications;
-(char)appHasPushPermissions;
-(char)appHasAskedSystemForPushPermissions;
-(char)isTimeToPromptForPushPermissions;
-(id)convertTokenToDeviceID:(id)arg1 ;
-(void)handleBackgroundPushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleForegroundPushNotification:(id)arg1 ;
-(void)showNotificationBarWithUserInfo:(id)arg1 threadId:(id)arg2 ;
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

