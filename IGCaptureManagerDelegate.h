

@protocol IGCaptureManagerDelegate <NSObject>
@required
-(void)captureManagerDidSatisfyFocusRequest;
-(void)captureManagerWillTakePhoto;
-(void)captureManagerNeedsResume:(char)arg1;

@end

