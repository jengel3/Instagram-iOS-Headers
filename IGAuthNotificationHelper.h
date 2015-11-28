

@interface IGAuthNotificationHelper : NSObject
+(void)postUserDidChangeNotificationForUser:(id)arg1 ;
+(void)postWillSwitchUsersNotification;
+(void)postDidSwitchUsersNotificationForNewUserPK:(id)arg1 authLogInType:(int)arg2 ;
+(void)postLogoutSuccessfulNotificationForUserWithPK:(id)arg1 ;
@end

