
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface RCTRedBox : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
-(void)showErrorMessage:(id)arg1 ;
-(void)showErrorMessage:(id)arg1 withDetails:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withRawStack:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withStack:(id)arg2 ;
-(void)updateErrorMessage:(id)arg1 withStack:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 withStack:(id)arg2 showIfHidden:(char)arg3 ;
-(void)dismiss;
-(void)showError:(id)arg1 ;
@end

