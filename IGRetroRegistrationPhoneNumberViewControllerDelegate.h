

@protocol IGRetroRegistrationPhoneNumberViewControllerDelegate <NSObject>
@required
-(void)phoneNumberViewControllerDelegateSMSSentWithPhoneNumber:(id)arg1 phoneNumberViewController:(id)arg2;
-(void)phoneNumberViewControllerDelegateDidTapLoginButton:(id)arg1;
-(void)phoneNumberViewControllerDelegateDidTapEmailRegistrationButton:(id)arg1;

@end

