

@interface IGAuthNotificationHelper : NSObject
+(void)postWillSwitchUsersNotification;
+(void)postDidSwitchUsersNotificationForNewUserPK:(id)arg1 authLogInType:(int)arg2 entryPoint:(unsigned)arg3 updatedNumberOfAccounts:(unsigned)arg4 ;
+(void)postWillLogoutCurrentAccountNotificationWithPK:(id)arg1 ;
+(void)postDidLogoutAllAccountNotificationWithLastLoggedInUserWithPK:(id)arg1 hasSSOEnabledUser:(char)arg2 ;
+(void)postLogoutAllAccountsSuccessfulNotification;
+(void)postUserDidChangeNotificationForUser:(id)arg1 ;
@end

