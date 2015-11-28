

@protocol IGAccountRecoveryEmailConfirmationControllerDelegate <NSObject>
@required
-(void)accountRecoveryEmailConfirmationControllerDelegate:(id)arg1 proceedWithLoggedInDictionary:(id)arg2 signUpCode:(id)arg3;
-(void)accountRecoveryEmailConfirmationControllerDelegate:(id)arg1 proceedWithForceSignUpCode:(id)arg2;
-(void)accountRecoveryEmailConfirmationControllerDelegateBackToLoginView:(id)arg1;

@end

