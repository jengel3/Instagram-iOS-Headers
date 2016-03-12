

@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>
@optional
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;

@end

