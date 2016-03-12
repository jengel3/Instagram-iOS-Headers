

@interface FBSDKLoginUtility : NSObject
+(id)userIDFromSignedRequest:(id)arg1 ;
+(id)stringForAudience:(unsigned)arg1 ;
+(char)isPublishPermission:(id)arg1 ;
+(char)areAllPermissionsReadPermissions:(id)arg1 ;
+(char)areAllPermissionsPublishPermissions:(id)arg1 ;
+(id)queryParamsFromLoginURL:(id)arg1 ;
-(id)init;
@end

