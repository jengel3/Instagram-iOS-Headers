

@protocol IGUnifiedWebViewControllerWebViewLoggingDelegate
@required
-(void)webView:(id)arg1 willStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidGoBack:(id)arg1;
-(void)webViewDidGoForward:(id)arg1;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(void)webViewDidStartLoad:(id)arg1;
-(void)webViewDidFinishLoad:(id)arg1;

@end

