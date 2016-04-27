

@protocol FBWebViewDelegate <NSObject>
@optional
-(void)webView:(id)arg1 loadingStateChanged:(char)arg2;
-(void)webView:(id)arg1 progressChanged:(double)arg2;
-(void)webView:(id)arg1 titleChanged:(id)arg2;
-(void)webView:(id)arg1 URLChanged:(id)arg2;
-(void)webView:(id)arg1 navigationHistoryChangedCanGoBack:(char)arg2 canGoForward:(char)arg3;
-(char)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(int)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5;
-(void)webView:(id)arg1 didStartNavigationRequest:(id)arg2;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3;
-(void)webViewBlockingResourcesLoaded:(id)arg1;
-(void)webViewWillPushNavigationState:(id)arg1;
-(void)webViewWillPopNavigationState:(id)arg1;
-(void)webViewSelectionChanged:(id)arg1;

@end

