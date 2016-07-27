
#import <Instagram/RCTBridgeDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class RCTBridge, NSLock, NSString;

@interface IGReactModule : NSObject <RCTBridgeDelegate, IGUserSessionClearableObject> {

	char _retainBridge;
	RCTBridge* _permanentBridge;
	/*^block*/id _cancelBridgePreloadBlock;
	RCTBridge* _bridge;
	NSLock* _bridgeLock;

}

@property (nonatomic,retain) RCTBridge * permanentBridge;              //@synthesize permanentBridge=_permanentBridge - In the implementation block
@property (nonatomic,copy) id cancelBridgePreloadBlock;                //@synthesize cancelBridgePreloadBlock=_cancelBridgePreloadBlock - In the implementation block
@property (assign,nonatomic,__weak) RCTBridge * bridge;                //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,retain) NSLock * bridgeLock;                      //@synthesize bridgeLock=_bridgeLock - In the implementation block
@property (assign,nonatomic) char retainBridge;                        //@synthesize retainBridge=_retainBridge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)viewControllerForModuleName:(id)arg1 initialProperties:(id)arg2 perfLoggerSession:(id)arg3 title:(id)arg4 analyticsModule:(id)arg5 ;
-(id)viewControllerForModuleName:(id)arg1 initialProperties:(id)arg2 perfLoggerSession:(id)arg3 title:(id)arg4 analyticsModule:(id)arg5 actionType:(id)arg6 showCancelButton:(char)arg7 ;
-(id)createBridgeIfNecessaryWithPerfLoggerSession:(id)arg1 ;
-(char)retainBridge;
-(id)sourceURLForBridge:(id)arg1 ;
-(RCTBridge *)permanentBridge;
-(void)setPermanentBridge:(RCTBridge *)arg1 ;
-(id)cancelBridgePreloadBlock;
-(void)setCancelBridgePreloadBlock:(id)arg1 ;
-(NSLock *)bridgeLock;
-(void)setBridgeLock:(NSLock *)arg1 ;
-(void)setRetainBridge:(char)arg1 ;
-(void)preloadBridgeAfterDelay:(double)arg1 ;
-(id)viewControllerForModuleName:(id)arg1 initialProperties:(id)arg2 perfLoggerSession:(id)arg3 title:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

