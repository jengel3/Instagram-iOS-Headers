
#import <Instagram/RCTViewManager.h>

@interface RCTSwitchManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_tintColor;
+(id)propConfig_onChange;
+(id)propConfig_onTintColor;
+(id)propConfig_thumbTintColor;
+(id)propConfig_value;
+(id)propConfig_disabled;
+(void)load;
-(void)onChange:(id)arg1 ;
-(void)set_disabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
@end

