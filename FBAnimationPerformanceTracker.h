

@protocol FBAnimationPerformanceTrackerDelegate;
#import <Instagram/Instagram-Structs.h>
@class CADisplayLink, FBAnimationPerformanceTrackerDisplayLinkTarget, NSRunLoop;

@interface FBAnimationPerformanceTracker : NSObject {

	FBAnimationPerformanceTrackerConfig _config;
	char _tracking;
	char _firstUpdate;
	double _previousFrameTimestamp;
	CADisplayLink* _displayLink;
	FBAnimationPerformanceTrackerDisplayLinkTarget* _displayLinkTarget;
	char _prepared;
	NSRunLoop* _runLoop;
	double _durationTotal;
	double _smallDrops;
	double _largeDrops;
	id<FBAnimationPerformanceTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAnimationPerformanceTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(FBAnimationPerformanceTrackerConfig)standardConfig;
+(void)_trackerLoop;
-(void)_setupSignal;
-(void)_tearDownCADisplayLink;
-(void)_setUpCADisplayLink;
-(void)_reportStackTrace:(id)arg1 frameTime:(int)arg2 ;
-(void)_addFrameTime:(double)arg1 singleFrameTime:(double)arg2 ;
-(char)prepare;
-(void)setDelegate:(id<FBAnimationPerformanceTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAnimationPerformanceTrackerDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)_update;
-(void)_reset;
-(id)initWithConfig:(FBAnimationPerformanceTrackerConfig)arg1 ;
@end

