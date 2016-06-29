
#import <Instagram/RCTViewManager.h>

@interface RCTNavigatorManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_requestedTopOfStack;
+(id)propConfig_onNavigationProgress;
+(id)propConfig_onNavigationComplete;
+(id)propConfig_interactivePopGestureEnabled;
+(id)__rct_export__350;
+(void)load;
-(void)requestSchedulingJavaScriptNavigation:(id)arg1 errorCallback:(/*^block*/id)arg2 callback:(/*^block*/id)arg3 ;
-(id)view;
@end

