

@protocol IGRetroRegistrationLoginViewControllerDelegate <NSObject>
@required
-(char)loginViewControllerIsSwitchingUsers:(id)arg1;
-(void)loginViewController:(id)arg1 proceedTwoFactorWithUserInfo:(id)arg2;
-(void)loginViewControllerDidTapLoginButton:(id)arg1;
-(void)loginViewController:(id)arg1 didTapOnLoginHelperButtonWithUsername:(id)arg2;
-(void)loginViewControllerDidTapSignUpButton:(id)arg1;
-(void)loginViewControllerWantsToDismiss:(id)arg1;
-(void)loginViewController:(id)arg1 didTapOnURL:(id)arg2;
-(void)loginViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)loginViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)loginViewController:(id)arg1 proceedRegistrationWithFBInfo:(id)arg2;

@end

