

@protocol IGSignUpViewDelegate <NSObject>
@required
-(void)signUpView:(id)arg1 didBeginEditingTextField:(id)arg2;
-(void)signUpView:(id)arg1 didChangeTextField:(id)arg2;
-(void)signUpView:(id)arg1 willProceedWithEmail:(id)arg2 keyboard:(char)arg3;

@end

