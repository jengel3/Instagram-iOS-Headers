
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTBridge.h>
#import <Instagram/RCTInvalidating.h>

@protocol RCTJavaScriptExecutor;
@class NSMutableArray, NSMutableDictionary, NSArray, RCTDisplayLink, NSLock, RCTBridge, NSString;

@interface RCTBatchedBridge : RCTBridge <RCTInvalidating> {

	char _wasBatchActive;
	NSMutableArray* _pendingCalls;
	NSMutableDictionary* _moduleDataByName;
	NSArray* _moduleDataByID;
	NSArray* _moduleClassesByID;
	RCTDisplayLink* _displayLink;
	char _loading;
	char _valid;
	char _moduleSetupComplete;
	CFDictionaryRef _flowIDMap;
	NSLock* _flowIDMapLock;
	RCTBridge* _parentBridge;
	id<RCTJavaScriptExecutor> _javaScriptExecutor;
	long long _flowID;

}

@property (assign,nonatomic,__weak) RCTBridge * parentBridge;                                  //@synthesize parentBridge=_parentBridge - In the implementation block
@property (assign,nonatomic,__weak) id<RCTJavaScriptExecutor> javaScriptExecutor;              //@synthesize javaScriptExecutor=_javaScriptExecutor - In the implementation block
@property (assign,nonatomic) char moduleSetupComplete;                                         //@synthesize moduleSetupComplete=_moduleSetupComplete - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)batchDidComplete;
-(void)partialBatchDidFlush;
-(void)logMessage:(id)arg1 level:(id)arg2 ;
-(void)stopLoadingWithError:(id)arg1 ;
-(void)loadSource:(/*^block*/id)arg1 ;
-(void)initModulesWithDispatchGroup:(id)arg1 ;
-(void)setUpExecutor;
-(id)moduleConfig;
-(void)injectJSONConfiguration:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)executeSourceCode:(id)arg1 ;
-(void)_flushPendingCalls;
-(void)enqueueApplicationScript:(id)arg1 url:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)_actuallyInvokeAndProcessModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 ;
-(void)_actuallyInvokeCallback:(id)arg1 arguments:(id)arg2 ;
-(void)_processResponse:(id)arg1 error:(id)arg2 ;
-(void)handleBuffer:(id)arg1 ;
-(char)_handleRequestNumber:(unsigned)arg1 moduleID:(unsigned)arg2 methodID:(unsigned)arg3 params:(id)arg4 ;
-(void)startProfiling;
-(void)stopProfiling:(/*^block*/id)arg1 ;
-(RCTBridge *)parentBridge;
-(void)setParentBridge:(RCTBridge *)arg1 ;
-(id<RCTJavaScriptExecutor>)javaScriptExecutor;
-(void)setJavaScriptExecutor:(id<RCTJavaScriptExecutor>)arg1 ;
-(void)setModuleSetupComplete:(char)arg1 ;
-(id)initWithDelegate:(id)arg1 bundleURL:(id)arg2 moduleProvider:(/*^block*/id)arg3 launchOptions:(id)arg4 ;
-(void)bindKeys;
-(id)moduleForName:(id)arg1 ;
-(char)moduleIsInitialized:(Class)arg1 ;
-(id)initWithParentBridge:(id)arg1 ;
-(void)enqueueJSCall:(id)arg1 method:(id)arg2 args:(id)arg3 completion:(/*^block*/id)arg4 ;
-(Class)executorClass;
-(void)setExecutorClass:(Class)arg1 ;
-(long long)flowID;
-(void)setFlowID:(long long)arg1 ;
-(CFDictionaryRef)flowIDMap;
-(void)setFlowIDMap:(CFDictionaryRef)arg1 ;
-(id)flowIDMapLock;
-(void)setFlowIDMapLock:(id)arg1 ;
-(void)registerModuleForFrameUpdates:(id)arg1 withModuleData:(id)arg2 ;
-(void)dispatchBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(char)moduleSetupComplete;
-(void)enqueueCallback:(id)arg1 args:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 moduleProvider:(/*^block*/id)arg2 launchOptions:(id)arg3 ;
-(id)configForModuleName:(id)arg1 ;
-(void)handleBuffer:(id)arg1 batchEnded:(char)arg2 ;
-(void)_immediatelyCallTimer:(id)arg1 ;
-(id)moduleClasses;
-(id)moduleDataForName:(id)arg1 ;
-(char)isBatchActive;
-(void)reload;
-(id)delegate;
-(void)invalidate;
-(char)isValid;
-(id)bundleURL;
-(void)start;
-(char)isLoading;
-(void)setUp;
-(void)setBundleURL:(id)arg1 ;
@end

