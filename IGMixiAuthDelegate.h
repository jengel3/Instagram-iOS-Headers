

@protocol IGMixiAuthDelegate <NSObject>
@required
-(void)mixiAuthControllerLoginFailed:(id)arg1;
-(void)mixiAuthController:(id)arg1 didLoginWithCode:(id)arg2;

@end

