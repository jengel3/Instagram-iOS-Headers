

@interface IGMediaPermissions : NSObject
+(char)isLibraryAuthorized;
+(void)requestCameraAuthorization:(/*^block*/id)arg1 ;
+(void)checkLibraryPermissions:(/*^block*/id)arg1 ;
+(char)usePhotosFramework;
+(char)isAudioAuthorizationDetermined;
+(void)requestAudioAuthorization:(/*^block*/id)arg1 ;
+(char)isAudioAuthorized;
+(char)isVideoAuthorizationDetermined;
+(char)isAudioAndVideoAuthorized;
+(char)isVideoAuthorized;
+(char)isLibraryPermissionDetermined;
+(char)hasDeniedCameraAccess;
@end

