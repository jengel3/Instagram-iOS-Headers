
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface IGReactAlertBar : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__150;
+(id)__rct_export__221;
+(void)load;
-(id)constantsToExport;
-(void)showMessage:(id)arg1 style:(int*)arg2 ;
-(void)showErrors:(id)arg1 ;
@end

