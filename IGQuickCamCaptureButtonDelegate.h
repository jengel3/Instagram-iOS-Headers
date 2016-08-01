

@protocol IGQuickCamCaptureButtonDelegate <NSObject>
@required
-(void)captureButtonDidEndRecording;
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidConfirm;

@end

