

@interface IGAlbumCreationManager : NSObject
+(char)shouldSaveToLibrary;
+(id)preparePostForAsset:(id)arg1 albumModel:(id)arg2 ;
+(void)processPostWithMetadata:(id)arg1 ;
+(void)uploadAlbumModel:(id)arg1 asset:(id)arg2 ;
@end

