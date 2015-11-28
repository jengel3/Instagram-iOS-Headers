

@protocol IGCaptureManagerDelegate <NSObject>
@required
-(void)captureDeviceDidSatisfyFocusRequest;
-(void)captureSessionNeedsResume:(char)arg1;
-(void)captureSessionWillTakePhoto;

@end

