
#import <Instagram/RCTBridgeModule.h>

@class RCTBridge, NSString;

@interface RCTLinkingManager : NSObject <RCTBridgeModule> {

	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__900;
+(id)__rct_export__981;
+(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
+(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
+(void)load;
-(id)constantsToExport;
-(void)handleOpenURLNotification:(id)arg1 ;
-(void)openURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)canOpenURL:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(void)dealloc;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end

