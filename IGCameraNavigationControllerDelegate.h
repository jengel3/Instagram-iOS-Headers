

@protocol IGCameraNavigationControllerDelegate <NSObject>
@optional
-(void)cameraControllerDidFinishWithSelfie:(id)arg1;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1;

@required
-(void)cameraControllerDidCancel;

@end

