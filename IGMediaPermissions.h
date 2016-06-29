

@interface IGMediaPermissions : NSObject
+(char)usePhotosFramework;
+(char)isLibraryAuthorized;
+(void)requestCameraAuthorization:(/*^block*/id)arg1 ;
+(char)isAudioAuthorizationDetermined;
+(void)requestAudioAuthorization:(/*^block*/id)arg1 ;
+(char)isAudioAuthorized;
+(char)isAudioAndVideoAuthorized;
+(void)checkLibraryPermissions:(/*^block*/id)arg1 ;
+(char)isVideoAuthorizationDetermined;
+(char)isVideoAuthorized;
+(char)isLibraryPermissionDetermined;
+(char)hasDeniedCameraAccess;
@end

