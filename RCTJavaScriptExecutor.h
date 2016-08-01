

@protocol RCTJavaScriptExecutor <RCTInvalidating,RCTBridgeModule>
@property (getter=isValid,nonatomic,readonly) char valid; 
@required
-(void)executeBlockOnJavaScriptQueue:(/*^block*/id)arg1;
-(void)flushedQueue:(/*^block*/id)arg1;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 callback:(/*^block*/id)arg4;
-(void)invokeCallbackID:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3;
-(void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)injectJSONText:(id)arg1 asGlobalObjectNamed:(id)arg2 callback:(/*^block*/id)arg3;
-(void)executeAsyncBlockOnJavaScriptQueue:(/*^block*/id)arg1;
-(char)isValid;
-(void)setUp;

@end

