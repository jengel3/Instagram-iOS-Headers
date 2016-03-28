

@protocol IGAlbumCameraViewControllerDelegate <NSObject>
@required
-(void)albumCameraViewControllerDidDismiss:(id)arg1;
-(void)albumCameraViewControllerDidTapStartNewAlbum:(id)arg1;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2;
-(void)albumCameraViewControllerLibraryDidLoad:(id)arg1;
-(void)albumCameraViewController:(id)arg1 didPickAsset:(id)arg2;

@end

