
#import <Instagram/RCTBridgeModule.h>

@protocol RCTExceptionsManagerDelegate;
@class RCTBridge, NSString;

@interface RCTExceptionsManager : NSObject <RCTBridgeModule> {

	id<RCTExceptionsManagerDelegate> _delegate;
	unsigned _reloadRetries;
	RCTBridge* _bridge;
	unsigned _maxReloadAttempts;

}

@property (assign,nonatomic) unsigned maxReloadAttempts;                              //@synthesize maxReloadAttempts=_maxReloadAttempts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__380;
+(id)__rct_export__491;
+(id)__rct_export__702;
+(id)__rct_export__813;
+(void)load;
-(void)reportFatalException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)reportSoftException:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)updateExceptionMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 ;
-(void)reportUnhandledException:(id)arg1 stack:(id)arg2 ;
-(unsigned)maxReloadAttempts;
-(void)setMaxReloadAttempts:(unsigned)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(RCTBridge *)bridge;
@end

