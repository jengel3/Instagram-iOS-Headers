
@class PHAsset, ALAsset;


@protocol IGQuickCamInputLibraryAsset <IGQuickCamInputAsset>
@property (nonatomic,retain) PHAsset * phAsset; 
@property (nonatomic,retain) ALAsset * alAsset; 
@required
-(PHAsset *)phAsset;
-(void)setPhAsset:(id)arg1;
-(ALAsset *)alAsset;
-(void)setAlAsset:(id)arg1;

@end

