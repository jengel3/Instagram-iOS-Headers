
#import <Instagram/FBAnimationPerformanceTrackerDelegate.h>

@class FBAnimationPerformanceTracker, NSString;

@interface IGFeedViewControllerScrollPerfLogger : NSObject <FBAnimationPerformanceTrackerDelegate> {

	FBAnimationPerformanceTracker* _apTracker;
	NSString* _dropEventName;
	NSString* _stackEventName;

}

@property (nonatomic,readonly) NSString * dropEventName;                               //@synthesize dropEventName=_dropEventName - In the implementation block
@property (nonatomic,readonly) NSString * stackEventName;                              //@synthesize stackEventName=_stackEventName - In the implementation block
@property (nonatomic,readonly) FBAnimationPerformanceTracker * apTracker;              //@synthesize apTracker=_apTracker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportDurationInMS:(int)arg1 smallDropEvent:(double)arg2 largeDropEvent:(double)arg3 ;
-(void)reportStackTrace:(id)arg1 withSlide:(id)arg2 frameTime:(int)arg3 ;
-(NSString *)dropEventName;
-(NSString *)stackEventName;
-(id)initWithDropEventName:(id)arg1 stackEventName:(id)arg2 ;
-(FBAnimationPerformanceTracker *)apTracker;
@end

