

@protocol IGRetroRegistrationSSOLoginViewControllerDelegate <NSObject>
@required
-(void)ssoLoginViewControllerDidTapLoginButton:(id)arg1;
-(void)ssoLoginViewControllerDidTapSwitchAccountButton:(id)arg1 withBackButton:(char)arg2;
-(void)ssoLoginViewControllerDidTapSignUpButton:(id)arg1;
-(void)ssoLoginViewControllerDidTapOnURL:(id)arg1;
-(void)ssoLoginViewControllerResetPasswordWithViewController:(id)arg1;
-(void)ssoLoginViewControllerProceedTwoFactorWithInfo:(id)arg1 facebookAccessToken:(id)arg2;
-(int)registrationStepForSSOLoginViewController:(id)arg1;

@end

