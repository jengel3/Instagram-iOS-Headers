

@protocol IGAlbumCameraViewControllerDelegate <NSObject>
@required
-(void)albumCameraViewControllerDidDismiss:(id)arg1;
-(void)albumCameraViewControllerDidTapAddText:(id)arg1;
-(void)albumCameraViewControllerDidTapRetake:(id)arg1;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2;
-(void)albumCameraViewController:(id)arg1 didPickAsset:(id)arg2;
-(void)albumCameraViewControllerDidTapNext:(id)arg1;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2;

@end

