

@protocol IGWeiboAuthDelegate <NSObject>
@required
-(void)weiboAuthControllerLoginFailed:(id)arg1;
-(void)weiboAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 andRefreshToken:(id)arg3;

@end

