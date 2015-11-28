

@interface IGAuthNotificationHelper : NSObject
+(void)postUserDidChangeNotificationForUser:(id)arg1 ;
+(void)postWillSwitchUsersNotification;
+(void)postDidSwitchUsersNotificationForNewUserPK:(id)arg1 authLogInType:(int)arg2 entryPoint:(unsigned)arg3 updatedNumberOfAccounts:(unsigned)arg4 ;
+(void)postLogoutSuccessfulNotificationForUserWithPK:(id)arg1 ;
+(void)postLogoutAllAccountsSuccessfulNotification;
@end

