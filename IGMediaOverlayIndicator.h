/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, UIImageView, NSString;

@interface IGMediaOverlayIndicator : UIView {

	UIView* _iconView;
	float _maxWidth;
	UILabel* _label;
	UIImageView* _backgroundImage;

}

@property (nonatomic,retain) UIView * iconView;                          //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) float maxWidth;                             //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) UILabel * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
-(void)showIndicatorWithString:(id)arg1 iconName:(id)arg2 willContract:(char)arg3 ;
-(void)showIndicatorWithIcon:(id)arg1 ;
-(void)shrinkToIconWithDuration:(float)arg1 delay:(float)arg2 ;
-(void)showTextLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)removeAllAnimations;
-(UIImageView *)backgroundImage;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setBackgroundImage:(UIImageView *)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(float)maxWidth;
-(void)setMaxWidth:(float)arg1 ;
@end

