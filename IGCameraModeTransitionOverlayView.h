/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface IGCameraModeTransitionOverlayView : UIView {

	UIView* _blackOverlay;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIView * blackOverlay;                //@synthesize blackOverlay=_blackOverlay - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)setBlackOverlay:(UIView *)arg1 ;
-(UIView *)blackOverlay;
-(void)setImage:(id)arg1 mode:(int)arg2 imageMode:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

