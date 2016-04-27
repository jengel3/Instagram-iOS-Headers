

@protocol IGConfirmPhoneNumberViewControllerDelegate <NSObject>
@required
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1;
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2;

@end

