

@protocol IGRetroRegistrationLoginViewControllerDelegate <NSObject>
@required
-(char)loginViewControllerIsSwitchingUsers:(id)arg1;
-(void)loginViewControllerDidTapLoginButton:(id)arg1;
-(void)loginViewController:(id)arg1 didTapOnLoginHelperButtonWithUsername:(id)arg2;
-(void)loginViewControllerDidTapSignUpButton:(id)arg1;
-(void)loginViewControllerWantsToDismiss:(id)arg1;
-(void)loginViewController:(id)arg1 didTapOnURL:(id)arg2;
-(void)loginViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)loginViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)loginViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)loginViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;

@end

