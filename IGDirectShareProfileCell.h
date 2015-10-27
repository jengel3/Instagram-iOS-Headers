/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
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

