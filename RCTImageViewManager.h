
#import <Instagram/RCTViewManager.h>

@interface RCTImageViewManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_tintColor;
+(id)propConfig_source;
+(id)propConfig_blurRadius;
+(id)propConfig_capInsets;
+(id)propConfig_defaultSource;
+(id)propConfig_onLoadStart;
+(id)propConfig_onProgress;
+(id)propConfig_onError;
+(id)propConfig_onLoad;
+(id)propConfig_onLoadEnd;
+(id)propConfig_resizeMode;
+(id)__rct_export__490;
+(void)load;
-(void)set_tintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)getSize:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(id)view;
@end

