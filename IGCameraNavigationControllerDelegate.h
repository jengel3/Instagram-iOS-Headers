

@protocol IGCameraNavigationControllerDelegate <NSObject>
@optional
-(void)cameraControllerDidFinishWithPhoto:(id)arg1;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1;

@required
-(void)cameraControllerDidCancel;

@end

