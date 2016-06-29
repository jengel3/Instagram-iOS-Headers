

@protocol NSURLSessionDelegate <NSObject>
@optional
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;

@end

