
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface IGReactPerformanceLogger : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__150;
+(void)load;
-(void)logEvents:(id)arg1 forView:(id)arg2 ;
@end

