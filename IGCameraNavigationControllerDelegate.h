

@protocol IGCameraNavigationControllerDelegate <NSObject>
@required
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1;

@end

