

@protocol IGAlbumCameraViewControllerDelegate <NSObject>
@required
-(void)albumCameraViewControllerDidDismiss:(id)arg1;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2;
-(void)albumCameraViewController:(id)arg1 didOutputAsset:(id)arg2;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2;

@end

