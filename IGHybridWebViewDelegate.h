

@protocol IGHybridWebViewDelegate <NSObject>
@required
-(void)containedWebDidFinishFlowWithWebView:(id)arg1;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2;
-(void)didSelectCloseHybridWebView:(id)arg1;

@end

