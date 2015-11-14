/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:55 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIImageView, UILabel;

@interface IGMediaActionView : UICollectionReusableView {

	float _animationProgress;
	UIImageView* _imageView;
	UILabel* _label;

}

@property (assign,nonatomic) float animationProgress;              //@synthesize animationProgress=_animationProgress - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
+(float)width;
-(void)setAnimationProgress:(float)arg1 ;
-(float)animationProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end

