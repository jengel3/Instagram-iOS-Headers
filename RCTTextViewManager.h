
#import <Instagram/RCTViewManager.h>

@interface RCTTextViewManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_autoCapitalize;
+(id)propConfig_autoCorrect;
+(id)propConfig_blurOnSubmit;
+(id)propConfig_clearTextOnFocus;
+(id)propConfig_color;
+(id)propConfig_textAlign;
+(id)propConfig_editable;
+(id)propConfig_enablesReturnKeyAutomatically;
+(id)propConfig_keyboardType;
+(id)propConfig_keyboardAppearance;
+(id)propConfig_maxLength;
+(id)propConfig_onChange;
+(id)propConfig_onContentSizeChange;
+(id)propConfig_onSelectionChange;
+(id)propConfig_onTextInput;
+(id)propConfig_placeholder;
+(id)propConfig_placeholderTextColor;
+(id)propConfig_returnKeyType;
+(id)propConfig_secureTextEntry;
+(id)propConfig_selectionColor;
+(id)propConfig_selectTextOnFocus;
+(id)propConfig_text;
+(id)propConfig_fontSize;
+(id)propConfig_fontWeight;
+(id)propConfig_fontStyle;
+(id)propConfig_fontFamily;
+(id)propConfig_mostRecentEventCount;
+(void)load;
-(/*^block*/id)uiBlockToAmendWithShadowView:(id)arg1 ;
-(void)set_fontSize:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_fontWeight:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_fontStyle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)set_fontFamily:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
@end

