
#import <Instagram/RCTViewManager.h>

@interface RCTVirtualImageManager : RCTViewManager
+(id)moduleName;
+(id)propConfigShadow_source;
+(id)propConfigShadow_resizeMode;
+(void)load;
-(id)shadowView;
@end

