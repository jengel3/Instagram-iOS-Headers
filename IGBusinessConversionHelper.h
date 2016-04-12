

@interface IGBusinessConversionHelper : NSObject
+(void)showBusinessConversionCompletionAlert;
+(unsigned)contactPreferenceForString:(id)arg1 ;
+(id)stringForContactPreference:(unsigned)arg1 ;
+(void)switchBackToPersonalAccountFromViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)cityPlaceholderText;
+(id)headerViewWithTitle:(id)arg1 subtitle:(id)arg2 width:(float)arg3 ;
+(char)validatePageInfo:(id)arg1 withError:(id*)arg2 ;
+(void)finishConversionWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)emailField;
+(id)addressField;
+(id)addressPlaceholderText;
+(id)phoneNumberFieldWithCountrySelector;
+(void)sendRequestWithQueryID:(id)arg1 pageInfo:(id)arg2 includeAllFields:(char)arg3 includePageID:(char)arg4 parser:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)conversionBaseInputParams;
+(id)invalidEmailErrorString;
+(char)phoneNumberIsValid:(id)arg1 ;
+(id)invalidPhoneErrorString;
+(id)needContactMethodErrorString;
+(id)basicPhoneNumberField;
+(id)directMessageField;
+(void)updateProfileWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)dismissStyleButton;
+(id)backStyleButton;
+(id)textButtonWithTitle:(id)arg1 ;
+(id)refreshButton;
@end

