
#import <Instagram/RCTViewManager.h>

@interface RCTTabBarManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_tintColor;
+(id)propConfig_barTintColor;
+(id)propConfig_translucent;
+(id)propConfig_unselectedTintColor;
+(id)propConfig_itemPositioning;
+(void)load;
-(id)view;
@end

