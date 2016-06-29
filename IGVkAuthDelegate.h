

@protocol IGVkAuthDelegate <NSObject>
@required
-(void)vkAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 username:(id)arg3;
-(void)vkAuthControllerLoginFailed:(id)arg1;

@end

