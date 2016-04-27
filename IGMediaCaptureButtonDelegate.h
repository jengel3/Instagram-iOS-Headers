

@protocol IGMediaCaptureButtonDelegate <NSObject>
@required
-(void)mediaCaptureButtonDidTakePicture;
-(void)mediaCaptureButtonDidBeginRecording;
-(void)mediaCaptureButtonDidEndRecording;

@end

