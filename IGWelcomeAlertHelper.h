

@interface IGWelcomeAlertHelper : NSObject
+(void)lookupEmailForUsername:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)sendPasswordResetEmailForUser:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)sendLoginEmailForUsername:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(id)genButtonsForValues:(id)arg1 ;
@end

