/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:17 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface FBLikeButton : UIButton {

	UIImage* _iconImageNormal;
	UIImage* _iconImageSelected;
	UIImageView* _iconImageView;

}
-(void)_initializeContent;
-(void)_updateIconForState;
-(CGSize)_sizeWithTitleSize:(CGSize)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForHeight:(float)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForContentHeight:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end

