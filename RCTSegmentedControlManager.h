
#import <Instagram/RCTViewManager.h>

@interface RCTSegmentedControlManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_values;
+(id)propConfig_selectedIndex;
+(id)propConfig_tintColor;
+(id)propConfig_momentary;
+(id)propConfig_enabled;
+(id)propConfig_onChange;
+(void)load;
-(id)view;
@end

