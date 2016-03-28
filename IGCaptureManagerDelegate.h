

@protocol IGCaptureManagerDelegate <NSObject>
@required
-(void)captureDeviceDidSatisfyFocusRequest;
-(void)captureSessionWillTakePhoto;
-(void)captureSessionNeedsResume:(char)arg1;

@end

