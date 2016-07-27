

@interface IGWelcomeAlertHelper : NSObject
+(void)sendPasswordResetRequestWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 ;
+(id)genButtonsForValues:(id)arg1 ;
+(void)lookupEmailForUsername:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)sendPasswordResetEmailForUser:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)sendLoginEmailForUsername:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)sendLoginEmailForUsernameOrEmail:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)sendLoginSMSForPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
@end

