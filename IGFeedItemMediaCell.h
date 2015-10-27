/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class IGPost, UINavigationController;

@interface IGFeedItemMediaCell : UICollectionViewCell {

	IGPost* _post;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) IGPost * post;                                              //@synthesize post=_post - In the implementation block
@property (assign,nonatomic) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
+(id)cellIdentifier;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(id)accessibilityIdentifier;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

