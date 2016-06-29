
#import <Instagram/RCTBridgeModule.h>

@class NSString, RCTBridge;

@interface IGReactNavigator : NSObject <RCTBridgeModule>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__331;
+(id)__rct_export__220;
+(id)__rct_export__392;
+(id)__rct_export__493;
+(id)__rct_export__564;
+(id)__rct_export__625;
+(id)__rct_export__686;
+(id)__rct_export__747;
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

