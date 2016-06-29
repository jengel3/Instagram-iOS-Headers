

@protocol IGCaptureControllerDelegate <NSObject>
@required
-(void)captureController:(id)arg1 didChangeToCameraMode:(int)arg2;
-(void)captureController:(id)arg1 willTakePhotoWithPreviewBuffer:(id)arg2 mediaMetadata:(id)arg3;
-(void)captureController:(id)arg1 didTakePhotoWithBuffer:(id)arg2 mediaMetadata:(id)arg3;
-(void)captureControllerWillBeginFilmingClip:(id)arg1;
-(void)captureController:(id)arg1 didUpdateVideoComposition:(id)arg2;
-(void)captureController:(id)arg1 didFinishFilmingWithVideoComposition:(id)arg2 mediaMetadata:(id)arg3;
-(void)captureControllerDidCancelCapture:(id)arg1;

@end

