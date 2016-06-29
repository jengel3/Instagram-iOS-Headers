

@interface IGBusinessConversionHelper : NSObject
+(void)showBusinessConversionCompletionAlertWithPopoverDelegate:(id)arg1 ;
+(void)switchBackToPersonalAccountFromViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)cityPlaceholderText;
+(void)handleNewUpdateWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)sendRequestWithQueryID:(id)arg1 pageInfo:(id)arg2 includeAllFields:(char)arg3 includePageID:(char)arg4 parser:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)configureBuilder:(id)arg1 withPageInfo:(id)arg2 ;
+(void)configureBuilderWithCurrentFacebookInfo:(id)arg1 andError:(id*)arg2 ;
+(id)stringForContactPreference:(unsigned)arg1 ;
+(void)handleNewConversionWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)conversionBaseInputParams;
+(void)handleNewSwitchBackToPersonalWithCompletion:(/*^block*/id)arg1 ;
+(id)invalidEmailErrorString;
+(char)phoneNumberIsValid:(id)arg1 ;
+(id)invalidPhoneErrorString;
+(id)needContactMethodErrorString;
+(id)basicPhoneNumberField;
+(id)phoneNumberFieldWithCountrySelector;
+(id)addressField;
+(id)addressPlaceholderText;
+(unsigned)contactPreferenceForString:(id)arg1 ;
+(void)updateProfileWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)finishConversionWithPageInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)textButtonWithTitle:(id)arg1 ;
+(char)validatePageInfo:(id)arg1 withError:(id*)arg2 ;
+(id)emailField;
@end

