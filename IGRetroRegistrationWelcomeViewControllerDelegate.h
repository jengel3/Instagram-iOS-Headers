

@protocol IGRetroRegistrationWelcomeViewControllerDelegate <NSObject>
@optional
-(void)welcomeViewControllerDidTapFBButton:(id)arg1;

@required
-(char)welcomeViewControllerIsSwitchingUsers:(id)arg1;
-(void)welcomeViewControllerDidGoBackButton:(id)arg1;
-(void)welcomeViewControllerDidTapLoginButton:(id)arg1;
-(void)welcomeViewControllerDidTapSignUpButton:(id)arg1;
-(void)welcomeViewControllerWantsToDismiss:(id)arg1;
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;

@end

