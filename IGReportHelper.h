

@interface IGReportHelper : NSObject
+(void)flagForSpam:(char)arg1 user:(id)arg2 reportSource:(id)arg3 successHandler:(/*^block*/id)arg4 failureHandler:(/*^block*/id)arg5 ;
+(void)reportInappropriateUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)reportSpamUser:(id)arg1 reportSource:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
@end

