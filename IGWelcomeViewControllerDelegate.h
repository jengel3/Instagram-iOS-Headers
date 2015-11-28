

@protocol IGWelcomeViewControllerDelegate <NSObject>
@required
-(void)welcomeViewController:(id)arg1 requestsLoginToUsername:(id)arg2;
-(void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
-(void)welcomeViewController:(id)arg1 proceedRegisteringWithFBInfo:(id)arg2;
-(void)welcomeViewControllerDidTapLogIn:(id)arg1;
-(void)welcomeViewController:(id)arg1 willProceedWithEmail:(id)arg2;
-(void)welcomeViewControllerWantsToDismiss:(id)arg1;
-(char)welcomeViewControllerIsSwitchingUsers:(id)arg1;

@end

