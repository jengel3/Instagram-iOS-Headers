
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface IGReactAPI : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(void)post:(id)arg1 withParameters:(id)arg2 withFiles:(id)arg3 onComplete:(/*^block*/id)arg4 onError:(/*^block*/id)arg5 ;
+(id)__rct_export__180;
+(id)moduleName;
+(void)load;
-(void)post:(id)arg1 withParameters:(id)arg2 onComplete:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
@end

