
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSURL, NSString;

@interface RCTSourceCode : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;
	NSURL* _scriptURL;

}

@property (nonatomic,copy) NSURL * scriptURL;                                         //@synthesize scriptURL=_scriptURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(id)constantsToExport;
-(RCTBridge *)bridge;
-(NSURL *)scriptURL;
-(void)setScriptURL:(NSURL *)arg1 ;
@end

