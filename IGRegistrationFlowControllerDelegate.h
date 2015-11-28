

@protocol IGRegistrationFlowControllerDelegate <NSObject>
@required
-(void)flowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2;
-(void)flowController:(id)arg1 continueRegistrationToStep:(id)arg2 inboundAnimation:(int)arg3 outboundAnimation:(int)arg4;
-(char)flowControllerIsSwitchingUsers:(id)arg1;
-(void)flowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2;
-(void)flowController:(id)arg1 willResetPasswordWithViewController:(id)arg2;
-(void)flowController:(id)arg1 willPresentNavigationController:(id)arg2;

@end

