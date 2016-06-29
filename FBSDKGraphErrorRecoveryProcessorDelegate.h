

@protocol FBSDKGraphErrorRecoveryProcessorDelegate <NSObject>
@optional
-(char)processorWillProcessError:(id)arg1 error:(id)arg2;

@required
-(void)processorDidAttemptRecovery:(id)arg1 didRecover:(char)arg2 error:(id)arg3;

@end

