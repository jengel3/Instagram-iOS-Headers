

@protocol IGQuickCamAssetProcessorPreviewDelegate, IGQuickCamAssetProcessorGenerationDelegate, IGQuickCamInputAsset;
@interface IGQuickCamAssetProcessor : NSObject {

	id<IGQuickCamAssetProcessorPreviewDelegate> _previewDelegate;
	id<IGQuickCamAssetProcessorGenerationDelegate> _generationDelegate;
	id<IGQuickCamInputAsset> _inputAsset;
	float _previewImageSize;
	int _fullSizeRequestID;
	unsigned _contentEditingInputRequestID;

}

@property (nonatomic,readonly) float previewImageSize;                                                              //@synthesize previewImageSize=_previewImageSize - In the implementation block
@property (assign,nonatomic) int fullSizeRequestID;                                                                 //@synthesize fullSizeRequestID=_fullSizeRequestID - In the implementation block
@property (assign,nonatomic) unsigned contentEditingInputRequestID;                                                 //@synthesize contentEditingInputRequestID=_contentEditingInputRequestID - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamAssetProcessorPreviewDelegate> previewDelegate;                    //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamAssetProcessorGenerationDelegate> generationDelegate;              //@synthesize generationDelegate=_generationDelegate - In the implementation block
@property (nonatomic,readonly) id<IGQuickCamInputAsset> inputAsset;                                                 //@synthesize inputAsset=_inputAsset - In the implementation block
-(id<IGQuickCamInputAsset>)inputAsset;
-(id)initWithInputAsset:(id)arg1 previewImageSize:(float)arg2 ;
-(void)setGenerationDelegate:(id<IGQuickCamAssetProcessorGenerationDelegate>)arg1 ;
-(void)processAsset;
-(unsigned)contentEditingInputRequestID;
-(void)setContentEditingInputRequestID:(unsigned)arg1 ;
-(int)fullSizeRequestID;
-(void)setFullSizeRequestID:(int)arg1 ;
-(void)processCameraPhotoAsset:(id)arg1 ;
-(void)processCameraVideoAsset:(id)arg1 ;
-(void)processLibraryPhotoAssetForPhotosFramework:(id)arg1 ;
-(void)processLibraryVideoAssetForPhotosFramework:(id)arg1 ;
-(void)processLibraryALAsset:(id)arg1 ;
-(id<IGQuickCamAssetProcessorGenerationDelegate>)generationDelegate;
-(id)thumbnailPreviewImageForAsset:(id)arg1 ;
-(float)previewImageSize;
-(id<IGQuickCamAssetProcessorPreviewDelegate>)previewDelegate;
-(void)setPreviewDelegate:(id<IGQuickCamAssetProcessorPreviewDelegate>)arg1 ;
@end

