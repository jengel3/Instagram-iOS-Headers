

@interface IGVideoAssetLoader : NSObject
+(void)loadVideoFromAssetInMetadata:(id)arg1 completion:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
+(void)photosFramework_loadVideoFromAssetInMetadata:(id)arg1 completion:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
+(void)assetLibrary_loadVideoFromAssetInMetadata:(id)arg1 completion:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
+(id)identifiersFromPreselectedIdentifiers:(id)arg1 shouldUseLocalIdentifier:(char)arg2 ;
+(id)videoClipForAVAsset:(id)arg1 identifier:(id)arg2 originalSource:(int)arg3 ;
+(void)clipLoadingDidFinishWithClipsDictionary:(id)arg1 preselectedIdentifiers:(id)arg2 completion:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
+(id)orderClipsFromDictionary:(id)arg1 forOrderedIdentifiers:(id)arg2 ;
@end

