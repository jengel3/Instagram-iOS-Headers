/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGTableViewCell.h>

@class IGFacebookPageInfo, IGImageView;

@interface IGBusinessConversionPageCell : IGTableViewCell {

	IGFacebookPageInfo* _pageInfo;
	IGImageView* _profilePicture;

}

@property (nonatomic,retain) IGImageView * profilePicture;               //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
-(IGImageView *)profilePicture;
-(void)setProfilePicture:(IGImageView *)arg1 ;
-(IGFacebookPageInfo *)pageInfo;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end
