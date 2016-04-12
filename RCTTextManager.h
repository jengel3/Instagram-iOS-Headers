
#import <Instagram/RCTViewManager.h>

@interface RCTTextManager : RCTViewManager
+(id)moduleName;
+(id)propConfigShadow_color;
+(id)propConfigShadow_fontFamily;
+(id)propConfigShadow_fontSize;
+(id)propConfigShadow_fontWeight;
+(id)propConfigShadow_fontStyle;
+(id)propConfigShadow_isHighlighted;
+(id)propConfigShadow_letterSpacing;
+(id)propConfigShadow_lineHeight;
+(id)propConfigShadow_numberOfLines;
+(id)propConfigShadow_textAlign;
+(id)propConfigShadow_textDecorationStyle;
+(id)propConfigShadow_textDecorationColor;
+(id)propConfigShadow_textDecorationLine;
+(id)propConfigShadow_writingDirection;
+(id)propConfigShadow_allowFontScaling;
+(id)propConfigShadow_opacity;
+(id)propConfigShadow_textShadowOffset;
+(id)propConfigShadow_textShadowRadius;
+(id)propConfigShadow_textShadowColor;
+(void)load;
-(/*^block*/id)uiBlockToAmendWithShadowView:(id)arg1 ;
-(/*^block*/id)uiBlockToAmendWithShadowViewRegistry:(id)arg1 ;
-(id)view;
-(id)shadowView;
@end

