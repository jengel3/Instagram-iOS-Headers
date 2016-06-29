
#import <Instagram/RCTViewManager.h>

@interface RCTPickerManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_color;
+(id)propConfig_items;
+(id)propConfig_textAlign;
+(id)propConfig_fontSize;
+(id)propConfig_fontWeight;
+(id)propConfig_fontStyle;
+(id)propConfig_fontFamily;
+(id)propConfig_selectedIndex;
+(id)propConfig_onChange;
+(void)load;
-(void)set_fontSize:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_fontWeight:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_fontStyle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_fontFamily:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
@end

