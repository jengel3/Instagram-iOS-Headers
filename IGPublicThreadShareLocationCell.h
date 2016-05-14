/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGPublicThreadGenericShareContentCell.h>

@class UIImageView;

@interface IGPublicThreadShareLocationCell : IGPublicThreadGenericShareContentCell {

	UIImageView* _locationImageView;

}

@property (nonatomic,retain) UIImageView * locationImageView;              //@synthesize locationImageView=_locationImageView - In the implementation block
+(float)sideImageWidth;
+(float)sideImageHeight;
+(float)sideImageVerticalPadding;
+(float)sideImageHorizontalPadding;
+(float)heightForLocationShare:(id)arg1 withWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(UIImageView *)locationImageView;
-(void)setLocationImageView:(UIImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end
