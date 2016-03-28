

@protocol IGRetroRegistrationSignInHelperViewControllerDelegate <NSObject>
@required
-(void)signInHelperViewControllerDidTapBackButton:(id)arg1;
-(void)signInHelperViewController:(id)arg1 didTapOnURL:(id)arg2;
-(char)signInHelperViewControllerIsSwitchingUsers:(id)arg1;
-(void)signInHelperViewControllerDidTapSignUpButton:(id)arg1;
-(void)signInHelperViewControllerDidTapLogInButton:(id)arg1;
-(void)signInHelperViewController:(id)arg1 willProceedRegistrationWithFBInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)signInHelperViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDicted:(id)arg2;
-(void)signInHelperViewController:(id)arg1 resetPasswordWithViewController:(id)arg2;
-(void)signInHelperViewController:(id)arg1 proceedTwoFactorWithInfo:(id)arg2 facebookAccessToken:(id)arg3;
-(void)signInHelperViewController:(id)arg1 didRequestSupportWithUsername:(id)arg2;

@end

