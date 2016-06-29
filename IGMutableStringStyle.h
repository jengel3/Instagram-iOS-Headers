
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStringStyle.h>

@class UIFont, UIColor;

@interface IGMutableStringStyle : IGStringStyle {

	char shouldBoldLink;
	int textAlignment;
	float paragraphSpacing;
	float minLineHeight;
	float maxLineHeight;
	float firstLineHeadIndent;
	UIFont* defaultFont;
	UIFont* defaultBoldFont;
	UIColor* defaultColor;
	UIColor* linkColor;
	UIColor* linkHighlightedColor;
	UIColor* shadowColor;
	float shadowOffset;

}

@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) float paragraphSpacing; 
@property (assign,nonatomic) float minLineHeight; 
@property (assign,nonatomic) float maxLineHeight; 
@property (assign,nonatomic) float firstLineHeadIndent; 
@property (nonatomic,retain) UIFont * defaultFont; 
@property (nonatomic,retain) UIFont * defaultBoldFont; 
@property (nonatomic,retain) UIColor * defaultColor; 
@property (nonatomic,retain) UIColor * linkColor; 
@property (nonatomic,retain) UIColor * linkHighlightedColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) float shadowOffset; 
@property (assign,nonatomic) char shouldBoldLink; 
-(float)minLineHeight;
-(float)maxLineHeight;
-(UIFont *)defaultBoldFont;
-(UIColor *)linkHighlightedColor;
-(char)shouldBoldLink;
-(void)setMinLineHeight:(float)arg1 ;
-(void)setMaxLineHeight:(float)arg1 ;
-(void)setDefaultBoldFont:(UIFont *)arg1 ;
-(void)setLinkHighlightedColor:(UIColor *)arg1 ;
-(void)setShouldBoldLink:(char)arg1 ;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(void)setParagraphSpacing:(float)arg1 ;
-(UIColor *)linkColor;
-(void)setTextAlignment:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(float)arg1 ;
-(UIFont *)defaultFont;
-(float)shadowOffset;
-(UIColor *)shadowColor;
-(int)textAlignment;
-(void)setDefaultFont:(UIFont *)arg1 ;
-(UIColor *)defaultColor;
-(float)firstLineHeadIndent;
-(void)setFirstLineHeadIndent:(float)arg1 ;
-(float)paragraphSpacing;
@end

