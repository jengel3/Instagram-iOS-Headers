

@protocol IGRetroRegistrationSignUpViewControllerDelegate <NSObject>
@required
-(int)registrationStepForSignUpViewController:(id)arg1;
-(void)signupViewControllerDidTapNextButton:(id)arg1 hasUsernameField:(char)arg2 withFullName:(id)arg3 password:(id)arg4 profilePhoto:(id)arg5 fromFlow:(int)arg6;
-(void)signupViewControllerDidTapLoginButton:(id)arg1;
-(char)signupViewControllerIsSwitchingUsers:(id)arg1;
-(void)signupViewControllerRegistrationSucceeded:(id)arg1 privateNuxEnabled:(char)arg2 privateNuxFirst:(char)arg3;
-(void)signupViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3;

@end

