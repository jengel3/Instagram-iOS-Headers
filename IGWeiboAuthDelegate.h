

@protocol IGWeiboAuthDelegate <NSObject>
@required
-(void)weiboAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 andRefreshToken:(id)arg3;
-(void)weiboAuthControllerLoginFailed:(id)arg1;

@end

