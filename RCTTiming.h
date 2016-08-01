
#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTInvalidating.h>
#import <Instagram/RCTFrameUpdateObserver.h>

@class NSMutableDictionary, NSTimer, RCTBridge, NSString;

@interface RCTTiming : NSObject <RCTBridgeModule, RCTInvalidating, RCTFrameUpdateObserver> {

	NSMutableDictionary* _timers;
	NSTimer* _sleepTimer;
	char _sendIdleEvents;
	char _paused;
	RCTBridge* _bridge;
	/*^block*/id _pauseCallback;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (getter=isPaused,nonatomic,readonly) char paused;                           //@synthesize paused=_paused - In the implementation block
@property (nonatomic,copy) id pauseCallback;                                          //@synthesize pauseCallback=_pauseCallback - In the implementation block
+(id)moduleName;
+(id)__rct_export__2600;
+(id)__rct_export__2892;
+(id)__rct_export__2973;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)timerDidFire;
-(void)startTimers;
-(char)hasPendingTimers;
-(void)scheduleSleepTimer:(id)arg1 ;
-(void)didUpdateFrame:(id)arg1 ;
-(id)pauseCallback;
-(void)setPauseCallback:(id)arg1 ;
-(void)createTimer:(id)arg1 duration:(double)arg2 jsSchedulingTime:(id)arg3 repeats:(char)arg4 ;
-(void)deleteTimer:(id)arg1 ;
-(void)setSendIdleEvents:(char)arg1 ;
-(char)isPaused;
-(void)dealloc;
-(void)invalidate;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)stopTimers;
@end

