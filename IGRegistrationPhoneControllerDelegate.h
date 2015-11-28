

@protocol IGRegistrationPhoneControllerDelegate <NSObject>
@required
-(void)phoneController:(id)arg1 wantsToProceedWithPhoneNumber:(id)arg2 countryCode:(id)arg3;
-(void)phoneController:(id)arg1 wantsToDismissViewController:(char)arg2 completion:(/*^block*/id)arg3;
-(void)phoneController:(id)arg1 wantsToPresentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4;

@end

