
#import <Instagram/RCTViewManager.h>

@interface RCTTabBarManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_barTintColor;
+(id)propConfig_translucent;
+(id)propConfig_tintColor;
+(void)load;
-(id)view;
@end

