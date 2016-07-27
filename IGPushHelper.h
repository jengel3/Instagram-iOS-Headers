

@class NSMutableArray;

@interface IGPushHelper : NSObject {

	NSMutableArray* _cachedFeedItems;
	char _needToUpdatePushToken;
	char _freshAppInstall;

}

@property (assign,getter=isFreshAppInstall,nonatomic) char freshAppInstall;              //@synthesize freshAppInstall=_freshAppInstall - In the implementation block
+(id)sharedPushHelper;
+(unsigned)switchUsersIfNecessary:(id)arg1 entryPoint:(unsigned)arg2 ;
-(char)isFreshAppInstall;
-(void)setFreshAppInstall:(char)arg1 ;
-(void)handlePushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearFeedItemCache;
-(void)startPushRegistrationWithForce:(char)arg1 ;
-(void)registerForPushWithToken:(id)arg1 ;
-(void)logPushNogification:(id)arg1 applicationState:(int)arg2 ;
-(void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)shouldShowInboxPushMegaphone;
-(char)appHasAskedSystemForPushPermissions;
-(void)onBackground:(id)arg1 ;
-(id)categoriesForPushNotifications;
-(char)appHasPushPermissions;
-(char)isTimeToPromptForPushPermissions;
-(char)eligibleForPushMegaphone;
-(id)convertTokenToDeviceID:(id)arg1 ;
-(void)handleBackgroundPushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleForegroundPushNotification:(id)arg1 ;
-(void)logBackgroundPushNotificationWithUserInfo:(id)arg1 ;
-(void)logForegroundPushNotificationWithUserInfo:(id)arg1 ;
-(void)performNavigationTaskForAction:(id)arg1 userInfo:(id)arg2 ;
-(void)showNotificationBarWithUserInfo:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)markAsNeedToUpdatePushToken;
-(char)shouldShowActivityPushMegaphone;
-(char)shouldAllowBackgroundFetchFeed;
-(void)dealloc;
-(id)init;
-(id)stringForAppState:(int)arg1 ;
@end

