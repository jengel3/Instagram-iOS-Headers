
#import <Instagram/IGUserSessionObject.h>

@class NSString, NSMutableArray;

@interface IGDelayedExecutor : NSObject <IGUserSessionObject> {

	NSString* _analyticsEventName;
	NSMutableArray* _tasks;
	char _startupCompleted;
	char _sampled;
	char _taskIsScheduled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedColdStartExecutor;
-(void)executeWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)startupCompleted;
-(id)initWithAnalyticsEventName:(id)arg1 executionDelay:(double)arg2 ;
-(void)processQueue;
-(void)logTaskComplete:(id)arg1 duration:(double)arg2 ;
@end

