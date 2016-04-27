

@protocol IGAmebaAuthDelegate <NSObject>
@required
-(void)amebaAuthController:(id)arg1 didLoginWithCode:(id)arg2;
-(void)amebaAuthControllerLoginFailed:(id)arg1;

@end

