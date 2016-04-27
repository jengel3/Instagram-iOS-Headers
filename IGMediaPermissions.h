

@interface IGMediaPermissions : NSObject
+(char)usePhotosFramework;
+(char)isAudioAuthorizationDetermined;
+(char)isAudioAuthorized;
+(void)checkLibraryPermissions:(/*^block*/id)arg1 ;
+(char)isVideoAuthorizationDetermined;
+(void)requestCameraAuthorization:(/*^block*/id)arg1 ;
+(char)isAudioAndVideoAuthorized;
+(char)isVideoAuthorized;
+(char)isLibraryPermissionDetermined;
+(char)hasDeniedCameraAccess;
+(char)isLibraryAuthorized;
+(void)requestAudioAuthorization:(/*^block*/id)arg1 ;
@end

