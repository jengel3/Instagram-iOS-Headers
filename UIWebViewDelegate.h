

@protocol UIWebViewDelegate <NSObject>
@optional
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)webViewDidStartLoad:(id)arg1;
-(void)webViewDidFinishLoad:(id)arg1;

@end

