

@protocol IGMediaRequestDelegate <NSObject>
@optional
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;

@end

