
#import <Instagram/RCTViewManager.h>

@interface RCTSliderManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_trackImage;
+(id)propConfig_step;
+(id)propConfig_minimumTrackImage;
+(id)propConfig_maximumTrackImage;
+(id)propConfig_minimumValue;
+(id)propConfig_maximumValue;
+(id)propConfig_minimumTrackTintColor;
+(id)propConfig_maximumTrackTintColor;
+(id)propConfig_onValueChange;
+(id)propConfig_onSlidingComplete;
+(id)propConfig_thumbImage;
+(id)propConfig_value;
+(id)propConfig_disabled;
+(void)load;
-(void)sliderTouchEnd:(id)arg1 ;
-(void)set_disabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
-(void)sliderValueChanged:(id)arg1 ;
@end

