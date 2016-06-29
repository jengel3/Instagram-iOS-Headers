

@protocol IGSMSConfirmationControllerDelegate <NSObject>
@required
-(void)smsConfirmationControllerWantsToCallUserWithConfirmationCode:(id)arg1;
-(void)smsConfirmationControllerWantsToResendConfirmationCode:(id)arg1;
-(void)smsConfirmationControllerWantsToChangePhoneNumber:(id)arg1;

@end

