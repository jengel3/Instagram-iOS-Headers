

@protocol IGCameraNavigationControllerDelegate <NSObject>
@required
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1;

@end

