
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTJavaScriptExecutor.h>

@class RCTJavaScriptContext, NSThread, RCTBridge, NSString;

@interface RCTJSCExecutor : NSObject <RCTJavaScriptExecutor> {

	RCTJavaScriptContext* _context;
	NSThread* _javaScriptThread;
	CFDictionaryRef _cookieMap;
	OpaqueJSStringRef _bundleURL;
	RandomAccessBundleData* _randomAccessBundle;
	RCTJSCWrapper* _jscWrapper;
	char _valid;
	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (getter=isValid,nonatomic,readonly) char valid;                             //@synthesize valid=_valid - In the implementation block
+(id)moduleName;
+(void)runRunLoopThread;
+(void)setUseCustomJSCLibrary:(char)arg1 ;
+(char)useCustomJSCLibrary;
+(id)__rct_export__8850;
+(void)load;
-(void)executeBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(void)addSynchronousHookWithName:(id)arg1 usingBlock:(id)arg2 ;
-(void)_executeJSCall:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)loadRAMBundle:(id)arg1 error:(id*)arg2 ;
-(void)registerNativeRequire;
-(void)flushedQueue:(/*^block*/id)arg1 ;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)invokeCallbackID:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)injectJSONText:(id)arg1 asGlobalObjectNamed:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeAsyncBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(id)convertJSErrorToNSError:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(void)toggleProfilingFlag:(id)arg1 ;
-(void)setContextName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)isValid;
-(id)context;
-(void)setUp;
-(RCTBridge *)bridge;
@end

