
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@interface FBSDKButton : UIButton {

	char _skipIntrinsicContentSizing;
	char _isExplicitlyDisabled;

}
-(void)configureButton;
-(void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8 ;
-(void)checkImplicitlyDisabled;
-(void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 ;
-(void)logTapEventWithEventName:(id)arg1 parameters:(id)arg2 ;
-(char)isImplicitlyDisabled;
-(CGSize)sizeThatFits:(CGSize)arg1 title:(id)arg2 ;
-(float)_heightForContentRect:(CGRect)arg1 ;
-(float)_marginForHeight:(float)arg1 ;
-(float)_paddingForHeight:(float)arg1 ;
-(id)defaultIcon;
-(void)_configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8 ;
-(float)_heightForFont:(id)arg1 ;
-(float)_textPaddingCorrectionForHeight:(float)arg1 ;
-(id)_backgroundImageWithColor:(id)arg1 cornerRadius:(float)arg2 scale:(float)arg3 ;
-(float)_fontSizeForHeight:(float)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)awakeFromNib;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(id)defaultHighlightedColor;
-(id)defaultSelectedColor;
-(id)defaultDisabledColor;
-(id)defaultBackgroundColor;
@end

