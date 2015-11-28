

@protocol IGConfirmPhoneNumberViewControllerDelegate <NSObject>
@required
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1;
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1;

@end

