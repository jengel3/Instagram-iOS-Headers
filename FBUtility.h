

@interface FBUtility : NSObject
+(id)stringByURLEncodingString:(id)arg1 ;
+(id)queryParamsDictionaryFromFBURL:(id)arg1 ;
+(char)isRetinaDisplay;
+(unsigned long)currentTimeInMilliseconds;
+(id)facebookSDKBundle;
+(id)localizedStringForKey:(id)arg1 withDefault:(id)arg2 inBundle:(id)arg3 ;
+(char)isFetchedFBAppSettingsStale;
+(void)callTheFetchAppSettingsCallback:(/*^block*/id)arg1 ;
+(id)stringByURLDecodingString:(id)arg1 ;
+(id)buildFacebookUrlWithPre:(id)arg1 withPost:(id)arg2 ;
+(double)randomTimeInterval:(double)arg1 withMaxValue:(double)arg2 ;
+(id)fetchedAppSettings;
+(id)stringBySerializingQueryParameters:(id)arg1 ;
+(id)simpleJSONEncode:(id)arg1 ;
+(char)isFacebookBundleIdentifier:(id)arg1 ;
+(id)dictionaryByParsingURLQueryPart:(id)arg1 ;
+(id)simpleJSONDecode:(id)arg1 ;
+(id)newUUIDString;
+(char)isRegisteredURLScheme:(id)arg1 ;
+(id)simpleJSONDecode:(id)arg1 error:(id*)arg2 ;
+(id)expirationDateFromExpirationUnixTimeString:(id)arg1 ;
+(id)attributionID;
+(id)advertiserID;
+(void)updateParametersWithEventUsageLimitsAndBundleInfo:(id)arg1 accessAdvertisingTrackingStatus:(char)arg2 ;
+(id)stringFBIDFromObject:(id)arg1 ;
+(void)fetchAppSettings:(id)arg1 callback:(/*^block*/id)arg2 ;
+(id)simpleJSONEncode:(id)arg1 error:(id*)arg2 writingOptions:(unsigned)arg3 ;
+(int)advertisingTrackingStatus;
+(char)areAllPermissionsReadPermissions:(id)arg1 ;
+(void)deleteFacebookCookies;
+(id)stringAppBaseUrlFromAppId:(id)arg1 urlSchemeSuffix:(id)arg2 ;
+(id)expirationDateFromExpirationTimeIntervalString:(id)arg1 ;
+(char)isPublishPermission:(id)arg1 ;
+(void)addBasicInfoPermission:(id)arg1 ;
+(id)graphObjectInArray:(id)arg1 withSameIDAs:(id)arg2 ;
+(id)buildFacebookUrlWithPre:(id)arg1 ;
+(id)buildFacebookUrlWithPre:(id)arg1 post:(id)arg2 version:(id)arg3 ;
+(id)localizedStringForKey:(id)arg1 withDefault:(id)arg2 ;
+(void)centerView:(id)arg1 tableView:(id)arg2 ;
+(id)dialogBaseURL;
+(char)isSystemAccountStoreAvailable;
+(char)isMultitaskingSupported;
@end

