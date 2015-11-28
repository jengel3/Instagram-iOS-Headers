

@protocol IGMediaCaptureButtonDelegate <NSObject>
@required
-(void)mediaCaptureButtonDidTakePicture;
-(void)mediaCaptureButtonDidEndRecording;
-(void)mediaCaptureButtonDidBeginRecording;

@end

