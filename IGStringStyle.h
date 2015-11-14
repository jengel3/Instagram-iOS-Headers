/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:09 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFont, UIColor;

@interface IGStringStyle : NSObject {

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

}

@property (assign,nonatomic) int textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) float paragraphSpacing;                      //@synthesize paragraphSpacing=_paragraphSpacing - In the implementation block
@property (assign,nonatomic) float minLineHeight;                         //@synthesize minLineHeight=_minLineHeight - In the implementation block
@property (assign,nonatomic) float maxLineHeight;                         //@synthesize maxLineHeight=_maxLineHeight - In the implementation block
@property (assign,nonatomic) float firstLineHeadIndent;                   //@synthesize firstLineHeadIndent=_firstLineHeadIndent - In the implementation block
@property (nonatomic,retain) UIFont * defaultFont;                        //@synthesize defaultFont=_defaultFont - In the implementation block
@property (nonatomic,retain) UIFont * defaultBoldFont;                    //@synthesize defaultBoldFont=_defaultBoldFont - In the implementation block
@property (nonatomic,retain) UIColor * defaultColor;                      //@synthesize defaultColor=_defaultColor - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;                         //@synthesize linkColor=_linkColor - In the implementation block
@property (nonatomic,retain) UIColor * linkHighlightedColor;              //@synthesize linkHighlightedColor=_linkHighlightedColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) float shadowOffset;                          //@synthesize shadowOffset=_shadowOffset - In the implementation block
-(UIFont *)defaultBoldFont;
-(void)setMaxLineHeight:(float)arg1 ;
-(void)setDefaultBoldFont:(UIFont *)arg1 ;
-(void)setLinkHighlightedColor:(UIColor *)arg1 ;
-(void)setMinLineHeight:(float)arg1 ;
-(UIColor *)linkHighlightedColor;
-(float)minLineHeight;
-(float)maxLineHeight;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(void)setParagraphSpacing:(float)arg1 ;
-(UIColor *)linkColor;
-(id)initWithFontSize:(int)arg1 ;
-(id)init;
-(void)setTextAlignment:(int)arg1 ;
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

