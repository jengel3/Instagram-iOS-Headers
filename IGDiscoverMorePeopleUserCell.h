/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGUserCell.h>

@class UIImageView, UILabel;

@interface IGDiscoverMorePeopleUserCell : IGUserCell {

	int _sourceType;
	UIImageView* _sourceTypeImageView;
	UILabel* _userDefailtInfoLabel;

}

@property (assign,nonatomic) int sourceType;                                 //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) UIImageView * sourceTypeImageView;              //@synthesize sourceTypeImageView=_sourceTypeImageView - In the implementation block
@property (nonatomic,retain) UILabel * userDefailtInfoLabel;                 //@synthesize userDefailtInfoLabel=_userDefailtInfoLabel - In the implementation block
+(float)defaultCellHeight;
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)setSourceTypeImageView:(UIImageView *)arg1 ;
-(UIImageView *)sourceTypeImageView;
-(void)configureCellWithUserInfo:(id)arg1 ;
-(UILabel *)userDefailtInfoLabel;
-(void)setUserDefailtInfoLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
@end

