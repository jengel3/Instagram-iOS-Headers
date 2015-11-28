

@interface IGUsernameHelper : NSObject
+(void)startOrRestartUsernameFromEmailCheckTimerWithEmail:(id)arg1 ;
+(char)isChecking;
+(id)lastCheckedResult;
+(id)checkUsernameForString:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)checkUsernameFromEmail;
+(id)pendingEmailToCheck;
@end

