

@interface IGMediaPermissions : NSObject
+(char)isVideoAuthorized;
+(char)isAudioAuthorized;
+(char)isAudioAndVideoAuthorized;
+(char)isVideoAuthorizationDetermined;
+(void)requestCameraAuthorization:(/*^block*/id)arg1 ;
+(char)isAudioAuthorizationDetermined;
+(void)requestAudioAuthorization:(/*^block*/id)arg1 ;
+(char)isLibraryAuthorized;
+(char)isLibraryPermissionDetermined;
+(void)checkLibraryPermissions:(/*^block*/id)arg1 ;
+(char)usePhotosFramework;
+(char)hasDeniedCameraAccess;
@end

