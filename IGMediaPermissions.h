

@interface IGMediaPermissions : NSObject
+(char)isAudioAuthorizationDetermined;
+(char)isAudioAuthorized;
+(char)usePhotosFramework;
+(void)checkLibraryPermissions:(/*^block*/id)arg1 ;
+(char)isVideoAuthorizationDetermined;
+(void)requestCameraAuthorization:(/*^block*/id)arg1 ;
+(char)isAudioAndVideoAuthorized;
+(char)isVideoAuthorized;
+(char)isLibraryAuthorized;
+(char)isLibraryPermissionDetermined;
+(void)requestAudioAuthorization:(/*^block*/id)arg1 ;
+(char)hasDeniedCameraAccess;
@end

