/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:05 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class IGFollowAllButton, UILabel;

@interface IGFollowAllUsersView : UIView {

	IGFollowAllButton* _followAllButton;
	unsigned _userCount;
	UILabel* _countLabel;

}

@property (nonatomic,retain) IGFollowAllButton * followAllButton;              //@synthesize followAllButton=_followAllButton - In the implementation block
@property (assign,nonatomic) unsigned userCount;                               //@synthesize userCount=_userCount - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
-(void)setUserCount:(unsigned)arg1 ;
-(IGFollowAllButton *)followAllButton;
-(UILabel *)countLabel;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)setFollowAllButton:(IGFollowAllButton *)arg1 ;
-(unsigned)userCount;
@end

