/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGArcLayer, UIColor;

@interface IGCircularProgressView : UIView {

	IGArcLayer* _progressLayer;
	float _progress;

}

@property (assign,nonatomic) float progress;                           //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) float trackThickness; 
@property (nonatomic,retain) UIColor * progressTintColor; 
@property (nonatomic,retain) UIColor * trackTintColor; 
-(void)setTrackThickness:(float)arg1 ;
-(float)trackThickness;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(UIColor *)trackTintColor;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(float)progress;
@end

