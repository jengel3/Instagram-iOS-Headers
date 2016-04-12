
#import <Instagram/RCTBridgeModule.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSArray, RCTBridge, NSObject, NSString;

@interface RCTNetworking : NSObject <RCTBridgeModule> {

	NSMutableDictionary* _tasksByRequestID;
	NSArray* _handlers;
	RCTBridge* _bridge;
	NSObject*<OS_dispatch_queue> _methodQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue;              //@synthesize methodQueue=_methodQueue - In the implementation block
+(id)moduleName;
+(id)__rct_export__4320;
+(id)__rct_export__4461;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(id)networkTaskWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)processDataForHTTPQuery:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)handlerForRequest:(id)arg1 ;
-(void)sendData:(id)arg1 forTask:(id)arg2 ;
-(void)sendRequest:(id)arg1 incrementalUpdates:(char)arg2 responseSender:(/*^block*/id)arg3 ;
-(/*^block*/id)buildRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendRequest:(id)arg1 responseSender:(/*^block*/id)arg2 ;
-(void)cancelRequest:(id)arg1 ;
-(RCTBridge *)bridge;
-(char)canHandleRequest:(id)arg1 ;
@end

