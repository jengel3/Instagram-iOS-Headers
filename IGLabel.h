/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:15 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UILabel.h>

@class IGStringStyle;

@interface IGLabel : UILabel {

	id _target;
	SEL _action;
	char _canBeLink;
	IGStringStyle* _style;

}

@property (nonatomic,retain) IGStringStyle * style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char canBeLink;                     //@synthesize canBeLink=_canBeLink - In the implementation block
-(void)highlight:(char)arg1 ;
-(void)setCanBeLink:(char)arg1 ;
-(char)ig_enabled;
-(char)isInside:(CGPoint)arg1 ;
-(char)canBeLink;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(IGStringStyle *)style;
-(void)setStyle:(IGStringStyle *)arg1 ;
-(id)initWithStyle:(id)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)defaultColor;
@end

