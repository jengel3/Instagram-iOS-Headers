

@class CMMotionManager, NSOperationQueue;

@interface IGDeviceAngleSampler : NSObject {

	float _currentDeviceAngle;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;

}

@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * motionQueue;               //@synthesize motionQueue=_motionQueue - In the implementation block
@property (assign,nonatomic) float currentDeviceAngle;                     //@synthesize currentDeviceAngle=_currentDeviceAngle - In the implementation block
-(void)startMeasuring;
-(float)currentDeviceAngle;
-(void)setCurrentDeviceAngle:(float)arg1 ;
-(void)setMotionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)motionQueue;
-(void)stopMeasuring;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
@end

