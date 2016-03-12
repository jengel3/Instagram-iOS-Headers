

@protocol IGAudioSampleBufferDelegate <NSObject>
@required
-(void)captureSessionDidDropAudioBuffer;
-(void)captureSessionDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1;

@end

