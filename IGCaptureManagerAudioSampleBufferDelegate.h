

@protocol IGCaptureManagerAudioSampleBufferDelegate <NSObject>
@required
-(void)captureManagerDidDropAudioBuffer;
-(void)captureManagerDidCaptureAudioBuffer:(opaqueCMSampleBufferRef)arg1;

@end

