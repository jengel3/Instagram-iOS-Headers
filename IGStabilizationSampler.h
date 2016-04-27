

#import <Instagram/Instagram-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface IGStabilizationSampler : NSObject {

	CMMotionManager* _motionManager;
	NSOperationQueue* _gyroQueue;
	OpaqueCMClockRef _audioClock;
	OpaqueCMClockRef _videoClock;
	circular_buffer<IGGyroSample, std::__1::allocator<IGGyroSample> >* _prerecordedGyroTrack;
	vector<IGGyroSample, std::__1::allocator<IGGyroSample> >* _gyroTrack;
	vector<IGFrameSample, std::__1::allocator<IGFrameSample> >* _frameTrack;
	char _isSampling;

}
-(void)startSampling;
-(id)gyroTrack;
-(id)frameMetadataTrack;
-(void)dealloc;
-(id)init;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)stopSampling;
@end

