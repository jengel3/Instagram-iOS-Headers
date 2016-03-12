

@protocol AVCaptureVideoDataOutputSampleBufferDelegate <NSObject>
@optional
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3;

@end

