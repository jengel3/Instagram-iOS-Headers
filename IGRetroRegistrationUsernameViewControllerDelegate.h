

@protocol IGRetroRegistrationUsernameViewControllerDelegate <NSObject>
@required
-(void)usernameViewControllerDidTapNextButton:(id)arg1;
-(int)registrationStepForUsernameViewController:(id)arg1;
-(void)usernameViewControllerDidTaSigninButton:(id)arg1;
-(char)isPhoneRegForUsernameViewController:(id)arg1;
-(char)isFBSignUpForUsernameViewController:(id)arg1;
-(char)isUserSwitchingForUsernameViewController:(id)arg1;
-(void)usernameStepViewControllerRegistrationSucceeded:(id)arg1;
-(void)usernameViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3;

@end

