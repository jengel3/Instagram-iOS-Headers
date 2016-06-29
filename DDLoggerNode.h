

@protocol DDLogger, OS_dispatch_queue;
@class NSObject;

@interface DDLoggerNode : NSObject {

	id<DDLogger> logger;
	NSObject*<OS_dispatch_queue> loggerQueue;

}
+(id)nodeWithLogger:(id)arg1 loggerQueue:(id)arg2 ;
-(id)initWithLogger:(id)arg1 loggerQueue:(id)arg2 ;
-(void)dealloc;
@end

