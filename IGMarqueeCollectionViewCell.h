/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGImageView;

@interface IGMarqueeCollectionViewCell : UICollectionViewCell {

	IGImageView* _imageView;

}

@property (nonatomic,__weak,readonly) IGImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(id)cellIdentifier;
-(void)configureWithMarqueeItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGImageView *)imageView;
@end

