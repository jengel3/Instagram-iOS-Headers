
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTJavaScriptExecutor.h>

@class NSThread, RCTPerformanceLogger, RCTJavaScriptContext, RCTBridge, NSString;

@interface RCTJSCExecutor : NSObject <RCTJavaScriptExecutor> {

	char _useCustomJSCLibrary;
	NSThread* _javaScriptThread;
	RCTPerformanceLogger* _performanceLogger;
	RCTJSCWrapper* _jscWrapper;
	RCTJavaScriptContext* _context;
	RandomAccessBundleData* _randomAccessBundle;
	OpaqueJSValueRef _batchedBridgeRef;
	char _valid;
	RCTBridge* _bridge;

}

@property (nonatomic,readonly) char useCustomJSCLibrary;                              //@synthesize useCustomJSCLibrary=_useCustomJSCLibrary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (getter=isValid,nonatomic,readonly) char valid;                             //@synthesize valid=_valid - In the implementation block
+(id)moduleName;
+(void)runRunLoopThread;
+(id)initializedExecutorWithContextProvider:(id)arg1 applicationScript:(id)arg2 sourceURL:(id)arg3 JSContext:(id*)arg4 error:(id*)arg5 ;
+(id)__rct_export__9960;
+(void)load;
-(id)initWithUseCustomJSCLibrary:(char)arg1 ;
-(id)initWithJSContextData:(const RCTJSContextData*)arg1 ;
-(char)_synchronouslyExecuteApplicationScript:(id)arg1 sourceURL:(id)arg2 JSContext:(id)arg3 error:(id*)arg4 ;
-(void)executeBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(void)_executeJSCall:(id)arg1 arguments:(id)arg2 unwrapResult:(char)arg3 callback:(/*^block*/id)arg4 ;
-(void)_callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 flushQueue:(char)arg4 unwrapResult:(char)arg5 callback:(/*^block*/id)arg6 ;
-(void)flushedQueue:(/*^block*/id)arg1 ;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)invokeCallbackID:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)injectJSONText:(id)arg1 asGlobalObjectNamed:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeAsyncBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(id)errorForJSError:(id)arg1 ;
-(void)toggleProfilingFlag:(id)arg1 ;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 jsValueCallback:(/*^block*/id)arg4 ;
-(void)_nativeRequire:(id)arg1 ;
-(char)useCustomJSCLibrary;
-(void)setContextName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)isValid;
-(id)context;
-(void)setUp;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

