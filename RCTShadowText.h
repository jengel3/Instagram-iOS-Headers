
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTShadowView.h>

@class NSTextStorage, NSAttributedString, UIColor, NSString;

@interface RCTShadowText : RCTShadowView {

	NSTextStorage* _cachedTextStorage;
	float _cachedTextStorageWidth;
	float _cachedTextStorageWidthMode;
	NSAttributedString* _cachedAttributedString;
	float _effectiveLetterSpacing;
	char _isHighlighted;
	char _allowFontScaling;
	UIColor* _color;
	NSString* _fontFamily;
	float _fontSize;
	NSString* _fontWeight;
	NSString* _fontStyle;
	float _letterSpacing;
	float _lineHeight;
	unsigned _numberOfLines;
	int _lineBreakMode;
	int _textAlign;
	int _writingDirection;
	UIColor* _textDecorationColor;
	int _textDecorationStyle;
	int _textDecorationLine;
	float _fontSizeMultiplier;
	float _opacity;
	float _textShadowRadius;
	UIColor* _textShadowColor;
	CGSize _shadowOffset;
	CGSize _textShadowOffset;

}

@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * fontFamily;                        //@synthesize fontFamily=_fontFamily - In the implementation block
@property (assign,nonatomic) float fontSize;                             //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy) NSString * fontWeight;                        //@synthesize fontWeight=_fontWeight - In the implementation block
@property (nonatomic,copy) NSString * fontStyle;                         //@synthesize fontStyle=_fontStyle - In the implementation block
@property (assign,nonatomic) char isHighlighted;                         //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (assign,nonatomic) float letterSpacing;                        //@synthesize letterSpacing=_letterSpacing - In the implementation block
@property (assign,nonatomic) float lineHeight;                           //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) unsigned numberOfLines;                     //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) int lineBreakMode;                          //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                        //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) int textAlign;                              //@synthesize textAlign=_textAlign - In the implementation block
@property (assign,nonatomic) int writingDirection;                       //@synthesize writingDirection=_writingDirection - In the implementation block
@property (nonatomic,retain) UIColor * textDecorationColor;              //@synthesize textDecorationColor=_textDecorationColor - In the implementation block
@property (assign,nonatomic) int textDecorationStyle;                    //@synthesize textDecorationStyle=_textDecorationStyle - In the implementation block
@property (assign,nonatomic) int textDecorationLine;                     //@synthesize textDecorationLine=_textDecorationLine - In the implementation block
@property (assign,nonatomic) float fontSizeMultiplier;                   //@synthesize fontSizeMultiplier=_fontSizeMultiplier - In the implementation block
@property (assign,nonatomic) char allowFontScaling;                      //@synthesize allowFontScaling=_allowFontScaling - In the implementation block
@property (assign,nonatomic) float opacity;                              //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) CGSize textShadowOffset;                    //@synthesize textShadowOffset=_textShadowOffset - In the implementation block
@property (assign,nonatomic) float textShadowRadius;                     //@synthesize textShadowRadius=_textShadowRadius - In the implementation block
@property (nonatomic,retain) UIColor * textShadowColor;                  //@synthesize textShadowColor=_textShadowColor - In the implementation block
-(void)contentSizeMultiplierDidChange:(id)arg1 ;
-(void)dirtyText;
-(id)processUpdatedProperties:(id)arg1 parentProperties:(id)arg2 ;
-(id)buildTextStorageForWidth:(float)arg1 widthMode:(int)arg2 ;
-(void)applyLayoutNode:(CSSNodeRef)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(CGPoint)arg3 ;
-(id)_attributedStringWithFontFamily:(id)arg1 fontSize:(id)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 letterSpacing:(id)arg5 useBackgroundColor:(char)arg6 foregroundColor:(id)arg7 backgroundColor:(id)arg8 opacity:(float)arg9 ;
-(void)_addAttribute:(id)arg1 withValue:(id)arg2 toAttributedString:(id)arg3 ;
-(void)_setParagraphStyleOnAttributedString:(id)arg1 heightOfTallestSubview:(float)arg2 ;
-(void)setAllowFontScaling:(char)arg1 ;
-(char)isCSSLeafNode;
-(void)applyLayoutToChildren:(CSSNodeRef)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(CGPoint)arg3 ;
-(void)setIsHighlighted:(char)arg1 ;
-(void)setTextDecorationColor:(UIColor *)arg1 ;
-(void)setTextDecorationLine:(int)arg1 ;
-(void)setTextDecorationStyle:(int)arg1 ;
-(void)setTextShadowOffset:(CGSize)arg1 ;
-(void)setTextShadowRadius:(float)arg1 ;
-(UIColor *)textDecorationColor;
-(int)textDecorationStyle;
-(int)textDecorationLine;
-(char)allowFontScaling;
-(CGSize)textShadowOffset;
-(float)textShadowRadius;
-(void)recomputeText;
-(void)setTextAlign:(int)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setNumberOfLines:(unsigned)arg1 ;
-(void)setLineBreakMode:(int)arg1 ;
-(float)lineHeight;
-(void)setShadowOffset:(CGSize)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(CGSize)shadowOffset;
-(char)isHighlighted;
-(void)setLineHeight:(float)arg1 ;
-(id)attributedString;
-(UIColor *)color;
-(int)lineBreakMode;
-(unsigned)numberOfLines;
-(void)setColor:(UIColor *)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(int)writingDirection;
-(void)setFontWeight:(NSString *)arg1 ;
-(float)fontSize;
-(NSString *)fontWeight;
-(float)fontSizeMultiplier;
-(void)setFontSizeMultiplier:(float)arg1 ;
-(void)setWritingDirection:(int)arg1 ;
-(void)setFontFamily:(NSString *)arg1 ;
-(NSString *)fontFamily;
-(NSString *)fontStyle;
-(void)setFontStyle:(NSString *)arg1 ;
-(float)letterSpacing;
-(void)setLetterSpacing:(float)arg1 ;
-(int)textAlign;
-(UIColor *)textShadowColor;
-(void)setTextShadowColor:(UIColor *)arg1 ;
@end

