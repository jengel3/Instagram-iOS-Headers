

@protocol IGQuickCamCaptureButtonDelegate <NSObject>
@required
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidConfirm;

@end

