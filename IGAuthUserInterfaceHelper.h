

@interface IGAuthUserInterfaceHelper : NSObject
+(void)showSwitchingAccountsWillCancelUploadsAlertViewWithCancelBlock:(/*^block*/id)arg1 otherBlock:(/*^block*/id)arg2 ;
+(void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(char)arg2 defaultSelectedTab:(int)arg3 ;
+(void)showAccountSwitchedAlertBarForUser:(id)arg1 ;
+(void)showForceLogoutAlertViewForUser:(id)arg1 dismissBlock:(/*^block*/id)arg2 ;
+(void)showHasMaximumNumberOfAccountsAlertViewWithDismissBlock:(/*^block*/id)arg1 ;
+(void)cancelUserSwitchLogoutUI;
+(void)initiateUserSwitchLogoutUIAnimated:(char)arg1 entryPoint:(unsigned)arg2 failureBlock:(/*^block*/id)arg3 ;
@end

