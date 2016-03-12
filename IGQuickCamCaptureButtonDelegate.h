

@protocol IGQuickCamCaptureButtonDelegate <NSObject>
@required
-(void)captureButtonDidTakePicture;
-(void)captureButtonDidConfirm;
-(void)captureButtonDidBeginRecording;
-(void)captureButtonDidEndRecording;

@end

