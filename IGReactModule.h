
#import <Instagram/RCTBridgeDelegate.h>
#import <Instagram/IGUserSessionObject.h>

@class RCTBridge, NSString;

@interface IGReactModule : NSObject <RCTBridgeDelegate, IGUserSessionObject> {

	RCTBridge* _bridge;

}

@property (nonatomic,retain) RCTBridge * bridge;                    //@synthesize bridge=_bridge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)sourceURLForBridge:(id)arg1 ;
-(id)createBridgeIfNecessaryWithPerfLoggerSession:(id)arg1 ;
-(id)viewControllerForModuleName:(id)arg1 initialProperties:(id)arg2 perfLoggerSession:(id)arg3 title:(id)arg4 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

