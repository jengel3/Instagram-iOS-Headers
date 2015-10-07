/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectGenericShareContentCell.h>

@class IGProfilePictureImageView;

@interface IGDirectShareProfileCell : IGDirectGenericShareContentCell {

	IGProfilePictureImageView* _sharedUserProfilePicture;

}

@property (nonatomic,retain) IGProfilePictureImageView * sharedUserProfilePicture;              //@synthesize sharedUserProfilePicture=_sharedUserProfilePicture - In the implementation block
+(float)sideImageWidth;
+(float)heightForProfile:(id)arg1 withWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(IGProfilePictureImageView *)sharedUserProfilePicture;
-(void)setSharedUserProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end

