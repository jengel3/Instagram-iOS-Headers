

@protocol IGRegistrationLogInViewDelegate <NSObject>
@required
-(void)registrationLogInView:(id)arg1 willProceedWithKeyboard:(char)arg2;
-(void)registrationLogInView:(id)arg1 didDismissForHelpWithUsername:(id)arg2;
-(void)registrationLogInView:(id)arg1 didBeginEditingTextField:(id)arg2;

@end

