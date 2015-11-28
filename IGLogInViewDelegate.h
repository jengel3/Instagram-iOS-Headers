

@protocol IGLogInViewDelegate <NSObject>
@optional
-(void)logInView:(id)arg1 didChangeTextField:(id)arg2;

@required
-(void)logInView:(id)arg1 willProceedWithKeyboard:(char)arg2;
-(void)logInView:(id)arg1 didDismissForHelpWithUsername:(id)arg2;
-(void)logInView:(id)arg1 didBeginEditingTextField:(id)arg2;

@end

