

@protocol IGFoursquareAuthDelegate <NSObject>
@required
-(void)foursquareAuthControllerLoginFailed:(id)arg1;
-(void)foursquareAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 username:(id)arg3;

@end

