

@protocol IGRegistrationFlowViewControllerDelegate <NSObject>
@required
-(void)registrationFlowController:(id)arg1 willResetPasswordWithViewController:(id)arg2;
-(void)registrationFlowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2;
-(void)registrationFlowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2;
-(char)registrationFlowControllerIsSwitchingUsers:(id)arg1;

@end

