

@protocol FBPassLoaderDelegate <NSObject>
@required
-(void)passLoader:(id)arg1 didReceiveUnsupportedMIMEType:(id)arg2;
-(void)passLoader:(id)arg1 didFinishLoadingPass:(id)arg2 error:(id)arg3;

@end

