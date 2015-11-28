

@interface IGRegistrationWaterfall : NSObject
+(id)logEndLoggedOutSessionEvent:(id)arg1 isFBLinkFlow:(char)arg2 ;
+(id)logLogInEvent:(id)arg1 logInToken:(id)arg2 ;
+(id)logStepEvent:(id)arg1 forStep:(int)arg2 ;
+(id)logUsernameEvent:(id)arg1 username:(id)arg2 ;
+(id)logUsernameSuggestionEvent:(id)arg1 username:(id)arg2 index:(unsigned)arg3 ;
+(id)logPhoneRegistrationEvent:(id)arg1 forPhoneNumber:(id)arg2 ;
+(id)logRetroRegistrationStepEvent:(id)arg1 forStep:(int)arg2 ;
+(id)logLandingScreenEvent:(id)arg1 ;
+(id)stepNameForStep:(int)arg1 ;
+(id)flowNameForStep:(int)arg1 ;
+(id)stepNameForRetroRegistrationStep:(int)arg1 ;
+(id)flowNameForRetroRegistrationStep:(int)arg1 ;
+(id)logEvent:(id)arg1 ;
@end

