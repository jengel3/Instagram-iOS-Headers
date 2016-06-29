
#import <UIKit/UIAlertViewDelegate.h>
#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTInvalidating.h>

@class NSMutableArray, NSString, RCTBridge;

@interface RCTAlertManager : NSObject <UIAlertViewDelegate, RCTBridgeModule, RCTInvalidating> {

	NSMutableArray* _alerts;
	NSMutableArray* _alertControllers;
	NSMutableArray* _alertCallbacks;
	NSMutableArray* _alertButtonKeys;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__720;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)alertWithArgs:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end

