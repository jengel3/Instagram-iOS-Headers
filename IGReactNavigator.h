
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface IGReactNavigator : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)__rct_export__240;
+(id)__rct_export__351;
+(id)__rct_export__412;
+(id)__rct_export__513;
+(id)__rct_export__584;
+(id)__rct_export__645;
+(id)__rct_export__706;
+(id)__rct_export__767;
+(id)moduleName;
+(void)load;
-(void)pushView:(id)arg1 withTitle:(id)arg2 withInitialProperties:(id)arg3 withReactTag:(id)arg4 ;
-(void)popViewWithReactTag:(id)arg1 ;
-(void)popToViewWithReactTag:(id)arg1 fromViewWithReactTag:(id)arg2 ;
-(void)dismissViewWithReactTag:(id)arg1 ;
-(void)setRightAction:(id)arg1 enabled:(char)arg2 withReactTag:(id)arg3 ;
-(void)setLeftAction:(id)arg1 enabled:(char)arg2 withReactTag:(id)arg3 ;
-(void)setLeftActionEnabled:(char)arg1 withReactTag:(id)arg2 ;
-(void)setRightActionEnabled:(char)arg1 withReactTag:(id)arg2 ;
@end

