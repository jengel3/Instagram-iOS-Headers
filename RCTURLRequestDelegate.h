

@protocol RCTURLRequestDelegate <NSObject>
@required
-(void)URLRequest:(id)arg1 didCompleteWithError:(id)arg2;
-(void)URLRequest:(id)arg1 didReceiveResponse:(id)arg2;
-(void)URLRequest:(id)arg1 didReceiveData:(id)arg2;
-(void)URLRequest:(id)arg1 didSendDataWithProgress:(long long)arg2;

@end

