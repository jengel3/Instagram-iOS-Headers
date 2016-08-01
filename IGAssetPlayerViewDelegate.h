

@protocol IGAssetPlayerViewDelegate <NSObject>
@required
-(void)assetPlayerViewAssetLoaded:(id)arg1;
-(void)assetPlayerViewPlayStateDidChange:(id)arg1;
-(void)assetPlayerView:(id)arg1 didPlayToTime:(SCD_Struct_IG19)arg2;

@end

