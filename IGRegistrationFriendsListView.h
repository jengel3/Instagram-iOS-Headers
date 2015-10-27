/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGRaindropAnalyticsDelegate;
@class UILabel, IGFollowAllButton, IGFindUsersView, UIActivityIndicatorView, UIView, NSString;

@interface IGRegistrationFriendsListView : UIView {

	UILabel* _titleLabel;
	IGFollowAllButton* _followAllButton;
	IGFindUsersView* _usersListView;
	UIActivityIndicatorView* _spinner;
	UILabel* _subtitleLabel;
	UIView* _separatorLine;
	NSString* _titleText;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGFollowAllButton * followAllButton;                                   //@synthesize followAllButton=_followAllButton - In the implementation block
@property (nonatomic,retain) IGFindUsersView * usersListView;                                       //@synthesize usersListView=_usersListView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                     //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                                //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                                  //@synthesize titleText=_titleText - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 analyticsDelegate:(id)arg2 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(IGFollowAllButton *)followAllButton;
-(void)setFollowAllButton:(IGFollowAllButton *)arg1 ;
-(IGFindUsersView *)usersListView;
-(void)setUsersListView:(IGFindUsersView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSString *)titleText;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
@end

