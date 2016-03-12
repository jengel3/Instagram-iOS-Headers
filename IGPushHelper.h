

@class NSMutableArray;

@interface IGPushHelper : NSObject {

	NSMutableArray* _cachedFeedItems;
	char _needToUpdatePushToken;
	char _freshAppInstall;

}

@property (assign,getter=isFreshAppInstall,nonatomic) char freshAppInstall;              //@synthesize freshAppInstall=_freshAppInstall - In the implementation block
+(id)sharedPushHelper;
+(unsigned)switchUsersIfNecessary:(id)arg1 ;
-(char)isFreshAppInstall;
-(char)shouldShowInboxPushMegaphone;
-(char)appHasAskedSystemForPushPermissions;
-(void)startPushRegistrationWithForce:(char)arg1 ;
-(void)onBackground:(id)arg1 ;
-(id)categoriesForPushNotifications;
-(char)appHasPushPermissions;
-(char)isTimeToPromptForPushPermissions;
-(char)eligibleForPushMegaphone;
-(id)convertTokenToDeviceID:(id)arg1 ;
-(void)handleBackgroundPushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleForegroundPushNotification:(id)arg1 ;
-(char)shouldAllowBackgroundFetchFeed;
-(void)cacheFeedItemWithFeedItemPK:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performNavigationTaskForAction:(id)arg1 userInfo:(id)arg2 ;
-(void)showNotificationBarWithUserInfo:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)performNonNavigationTaskForAction:(id)arg1 userInfo:(id)arg2 ;
-(void)markAsNeedToUpdatePushToken;
-(char)shouldShowActivityPushMegaphone;
-(void)registerForPushWithToken:(id)arg1 ;
-(void)handlePushNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearFeedItemCache;
-(void)handleActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFreshAppInstall:(char)arg1 ;
-(void)dealloc;
-(id)init;
@end

