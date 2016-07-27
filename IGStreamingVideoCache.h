

@protocol OS_dispatch_queue;
@class IGDiskCache, NSMutableDictionary, NSMutableArray, NSObject;

@interface IGStreamingVideoCache : NSObject {

	IGDiskCache* _diskCache;
	NSMutableDictionary* _cacheKeyToRunningTasks;
	NSMutableArray* _stagingRequests;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedCache;
-(void)maybeStartNewTask;
-(void)finishTask:(id)arg1 ;
-(void)loadVideo:(id)arg1 ;
-(void)cancelVideo:(id)arg1 ;
-(id)init;
@end

