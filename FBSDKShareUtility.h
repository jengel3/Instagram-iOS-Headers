

@interface FBSDKShareUtility : NSObject
+(char)validateAppInviteContent:(id)arg1 error:(id*)arg2 ;
+(void)assertCollection:(id)arg1 ofClass:(id)arg2 name:(id)arg3 ;
+(char)validateGameRequestContent:(id)arg1 error:(id*)arg2 ;
+(id)parametersForShareContent:(id)arg1 shouldFailOnDataError:(char)arg2 ;
+(char)validateAssetLibraryURLWithShareVideoContent:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(char)validateShareContent:(id)arg1 error:(id*)arg2 ;
+(id)getOpenGraphNameAndNamespaceFromFullName:(id)arg1 namespace:(id*)arg2 ;
+(void)assertCollection:(id)arg1 ofClassStrings:(id)arg2 name:(id)arg3 ;
+(void)assertOpenGraphValues:(id)arg1 requireKeyNamespace:(char)arg2 ;
+(id)convertOpenGraphValues:(id)arg1 ;
+(void)assertOpenGraphKey:(id)arg1 requireNamespace:(char)arg2 ;
+(void)assertOpenGraphValue:(id)arg1 ;
+(char)_isOpenGraphValue:(id)arg1 ;
+(id)_convertOpenGraphValueContainer:(id)arg1 requireNamespace:(char)arg2 ;
+(id)hashtagStringFromHashtag:(id)arg1 ;
+(id)convertOpenGraphValue:(id)arg1 ;
+(void)_addToParameters:(id)arg1 forShareContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forShareLinkContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forSharePhotoContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forShareVideoContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forShareOpenGraphContent:(id)arg2 ;
+(void)_testObject:(id)arg1 containsMedia:(char*)arg2 containsPhotos:(char*)arg3 containsVideos:(char*)arg4 ;
+(void)_testOpenGraphValueContainer:(id)arg1 containsMedia:(char*)arg2 containsPhotos:(char*)arg3 containsVideos:(char*)arg4 ;
+(char)_validateRequiredValue:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(char)_validateNetworkURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(char)validatePromoCodeWithError:(id)arg1 error:(id*)arg2 ;
+(char)_validateAssetLibraryVideoURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(char)_validateArgumentWithName:(id)arg1 value:(unsigned)arg2 isIn:(id)arg3 error:(id*)arg4 ;
+(char)validateShareLinkContent:(id)arg1 error:(id*)arg2 ;
+(char)validateSharePhotoContent:(id)arg1 error:(id*)arg2 ;
+(char)validateShareVideoContent:(id)arg1 error:(id*)arg2 ;
+(char)validateShareMediaContent:(id)arg1 error:(id*)arg2 ;
+(char)validateShareOpenGraphContent:(id)arg1 error:(id*)arg2 ;
+(char)_validateArray:(id)arg1 minCount:(unsigned)arg2 maxCount:(unsigned)arg3 name:(id)arg4 error:(id*)arg5 ;
+(void)testShareContent:(id)arg1 containsMedia:(char*)arg2 containsPhotos:(char*)arg3 containsVideos:(char*)arg4 ;
+(id)_convertPhoto:(id)arg1 ;
+(id)_convertObject:(id)arg1 ;
+(char)buildWebShareContent:(id)arg1 methodName:(id*)arg2 parameters:(id*)arg3 error:(id*)arg4 ;
+(id)feedShareDictionaryForContent:(id)arg1 ;
+(char)validateAssetLibraryURLsWithShareMediaContent:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(char)shareMediaContentContainsPhotosAndVideos:(id)arg1 ;
+(char)_validateFileURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)init;
@end

