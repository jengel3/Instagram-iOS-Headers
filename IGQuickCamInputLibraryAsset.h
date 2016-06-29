
@class PHAsset, ALAsset;


@protocol IGQuickCamInputLibraryAsset <IGQuickCamInputAsset>
@property (nonatomic,retain) PHAsset * phAsset; 
@property (nonatomic,retain) ALAsset * alAsset; 
@required
-(void)setPhAsset:(id)arg1;
-(void)setAlAsset:(id)arg1;
-(PHAsset *)phAsset;
-(ALAsset *)alAsset;

@end

