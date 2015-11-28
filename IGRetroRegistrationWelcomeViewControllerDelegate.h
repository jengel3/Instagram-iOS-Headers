

@protocol IGRetroRegistrationWelcomeViewControllerDelegate <NSObject>
@optional
-(void)welcomeViewControllerDidTapFBButton:(id)arg1;

@required
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)welcomeViewControllerDidTapLoginButton:(id)arg1;
-(void)welcomeViewControllerDidTapSignUpButton:(id)arg1;
-(void)welcomeViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2;
-(void)welcomeViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)welcomeViewController:(id)arg1 proceedTwoFactorWithUserInfo:(id)arg2;

@end

