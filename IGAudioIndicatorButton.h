/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, NSMutableArray;

@interface IGAudioIndicatorButton : UIButton {

	UIView* _indicatorBars;
	NSMutableArray* _bars;

}

@property (nonatomic,retain) UIView * indicatorBars;              //@synthesize indicatorBars=_indicatorBars - In the implementation block
@property (nonatomic,retain) NSMutableArray * bars;               //@synthesize bars=_bars - In the implementation block
+(void)showAudioIndicator:(id)arg1 soundOn:(char)arg2 ;
-(void)animateSoundOn;
-(void)animateSoundOff;
-(void)startAnimationForSoundOn:(char)arg1 ;
-(UIView *)indicatorBars;
-(void)setIndicatorBars:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stopAnimation;
-(NSMutableArray *)bars;
-(void)setBars:(NSMutableArray *)arg1 ;
@end

