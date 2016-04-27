
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTStatusBarManager : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__920;
+(id)__rct_export__1001;
+(id)__rct_export__1122;
+(id)__rct_export__1233;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)applicationWillChangeStatusBarFrame:(id)arg1 ;
-(void)emitEvent:(id)arg1 forNotification:(id)arg2 ;
-(void)getHeight:(/*^block*/id)arg1 ;
-(void)setHidden:(char)arg1 withAnimation:(int)arg2 ;
-(void)dealloc;
-(void)setNetworkActivityIndicatorVisible:(char)arg1 ;
-(void)setStyle:(int)arg1 animated:(char)arg2 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

