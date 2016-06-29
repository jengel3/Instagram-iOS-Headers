
#import <Instagram/RCTViewManager.h>

@interface RCTNavItemManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_navigationBarHidden;
+(id)propConfig_shadowHidden;
+(id)propConfig_barTintColor;
+(id)propConfig_translucent;
+(id)propConfig_title;
+(id)propConfig_titleTextColor;
+(id)propConfig_backButtonIcon;
+(id)propConfig_backButtonTitle;
+(id)propConfig_leftButtonTitle;
+(id)propConfig_leftButtonIcon;
+(id)propConfig_rightButtonIcon;
+(id)propConfig_rightButtonTitle;
+(id)propConfig_onLeftButtonPress;
+(id)propConfig_onRightButtonPress;
+(id)propConfig_tintColor;
+(void)load;
-(id)view;
@end

