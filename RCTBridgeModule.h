
@class RCTBridge;


@protocol RCTBridgeModule <NSObject>
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@optional
-(id)methodsToExport;
-(id)constantsToExport;
-(void)batchDidComplete;
-(void)partialBatchDidFlush;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(RCTBridge *)bridge;

@required
+(id)moduleName;

@end

