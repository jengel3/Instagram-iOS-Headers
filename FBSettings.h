

@interface FBSettings : NSObject
+(id)resourceBundleName;
+(id)defaultAppID;
+(id)loggingBehavior;
+(void)FBSDKInitialize;
+(char)shouldAutoPublishInstall;
+(void)autoPublishInstallImpl:(id)arg1 ;
+(void)publishInstall:(id)arg1 isAutoPublish:(char)arg2 ;
+(void)setShouldAutoPublishInstall:(char)arg1 ;
+(void)enablePlatformCompatibility:(char)arg1 ;
+(void)setClientToken:(id)arg1 ;
+(void)setDefaultDisplayName:(id)arg1 ;
+(void)setdefaultJPEGCompressionQuality:(float)arg1 ;
+(id)facebookDomainPart;
+(void)setFacebookDomainPart:(id)arg1 ;
+(void)setLoggingBehavior:(id)arg1 ;
+(void)setResourceBundleName:(id)arg1 ;
+(void)setRestrictedTreatment:(unsigned)arg1 ;
+(void)enableBetaFeatures:(unsigned)arg1 ;
+(void)enableBetaFeature:(unsigned)arg1 ;
+(void)disableBetaFeature:(unsigned)arg1 ;
+(char)isBetaFeatureEnabled:(unsigned)arg1 ;
+(id)defaultDisplayName;
+(id)defaultUrlSchemeSuffix;
+(id)defaultURLSchemeWithAppID:(id)arg1 urlSchemeSuffix:(id)arg2 ;
+(char)limitEventAndDataUsage;
+(void)setLimitEventAndDataUsage:(char)arg1 ;
+(void)publishInstall:(id)arg1 ;
+(unsigned)restrictedTreatment;
+(void)autoPublishInstall:(id)arg1 ;
+(void)setDefaultAppID:(id)arg1 ;
+(void)setDefaultUrlSchemeSuffix:(id)arg1 ;
+(char)isPlatformCompatibilityEnabled;
+(float)defaultJPEGCompressionQuality;
+(void)load;
+(id)sdkVersion;
+(id)clientToken;
+(id)appVersion;
+(void)setAppVersion:(id)arg1 ;
+(id)platformVersion;
@end

