/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGPlainTableViewCell.h>

@class UILabel;

@interface IGUserListViewCountCell : IGPlainTableViewCell {

	UILabel* _viewCountLabel;

}

@property (nonatomic,readonly) UILabel * viewCountLabel;              //@synthesize viewCountLabel=_viewCountLabel - In the implementation block
+(float)cellHeight;
-(UILabel *)viewCountLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
@end
