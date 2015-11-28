

@interface IGAuthUserInterfaceHelper : NSObject
+(void)showSwitchingAccountsWillCancelUploadsAlertViewWithCancelBlock:(/*^block*/id)arg1 otherBlock:(/*^block*/id)arg2 ;
+(void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(char)arg2 defaultSelectedTab:(int)arg3 ;
+(void)showForceLogoutAlertViewForUser:(id)arg1 dismissBlock:(/*^block*/id)arg2 ;
+(void)showHasMaximumNumberOfAccountsAlertViewWithDismissBlock:(/*^block*/id)arg1 ;
+(void)initiateLogoutUIAnimated:(char)arg1 failureBlock:(/*^block*/id)arg2 ;
@end

