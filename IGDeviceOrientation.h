

@class IGMotionManager, NSOperationQueue;

@interface IGDeviceOrientation : NSObject {

	int _orientationObservers;
	int _pauseCount;
	IGMotionManager* _motionManager;
	NSOperationQueue* _queue;
	int _orientation;

}

@property (nonatomic,readonly) int orientation;                                                                                             //@synthesize orientation=_orientation - In the implementation block
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) char generatesDeviceOrientationNotifications; 
+(id)currentDevice;
-(void)pauseGeneratingDeviceOrientationNotifications;
-(void)resumeGeneratingDeviceOrientationNotifications;
-(void)dealloc;
-(id)init;
-(char)isGeneratingDeviceOrientationNotifications;
-(int)orientation;
-(void)reset;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(void)startMotionUpdates;
-(void)stopMotionUpdates;
@end

