

@protocol FBAnimationPerformanceTrackerDelegate <NSObject>
@required
-(void)reportDurationInMS:(int)arg1 smallDropEvent:(double)arg2 largeDropEvent:(double)arg3;
-(void)reportStackTrace:(id)arg1 withSlide:(id)arg2 frameTime:(int)arg3;

@end

