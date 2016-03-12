

@protocol IGFacebookAuthHelperDelegate <NSObject>
@required
-(void)facebookAuthHelper:(id)arg1 willProceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)facebookAuthHelperDidTapSignUpButton:(id)arg1;
-(void)facebookAuthHelperDidTapLogInButton:(id)arg1;
-(void)facebookAuthHelper:(id)arg1 willProceedEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)facebookAuthHelper:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)facebookAuthHelper:(id)arg1 willResetPasswordWithViewController:(id)arg2;

@end

