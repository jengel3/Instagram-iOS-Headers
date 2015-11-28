

@interface FBSessionUtility : NSObject
+(id)userIDFromSignedRequest:(id)arg1 ;
+(char)isOpenSessionResponseURL:(id)arg1 ;
+(char)areRequiredPermissions:(id)arg1 aSubsetOfPermissions:(id)arg2 ;
+(int)loginBehaviorForLoginType:(int)arg1 ;
+(void)validateRequestForPermissions:(id)arg1 defaultAudience:(int)arg2 allowSystemAccount:(char)arg3 isRead:(char)arg4 ;
+(id)clientStateFromQueryParams:(id)arg1 ;
+(id)queryParamsFromLoginURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3 ;
+(id)sessionStateDescription:(int)arg1 ;
+(id)audienceNameWithAudience:(int)arg1 ;
+(void)addWebLoginStartTimeToParams:(id)arg1 ;
+(id)expirationDateFromResponseParams:(id)arg1 ;
+(void)extractPermissionsFromResponse:(id)arg1 allPermissions:(id)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4 ;
+(char)logIfFoundUnexpectedPermissions:(id)arg1 isRead:(char)arg2 ;
@end

