

@interface FBSDKSettings : NSObject
+(id)appURLSchemeSuffix;
+(id)loggingBehavior;
+(char)limitEventAndDataUsage;
+(char)isGraphErrorRecoveryDisabled;
+(id)graphAPIDebugParamValue;
+(void)setGraphErrorRecoveryDisabled:(char)arg1 ;
+(id)userAgentSuffix;
+(id)_JPEGCompressionQualityNumber;
+(void)_setJPEGCompressionQualityNumber:(id)arg1 ;
+(void)updateGraphAPIDebugBehavior;
+(void)setAppURLSchemeSuffix:(id)arg1 ;
+(void)setClientToken:(id)arg1 ;
+(id)facebookDomainPart;
+(void)setFacebookDomainPart:(id)arg1 ;
+(float)JPEGCompressionQuality;
+(void)setJPEGCompressionQuality:(float)arg1 ;
+(void)setLimitEventAndDataUsage:(char)arg1 ;
+(void)setLoggingBehavior:(id)arg1 ;
+(void)enableLoggingBehavior:(id)arg1 ;
+(void)disableLoggingBehavior:(id)arg1 ;
+(void)setLegacyUserDefaultTokenInformationKeyName:(id)arg1 ;
+(id)legacyUserDefaultTokenInformationKeyName;
+(id)accessTokenCache;
+(void)setUserAgentSuffix:(id)arg1 ;
+(void)initialize;
+(id)displayName;
+(id)sdkVersion;
+(void)setAppID:(id)arg1 ;
+(id)clientToken;
+(void)setDisplayName:(id)arg1 ;
+(id)appID;
-(void)setAccessTokenCache:(id)arg1 ;
-(id)init;
@end

