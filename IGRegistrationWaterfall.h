

@interface IGRegistrationWaterfall : NSObject
+(id)retroRegistrationStepEventWithName:(id)arg1 forStep:(int)arg2 ;
+(id)eventWithName:(id)arg1 ;
+(id)stepNameForRetroRegistrationStep:(int)arg1 ;
+(id)flowNameForRetroRegistrationStep:(int)arg1 ;
+(void)logEndLoggedOutSessionEvent:(id)arg1 isFBLinkFlow:(char)arg2 ;
@end

