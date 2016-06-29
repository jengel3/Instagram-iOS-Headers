
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RCTClipboard : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__260;
+(id)__rct_export__331;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)getString:(/*^block*/id)arg1 rejecter:(/*^block*/id)arg2 ;
-(void)setString:(id)arg1 ;
@end

