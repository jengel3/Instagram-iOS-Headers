
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RCTAppState : NSObject <RCTBridgeModule> {

	NSString* _lastKnownState;
	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__1090;
+(void)load;
-(void)handleAppStateDidChange:(id)arg1 ;
-(void)getCurrentAppState:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)dealloc;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
-(void)handleMemoryWarning;
@end

