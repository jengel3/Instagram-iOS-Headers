/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:47 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITabBarDelegate.h>
#import <Instagram/IGFilterTintColorPickerDelegate.h>

@protocol IGFilterTintControlDelegate;
@class UITabBar, UITabBarItem, UIView, IGFilterTintColorPicker, IGSloppyTouchSlider, UILabel, NSString;

@interface IGFilterTintControl : UIControl <UITabBarDelegate, IGFilterTintColorPickerDelegate> {

	char _hasAdjustHintShown;
	id<IGFilterTintControlDelegate> _delegate;
	unsigned _currentState;
	UITabBar* _tintTypeTabBar;
	UITabBarItem* _shadowTab;
	UITabBarItem* _highlightTab;
	UIView* _lineSeparator;
	IGFilterTintColorPicker* _colorPicker;
	IGSloppyTouchSlider* _controlSlider;
	UILabel* _valueLabel;
	UILabel* _adjustHintLabel;
	unsigned _tintShadowsColorIndex;
	unsigned _tintHighlightsColorIndex;
	float _tintShadowsIntensity;
	float _tintHighlighsIntensity;

}

@property (assign,nonatomic,__weak) id<IGFilterTintControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned currentState;                                        //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) float value; 
@property (nonatomic,retain) UITabBar * tintTypeTabBar;                                    //@synthesize tintTypeTabBar=_tintTypeTabBar - In the implementation block
@property (nonatomic,retain) UITabBarItem * shadowTab;                                     //@synthesize shadowTab=_shadowTab - In the implementation block
@property (nonatomic,retain) UITabBarItem * highlightTab;                                  //@synthesize highlightTab=_highlightTab - In the implementation block
@property (nonatomic,retain) UIView * lineSeparator;                                       //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,retain) IGFilterTintColorPicker * colorPicker;                        //@synthesize colorPicker=_colorPicker - In the implementation block
@property (nonatomic,retain) IGSloppyTouchSlider * controlSlider;                          //@synthesize controlSlider=_controlSlider - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                                         //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UILabel * adjustHintLabel;                                    //@synthesize adjustHintLabel=_adjustHintLabel - In the implementation block
@property (assign,nonatomic) char hasAdjustHintShown;                                      //@synthesize hasAdjustHintShown=_hasAdjustHintShown - In the implementation block
@property (assign,nonatomic) char isTintTypeShadow; 
@property (assign,nonatomic) unsigned tintShadowsColorIndex;                               //@synthesize tintShadowsColorIndex=_tintShadowsColorIndex - In the implementation block
@property (assign,nonatomic) unsigned tintHighlightsColorIndex;                            //@synthesize tintHighlightsColorIndex=_tintHighlightsColorIndex - In the implementation block
@property (assign,nonatomic) float tintShadowsIntensity;                                   //@synthesize tintShadowsIntensity=_tintShadowsIntensity - In the implementation block
@property (assign,nonatomic) float tintHighlighsIntensity;                                 //@synthesize tintHighlighsIntensity=_tintHighlighsIntensity - In the implementation block
@property (assign,nonatomic) float priorValue; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)tintShadowsIntensity;
-(void)setPriorValue:(float)arg1 ;
-(unsigned)tintShadowsColorIndex;
-(unsigned)tintHighlightsColorIndex;
-(void)setValuesForTintShadowsColor:(unsigned)arg1 tintHighlightsColor:(unsigned)arg2 tintShadowsIntensity:(float)arg3 tintHighlightsIntensity:(float)arg4 ;
-(void)setTintShadowsIntensity:(float)arg1 ;
-(float)priorValue;
-(void)setTintShadowsColorIndex:(unsigned)arg1 ;
-(void)setTintHighlightsColorIndex:(unsigned)arg1 ;
-(void)cancelIntensityAdjust;
-(void)applyIntensityAdjust;
-(void)onSliderChange:(id)arg1 ;
-(CGRect)labelRect;
-(IGSloppyTouchSlider *)controlSlider;
-(void)setControlSlider:(IGSloppyTouchSlider *)arg1 ;
-(void)colorPicker:(id)arg1 didChangeColorFrom:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)colorPickerShouldPresentIntensitySlider:(id)arg1 ;
-(char)isAnyColorSelected;
-(UITabBar *)tintTypeTabBar;
-(UIView *)lineSeparator;
-(IGFilterTintColorPicker *)colorPicker;
-(UILabel *)adjustHintLabel;
-(char)hasAdjustHintShown;
-(void)setHasAdjustHintShown:(char)arg1 ;
-(void)hideSliderShowPicker;
-(UITabBarItem *)shadowTab;
-(char)isTintTypeShadow;
-(UITabBarItem *)highlightTab;
-(void)setTintHighlighsIntensity:(float)arg1 ;
-(void)setIsTintTypeShadow:(char)arg1 ;
-(void)showAdjustHintLabel;
-(void)hidePickerShowSlider;
-(float)tintHighlighsIntensity;
-(void)setTintTypeTabBar:(UITabBar *)arg1 ;
-(void)setShadowTab:(UITabBarItem *)arg1 ;
-(void)setHighlightTab:(UITabBarItem *)arg1 ;
-(void)setLineSeparator:(UIView *)arg1 ;
-(void)setColorPicker:(IGFilterTintColorPicker *)arg1 ;
-(void)setAdjustHintLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFilterTintControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFilterTintControlDelegate>)delegate;
-(unsigned)currentState;
-(float)value;
-(void)setValue:(float)arg1 ;
-(void)tabBar:(id)arg1 didSelectItem:(id)arg2 ;
-(void)setValue:(float)arg1 animated:(char)arg2 ;
-(void)setCurrentState:(unsigned)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)updateValueLabel;
-(UILabel *)valueLabel;
@end

