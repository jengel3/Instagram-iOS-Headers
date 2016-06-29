

@protocol IGAccountRecoveryEmailConfirmationControllerDelegate <NSObject>
@required
-(void)accountRecoveryEmailConfirmationController:(id)arg1 proceedWithLoggedInDictionary:(id)arg2 signUpCode:(id)arg3;
-(void)accountRecoveryEmailConfirmationController:(id)arg1 proceedWithForceSignUpCode:(id)arg2;
-(void)accountRecoveryEmailConfirmationControllerBackToLoginView:(id)arg1;

@end

