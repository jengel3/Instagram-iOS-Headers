

@interface FBSDKSettings : NSObject
+(char)limitEventAndDataUsage;
+(id)loggingBehavior;
+(float)JPEGCompressionQuality;
+(id)appURLSchemeSuffix;
+(id)legacyUserDefaultTokenInformationKeyName;
+(id)facebookDomainPart;
+(id)accessTokenCache;
+(id)graphAPIDebugParamValue;
+(char)isGraphErrorRecoveryDisabled;
+(id)userAgentSuffix;
+(void)setGraphErrorRecoveryDisabled:(char)arg1 ;
+(id)_JPEGCompressionQualityNumber;
+(void)_setJPEGCompressionQualityNumber:(id)arg1 ;
+(void)updateGraphAPIDebugBehavior;
+(void)setAppURLSchemeSuffix:(id)arg1 ;
+(void)setClientToken:(id)arg1 ;
+(void)setFacebookDomainPart:(id)arg1 ;
+(void)setJPEGCompressionQuality:(float)arg1 ;
+(void)setLimitEventAndDataUsage:(char)arg1 ;
+(void)setLoggingBehavior:(id)arg1 ;
+(void)enableLoggingBehavior:(id)arg1 ;
+(void)disableLoggingBehavior:(id)arg1 ;
+(void)setLegacyUserDefaultTokenInformationKeyName:(id)arg1 ;
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

