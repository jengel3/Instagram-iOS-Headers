

@protocol FBSDKWebDialogDelegate <NSObject>
@required
-(void)webDialogDidCancel:(id)arg1;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2;

@end

