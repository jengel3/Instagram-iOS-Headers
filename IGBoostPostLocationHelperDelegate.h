

@protocol IGBoostPostLocationHelperDelegate <NSObject>
@required
-(void)onLocationUpdatedFromLocationHelper:(id)arg1 CLLocation:(id)arg2;
-(void)onAuthorizationDeniedFromLocationHelper:(id)arg1;

@end

