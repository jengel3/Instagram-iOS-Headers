

@interface IGUsernameHelper : NSObject
+(void)checkUsernameFromEmail;
+(id)lastCheckedResult;
+(id)checkUsernameForString:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(char)isChecking;
+(id)pendingEmailToCheck;
+(void)startOrRestartUsernameFromEmailCheckTimerWithEmail:(id)arg1 ;
@end

