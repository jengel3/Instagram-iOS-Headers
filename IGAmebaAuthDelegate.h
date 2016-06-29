

@protocol IGAmebaAuthDelegate <NSObject>
@required
-(void)amebaAuthControllerLoginFailed:(id)arg1;
-(void)amebaAuthController:(id)arg1 didLoginWithCode:(id)arg2;

@end

