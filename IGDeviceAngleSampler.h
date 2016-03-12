

@class CMMotionManager, NSOperationQueue;

@interface IGDeviceAngleSampler : NSObject {

	float _currentDeviceAngle;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;

}

@property (assign,nonatomic) float currentDeviceAngle;                     //@synthesize currentDeviceAngle=_currentDeviceAngle - In the implementation block
@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * motionQueue;               //@synthesize motionQueue=_motionQueue - In the implementation block
-(void)setCurrentDeviceAngle:(float)arg1 ;
-(void)setMotionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)motionQueue;
-(float)currentDeviceAngle;
-(void)startMeasuring;
-(void)stopMeasuring;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
@end

