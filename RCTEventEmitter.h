
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTEventEmitter : NSObject <RCTBridgeModule> {

	int _listenerCount;
	RCTBridge* _bridge;

}

@property (assign,nonatomic,__weak) RCTBridge * bridge;                               //@synthesize bridge=_bridge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__730;
+(id)__rct_export__851;
+(void)initialize;
-(void)sendEventWithName:(id)arg1 body:(id)arg2 ;
-(id)supportedEvents;
-(void)removeListeners:(int)arg1 ;
-(void)startObserving;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)stopObserving;
@end

