

@protocol IGRetroRegistrationSignUpViewControllerDelegate <NSObject>
@required
-(void)signupViewControllerDidTapLoginButton:(id)arg1;
-(void)signupViewControllerDidTapNextButton:(id)arg1;
-(void)signupViewControllerRegistrationSucceeded:(id)arg1;
-(void)signupViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3;
-(char)signupViewControllerIsSwitchingUsers:(id)arg1;

@end

