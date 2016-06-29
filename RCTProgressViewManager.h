
#import <Instagram/RCTViewManager.h>

@interface RCTProgressViewManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_progressViewStyle;
+(id)propConfig_progress;
+(id)propConfig_progressTintColor;
+(id)propConfig_trackTintColor;
+(id)propConfig_progressImage;
+(id)propConfig_trackImage;
+(void)load;
-(id)view;
@end

