
#import <UIKit/UIControl.h>

@class UILabel, UIImageView, UIColor, UIFont;

@interface IGFancyTextSegment : UIControl {

	char _showFallbackIcon;
	UILabel* _titleLabel;
	UIImageView* _fallbackIconView;
	UIColor* _activeColor;
	UIColor* _inactiveColor;
	UIColor* _activeFallbackIconColor;
	UIColor* _inactiveFallbackIconColor;
	UIFont* _font;

}

@property (assign,nonatomic) char showFallbackIcon;                            //@synthesize showFallbackIcon=_showFallbackIcon - In the implementation block
@property (nonatomic,readonly) UIImageView * fallbackIconView;                 //@synthesize fallbackIconView=_fallbackIconView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIColor * activeColor;                            //@synthesize activeColor=_activeColor - In the implementation block
@property (nonatomic,retain) UIColor * inactiveColor;                          //@synthesize inactiveColor=_inactiveColor - In the implementation block
@property (nonatomic,retain) UIColor * activeFallbackIconColor;                //@synthesize activeFallbackIconColor=_activeFallbackIconColor - In the implementation block
@property (nonatomic,retain) UIColor * inactiveFallbackIconColor;              //@synthesize inactiveFallbackIconColor=_inactiveFallbackIconColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                                    //@synthesize font=_font - In the implementation block
-(void)setActiveColor:(UIColor *)arg1 ;
-(void)setInactiveColor:(UIColor *)arg1 ;
-(void)setActiveFallbackIconColor:(UIColor *)arg1 ;
-(void)setInactiveFallbackIconColor:(UIColor *)arg1 ;
-(id)initWithTitle:(id)arg1 fallbackIcon:(id)arg2 ;
-(char)titleTooWideToFit;
-(void)setShowFallbackIcon:(char)arg1 ;
-(UIImageView *)fallbackIconView;
-(char)showFallbackIcon;
-(void)updateHighlightedColor;
-(UIColor *)activeColor;
-(UIColor *)activeFallbackIconColor;
-(UIColor *)inactiveColor;
-(UIColor *)inactiveFallbackIconColor;
-(void)layoutSubviews;
-(void)setFont:(UIFont *)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(UIFont *)font;
-(void)setSelected:(char)arg1 ;
@end

