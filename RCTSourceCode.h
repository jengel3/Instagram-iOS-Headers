
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSData, NSURL, NSString;

@interface RCTSourceCode : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;
	NSData* _scriptData;
	NSURL* _scriptURL;

}

@property (nonatomic,copy) NSData * scriptData;                                       //@synthesize scriptData=_scriptData - In the implementation block
@property (nonatomic,copy) NSURL * scriptURL;                                         //@synthesize scriptURL=_scriptURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__300;
+(void)load;
-(id)constantsToExport;
-(void)setScriptText:(id)arg1 ;
-(void)getScriptText:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(NSData *)scriptData;
-(void)setScriptData:(NSData *)arg1 ;
-(RCTBridge *)bridge;
-(NSURL *)scriptURL;
-(void)setScriptURL:(NSURL *)arg1 ;
@end

