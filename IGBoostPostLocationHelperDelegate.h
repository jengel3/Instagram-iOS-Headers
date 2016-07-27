

@protocol IGBoostPostLocationHelperDelegate <NSObject>
@required
-(void)onAuthorizationDeniedFromLocationHelper:(id)arg1;
-(void)onLocationUpdatedFromLocationHelper:(id)arg1 CLLocation:(id)arg2;

@end

