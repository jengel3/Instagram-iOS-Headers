

@interface IGRetroRegistrationAuthHelper : NSObject
+(void)verifyAccountRecoveryEmailConfirmationCodeWithEmail:(id)arg1 confirmationCode:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
+(void)resendAccountRecoveryEmailConfirmationCodeWithEmail:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(id)submitSignUpRequestWithInfo:(id)arg1 profileInfo:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
+(id)phontRegistrationWithSignUpInfoDict:(id)arg1 profileInfo:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
+(void)uploadProfilePicture:(id)arg1 successfulHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)fetchSuggestedUsernamesWithEmail:(id)arg1 fullName:(id)arg2 successfulHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
+(void)requestSignUpSMSCodeWithPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
+(void)verifySignUpSMSCodeWithPhoneNumber:(id)arg1 validationCode:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
@end

