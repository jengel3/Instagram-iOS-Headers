
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class UIFont, UIColor;

@interface IGStringStyle : NSObject <NSCopying, NSMutableCopying> {

	int _textAlignment;
	float _paragraphSpacing;
	float _minLineHeight;
	float _maxLineHeight;
	float _firstLineHeadIndent;
	UIFont* _defaultFont;
	UIFont* _defaultBoldFont;
	UIColor* _defaultColor;
	UIColor* _linkColor;
	UIColor* _linkHighlightedColor;
	UIColor* _shadowColor;
	float _shadowOffset;
	char _shouldBoldLink;

}

@property (nonatomic,readonly) int textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) float paragraphSpacing;                      //@synthesize paragraphSpacing=_paragraphSpacing - In the implementation block
@property (nonatomic,readonly) float minLineHeight;                         //@synthesize minLineHeight=_minLineHeight - In the implementation block
@property (nonatomic,readonly) float maxLineHeight;                         //@synthesize maxLineHeight=_maxLineHeight - In the implementation block
@property (nonatomic,readonly) float firstLineHeadIndent;                   //@synthesize firstLineHeadIndent=_firstLineHeadIndent - In the implementation block
@property (nonatomic,readonly) UIFont * defaultFont;                        //@synthesize defaultFont=_defaultFont - In the implementation block
@property (nonatomic,readonly) UIFont * defaultBoldFont;                    //@synthesize defaultBoldFont=_defaultBoldFont - In the implementation block
@property (nonatomic,readonly) UIColor * defaultColor;                      //@synthesize defaultColor=_defaultColor - In the implementation block
@property (nonatomic,readonly) UIColor * linkColor; 
@property (nonatomic,readonly) UIColor * linkHighlightedColor; 
@property (nonatomic,readonly) UIColor * shadowColor;                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) float shadowOffset;                          //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,readonly) char shouldBoldLink;                         //@synthesize shouldBoldLink=_shouldBoldLink - In the implementation block
-(float)minLineHeight;
-(float)maxLineHeight;
-(UIFont *)defaultBoldFont;
-(UIColor *)linkHighlightedColor;
-(char)shouldBoldLink;
-(UIColor *)linkColor;
-(id)initWithFontSize:(int)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIFont *)defaultFont;
-(float)shadowOffset;
-(UIColor *)shadowColor;
-(int)textAlignment;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithFont:(id)arg1 ;
-(UIColor *)defaultColor;
-(float)firstLineHeadIndent;
-(float)paragraphSpacing;
@end

