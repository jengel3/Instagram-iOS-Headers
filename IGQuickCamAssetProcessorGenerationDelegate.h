

@protocol IGQuickCamAssetProcessorGenerationDelegate <NSObject>
@required
-(void)quickCamAssetProcessor:(id)arg1 didGeneratePhotoAsset:(id)arg2;
-(void)quickCamAssetProcessor:(id)arg1 didGenerateVideoAsset:(id)arg2;
-(void)quickCamAssetProcessor:(id)arg1 didUpdateProgress:(float)arg2;
-(void)quickCamAssetProcessorDidDetectIncompatible:(id)arg1;
-(void)quickCamAssetProcessorDidFailProcessing:(id)arg1;

@end

