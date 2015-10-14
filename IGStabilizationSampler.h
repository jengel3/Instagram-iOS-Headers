/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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
-(id)gyroTrack;
-(id)frameMetadataTrack;
-(void)startSampling;
-(void)dealloc;
-(id)init;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)stopSampling;
@end

