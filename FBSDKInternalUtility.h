

#import <Instagram/Instagram-Structs.h>
@interface FBSDKInternalUtility : NSObject
+(id)topMostViewController;
+(void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3 ;
+(void)registerTransientObject:(id)arg1 ;
+(void)unregisterTransientObject:(id)arg1 ;
+(char)object:(id)arg1 isEqualToObject:(id)arg2 ;
+(void)checkRegisteredCanOpenURLScheme:(id)arg1 ;
+(id)JSONStringForObject:(id)arg1 error:(id*)arg2 invalidObjectHandler:(/*^block*/id)arg3 ;
+(char)isFacebookAppInstalled;
+(char)isMessengerAppInstalled;
+(id)bundleForStrings;
+(void)array:(id)arg1 addObject:(id)arg2 ;
+(char)isBrowserURL:(id)arg1 ;
+(char)isOSRunTimeVersionAtLeast:(IGPagingFocusOffsets)arg1 ;
+(char)areAllPermissionsReadPermissions:(id)arg1 ;
+(char)areAllPermissionsPublishPermissions:(id)arg1 ;
+(void)validateURLSchemes;
+(id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id*)arg5 ;
+(id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id*)arg4 ;
+(id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id*)arg4 ;
+(unsigned long)currentTimeInMilliseconds;
+(void)deleteFacebookCookies;
+(id)objectForJSONString:(id)arg1 error:(id*)arg2 ;
+(void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 ;
+(char)isRegisteredURLScheme:(id)arg1 ;
+(char)isRegisteredCanOpenURLScheme:(id)arg1 ;
+(id)dictionaryFromFBURL:(id)arg1 ;
+(id)hexadecimalStringFromData:(id)arg1 ;
+(Class)resolveBoltsClassWithName:(id)arg1 ;
+(void)validateFacebookReservedURLSchemes;
+(id)queryStringWithDictionary:(id)arg1 error:(id*)arg2 invalidObjectHandler:(/*^block*/id)arg3 ;
+(id)convertRequestValue:(id)arg1 ;
+(id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id*)arg5 ;
+(char)isFacebookBundleIdentifier:(id)arg1 ;
+(char)isSafariBundleIdentifier:(id)arg1 ;
+(int)_compareOperatingSystemVersion:(IGPagingFocusOffsets)arg1 toVersion:(IGPagingFocusOffsets)arg2 ;
+(id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(/*^block*/id)arg2 stop:(char*)arg3 ;
+(char)isUIKitLinkTimeVersionAtLeast:(int)arg1 ;
+(char)isUIKitRunTimeVersionAtLeast:(int)arg1 ;
+(void)validateAppID;
+(char)isPublishPermission:(id)arg1 ;
+(char)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id*)arg4 ;
+(id)validateRequiredClientAccessToken;
+(char)shouldManuallyAdjustOrientation;
+(IGPagingFocusOffsets)operatingSystemVersion;
+(id)appURLScheme;
+(id)viewControllerForView:(id)arg1 ;
-(id)init;
@end

