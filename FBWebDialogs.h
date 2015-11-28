

@interface FBWebDialogs : NSObject
+(void)presentDialogModallyWithSession:(id)arg1 dialog:(id)arg2 parameters:(id)arg3 handler:(/*^block*/id)arg4 delegate:(id)arg5 ;
+(void)presentRequestsDialogModallyWithSession:(id)arg1 message:(id)arg2 title:(id)arg3 parameters:(id)arg4 handler:(/*^block*/id)arg5 friendCache:(id)arg6 ;
+(void)presentDialogModallyWithSession:(id)arg1 dialog:(id)arg2 parameters:(id)arg3 handler:(/*^block*/id)arg4 ;
+(void)presentRequestsDialogModallyWithSession:(id)arg1 message:(id)arg2 title:(id)arg3 parameters:(id)arg4 handler:(/*^block*/id)arg5 ;
+(void)presentFeedDialogModallyWithSession:(id)arg1 parameters:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

