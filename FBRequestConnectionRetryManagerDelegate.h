

@protocol FBRequestConnectionRetryManagerDelegate <NSObject>
@optional
-(void)retryManagerDidFinishWithNoRetries:(id)arg1;
-(void)retryManagerDidFinishAbortingRetries:(id)arg1;
-(void)retryManager:(id)arg1 willRetryWithRequestConnection:(id)arg2;

@end

