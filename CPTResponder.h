

@protocol CPTResponder <NSObject>
@required
-(char)pointingDeviceDraggedEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(char)pointingDeviceCancelledEvent:(UIEvent*)arg1;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2;

@end

