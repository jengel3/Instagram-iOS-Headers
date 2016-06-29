
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTImageEditingManager : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__410;
+(void)load;
-(void)cropImage:(id)arg1 cropData:(id)arg2 successCallback:(/*^block*/id)arg3 errorCallback:(/*^block*/id)arg4 ;
-(RCTBridge *)bridge;
@end

