

@interface IGAuthUserInterfaceHelper : NSObject
+(void)initiateUserSwitchLogoutUIAnimated:(char)arg1 entryPoint:(unsigned)arg2 failureBlock:(/*^block*/id)arg3 ;
+(void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(char)arg2 authLogInType:(int)arg3 defaultSelectedTab:(int)arg4 entryPoint:(unsigned)arg5 ;
+(void)showAccountSwitchedAlertBarForUser:(id)arg1 ;
+(void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(char)arg2 authLogInType:(int)arg3 defaultSelectedTab:(int)arg4 ;
+(void)showForceLogoutAlertViewForUser:(id)arg1 dismissBlock:(/*^block*/id)arg2 ;
+(void)initiateLoginUIWithUserInfo:(id)arg1 ;
+(void)showHasMaximumNumberOfAccountsAlertViewWithDismissBlock:(/*^block*/id)arg1 ;
+(void)cancelUserSwitchLogoutUI;
@end

