/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:48 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
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

