/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:05 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class IGProfilePictureImageView, UILabel, IGImageView;

@interface IGExplorePeopleYouFollowView : UIControl {

	IGProfilePictureImageView* _profileImageView;
	UILabel* _usernameLabel;
	UILabel* _timestampLabel;
	IGImageView* _postImageView;

}

@property (assign,nonatomic,__weak) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * usernameLabel;                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * timestampLabel;                                  //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (assign,nonatomic,__weak) IGImageView * postImageView;                               //@synthesize postImageView=_postImageView - In the implementation block
-(UILabel *)timestampLabel;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(IGImageView *)postImageView;
-(UILabel *)usernameLabel;
-(void)setPostImageView:(IGImageView *)arg1 ;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)configureSubviewsLayout;
-(void)addAllSubviews;
-(IGProfilePictureImageView *)profileImageView;
-(void)setProfileImageView:(IGProfilePictureImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
@end

