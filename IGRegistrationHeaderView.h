/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:12 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGRegistrationHeaderView : UIView {

	UIImageView* _backgroundImageView;
	UILabel* _instructionLabel;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                     //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(UILabel *)instructionLabel;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(id)initWithBackgroundImage:(id)arg1 instructionalText:(id)arg2 height:(float)arg3 ;
-(id)init;
-(void)layoutSubviews;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

