
@class PHAsset, ALAsset;


@protocol IGQuickCamInputLibraryAsset <IGQuickCamInputAsset>
@property (nonatomic,readonly) PHAsset * phAsset; 
@property (nonatomic,readonly) ALAsset * alAsset; 
@required
+(id)new;
-(id)initWithPHAsset:(id)arg1 ALAsset:(id)arg2 devicePosition:(int)arg3 flashMode:(int)arg4;
-(PHAsset *)phAsset;
-(ALAsset *)alAsset;
-(id)init;

@end

