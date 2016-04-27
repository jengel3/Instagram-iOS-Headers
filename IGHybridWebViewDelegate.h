

@protocol IGHybridWebViewDelegate <NSObject>
@required
-(void)didSelectCloseHybridWebView:(id)arg1;
-(void)containedWebDidFinishFlowWithWebView:(id)arg1;
-(char)shouldStartLoadRequestWithCommand:(id)arg1 withParams:(id)arg2;

@end

