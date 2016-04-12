
#import <Instagram/RCTViewManager.h>

@interface RCTActivityIndicatorViewManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_color;
+(id)propConfig_hidesWhenStopped;
+(id)propConfig_size;
+(id)propConfig_animating;
+(void)load;
-(void)set_animating:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
@end

