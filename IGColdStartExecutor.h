

@class NSMutableArray;

@interface IGColdStartExecutor : NSObject {

	NSMutableArray* _tasks;
	char _startupCompleted;
	char _sampled;
	char _taskIsScheduled;

}
+(id)sharedExecutor;
-(void)executeWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)startupCompleted;
-(void)processQueue;
-(void)logTaskComplete:(id)arg1 duration:(double)arg2 ;
-(id)init;
@end

