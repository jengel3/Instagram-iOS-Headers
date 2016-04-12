
#import <Instagram/RCTFrameUpdateObserver.h>
#import <Instagram/RCTBridgeModule.h>

@class NSMutableDictionary, NSLock, RCTBridge, NSString;

@interface RCTEventDispatcher : NSObject <RCTFrameUpdateObserver, RCTBridgeModule> {

	NSMutableDictionary* _eventQueue;
	NSLock* _eventQueueLock;
	char _paused;
	RCTBridge* _bridge;
	/*^block*/id _pauseCallback;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPaused,nonatomic,readonly) char paused;                           //@synthesize paused=_paused - In the implementation block
@property (nonatomic,copy) id pauseCallback;                                          //@synthesize pauseCallback=_pauseCallback - In the implementation block
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)sendDeviceEventWithName:(id)arg1 body:(id)arg2 ;
-(void)sendInputEventWithName:(id)arg1 body:(id)arg2 ;
-(void)flushEventsQueue;
-(void)didUpdateFrame:(id)arg1 ;
-(id)pauseCallback;
-(void)setPauseCallback:(id)arg1 ;
-(void)sendAppEventWithName:(id)arg1 body:(id)arg2 ;
-(void)sendTextEventWithType:(int)arg1 reactTag:(id)arg2 text:(id)arg3 key:(id)arg4 eventCount:(int)arg5 ;
-(void)sendScrollEventWithType:(int)arg1 reactTag:(id)arg2 scrollView:(id)arg3 userData:(id)arg4 ;
-(char)isPaused;
-(void)sendEvent:(id)arg1 ;
-(void)setPaused:(char)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)dispatchEvent:(id)arg1 ;
@end

