

@interface IGMediaPermissions : NSObject
+(void)requestCameraAuthorization:(/*^block*/id)arg1 ;
+(char)usePhotosFramework;
+(char)isAudioAuthorizationDetermined;
+(void)requestAudioAuthorization:(/*^block*/id)arg1 ;
+(char)isAudioAuthorized;
+(char)isAudioAndVideoAuthorized;
+(char)isVideoAuthorizationDetermined;
+(void)checkLibraryPermissions:(/*^block*/id)arg1 ;
+(char)isVideoAuthorized;
+(char)isLibraryAuthorized;
+(char)isLibraryPermissionDetermined;
+(char)hasDeniedCameraAccess;
@end

