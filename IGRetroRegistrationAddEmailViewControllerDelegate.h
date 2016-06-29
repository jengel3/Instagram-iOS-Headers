

@protocol IGRetroRegistrationAddEmailViewControllerDelegate <NSObject>
@required
-(void)addEmailViewControllerDidTapLoginButton:(id)arg1;
-(void)addEmailViewControllerDidTapPhoneRegiButton:(id)arg1;
-(void)addEmailViewController:(id)arg1 proceedWithValidatedEmail:(id)arg2 usernameSuggestions:(id)arg3;
-(void)addEmailViewController:(id)arg1 proceedWithConflictedEmail:(id)arg2;

@end

