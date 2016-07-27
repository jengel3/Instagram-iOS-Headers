

@protocol FBSDKWebDialogDelegate <NSObject>
@required
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2;
-(void)webDialogDidCancel:(id)arg1;

@end

