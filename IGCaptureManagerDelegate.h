

@protocol IGCaptureManagerDelegate <NSObject>
@required
-(void)captureManagerDidSatisfyFocusRequest;
-(void)captureManagerNeedsResume:(char)arg1;
-(void)captureManagerWillTakePhoto;

@end

