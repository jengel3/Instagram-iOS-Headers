
#import <Instagram/RCTViewManager.h>

@interface RCTRefreshControlManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_onRefresh;
+(id)propConfig_refreshing;
+(id)propConfig_tintColor;
+(id)propConfig_title;
+(void)load;
-(id)view;
@end

