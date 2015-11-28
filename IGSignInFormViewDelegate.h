

@protocol IGSignInFormViewDelegate <NSObject>
@required
-(void)signInFormViewDidStartSignIn;
-(void)signInFormViewDidSignIn;
-(void)signInFormViewDidFailSignIn;
-(void)signInFormView:(id)arg1 didFailWithServerError:(id)arg2;
-(void)signInFormViewDidReturnFromPasswordField:(id)arg1;
-(void)signInFormViewDidDismissForHelpWithUsername:(id)arg1;

@end

