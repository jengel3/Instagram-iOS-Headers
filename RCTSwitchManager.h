
#import <Instagram/RCTViewManager.h>

@interface RCTSwitchManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_onChange;
+(id)propConfig_tintColor;
+(id)propConfig_value;
+(id)propConfig_disabled;
+(id)propConfig_onTintColor;
+(id)propConfig_thumbTintColor;
+(void)load;
-(void)set_disabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)onChange:(id)arg1 ;
-(id)view;
@end

