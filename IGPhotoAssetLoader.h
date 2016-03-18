

@interface IGPhotoAssetLoader : NSObject
+(void)loadImageFromMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)loadImageFromPath:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadImageFromAssetInMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
+(char)isLayoutFile:(id)arg1 ;
+(char)isCopiedFileFromExternalApp:(id)arg1 ;
@end

