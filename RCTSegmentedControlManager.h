
#import <Instagram/RCTViewManager.h>

@interface RCTSegmentedControlManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_onChange;
+(id)propConfig_tintColor;
+(id)propConfig_values;
+(id)propConfig_selectedIndex;
+(id)propConfig_momentary;
+(id)propConfig_enabled;
+(void)load;
-(id)view;
@end

