
#import <Instagram/RCTBridgeModule.h>

@class NSLock, NSMutableDictionary, NSMutableArray, RCTBridge, NSString;

@interface RCTEventDispatcher : NSObject <RCTBridgeModule> {

	NSLock* _eventQueueLock;
	NSMutableDictionary* _events;
	NSMutableArray* _eventQueue;
	char _eventsDispatchScheduled;
	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)sendDeviceEventWithName:(id)arg1 body:(id)arg2 ;
-(void)sendInputEventWithName:(id)arg1 body:(id)arg2 ;
-(void)flushEventsQueue;
-(void)sendAppEventWithName:(id)arg1 body:(id)arg2 ;
-(void)sendTextEventWithType:(int)arg1 reactTag:(id)arg2 text:(id)arg3 key:(id)arg4 eventCount:(int)arg5 ;
-(void)sendFakeScrollEvent:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)dispatchEvent:(id)arg1 ;
@end

