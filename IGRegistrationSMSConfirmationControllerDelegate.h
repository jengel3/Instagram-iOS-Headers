

@protocol IGRegistrationSMSConfirmationControllerDelegate <NSObject>
@required
-(void)confirmationController:(id)arg1 willProceedWithConfirmationCode:(id)arg2;
-(void)userNeedsConfirmationCodePhoneCallFromConfirmationController:(id)arg1;
-(void)userWantsConfirmationCodeResentFromConfirmationController:(id)arg1;
-(void)userWantsToChangePhoneNumberFromConfirmationController:(id)arg1;

@end

