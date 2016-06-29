

@interface IGUsernameHelper : NSObject
+(id)checkUsernameForString:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)checkUsernameFromEmail;
+(id)lastCheckedResult;
+(char)isChecking;
+(id)pendingEmailToCheck;
+(void)startOrRestartUsernameFromEmailCheckTimerWithEmail:(id)arg1 ;
@end

