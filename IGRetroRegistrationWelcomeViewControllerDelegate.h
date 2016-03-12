

@protocol IGRetroRegistrationWelcomeViewControllerDelegate <NSObject>
@optional
-(void)welcomeViewControllerDidTapFBButton:(id)arg1;

@required
-(void)welcomeViewControllerDidTapLoginButton:(id)arg1;
-(void)welcomeViewControllerDidTapSignUpButton:(id)arg1;
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)welcomeViewControllerWantsToDismiss:(id)arg1;
-(char)welcomeViewControllerIsSwitchingUsers:(id)arg1;

@end

