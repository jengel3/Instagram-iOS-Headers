

@protocol IGRetroRegistrationSMSVerificationViewControllerDelegate <NSObject>
@required
-(void)smsVerificationViewController:(id)arg1 didRequestSupportWithUsername:(id)arg2 twoFactorIdentifier:(id)arg3;
-(void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(char)arg2;
-(char)smsVerificationViewControllerIsSwitchingUsers:(id)arg1;

@end

