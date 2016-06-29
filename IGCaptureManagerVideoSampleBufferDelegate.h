

@protocol IGCaptureManagerVideoSampleBufferDelegate <NSObject>
@required
-(void)captureManagerDidDropVideoBuffer;
-(void)captureManagerDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1;

@end

