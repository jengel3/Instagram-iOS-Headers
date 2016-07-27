

@interface FBSDKLoginUtility : NSObject
+(char)areAllPermissionsReadPermissions:(id)arg1 ;
+(char)areAllPermissionsPublishPermissions:(id)arg1 ;
+(id)stringForAudience:(unsigned)arg1 ;
+(id)queryParamsFromLoginURL:(id)arg1 ;
+(id)userIDFromSignedRequest:(id)arg1 ;
+(char)isPublishPermission:(id)arg1 ;
-(id)init;
@end

