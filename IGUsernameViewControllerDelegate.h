

@protocol IGUsernameViewControllerDelegate <NSObject>
@required
-(void)usernameViewControllerDidSwitchToEmailFlow:(id)arg1;
-(void)usernameViewControllerDidSwitchToFBFlow:(id)arg1;
-(void)usernameViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3;
-(char)usernameViewControllerIsSwitchingUsers:(id)arg1;

@end

