

@protocol IGVideoSampleBufferDelegate <NSObject>
@required
-(void)captureSessionDidDropVideoBuffer;
-(void)captureSessionDidCaptureVideoBuffer:(opaqueCMSampleBufferRef)arg1;

@end

