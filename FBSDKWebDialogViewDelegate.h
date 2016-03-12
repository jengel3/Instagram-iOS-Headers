

@protocol FBSDKWebDialogViewDelegate <NSObject>
@required
-(void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2;
-(void)webDialogView:(id)arg1 didFailWithError:(id)arg2;
-(void)webDialogViewDidCancel:(id)arg1;
-(void)webDialogViewDidFinishLoad:(id)arg1;

@end

