

@protocol IGRetroRegistrationPhoneNumberViewControllerDelegate <NSObject>
@required
-(void)phoneNumberViewControllerDelegateDidTapLoginButton:(id)arg1;
-(void)phoneNumberViewControllerDelegateDidTapEmailRegistrationButton:(id)arg1;
-(void)phoneNumberViewControllerDelegateSMSSentWithPhoneNumber:(id)arg1 phoneNumberViewController:(id)arg2;

@end

