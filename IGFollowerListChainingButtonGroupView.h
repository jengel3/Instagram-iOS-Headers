/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, IGButton;

@interface IGFollowerListChainingButtonGroupView : UIView {

	char _usingRequestButton;
	char _followingVisible;
	UIButton* _followButton;
	UIButton* _followingButton;
	UIButton* _requestedButton;
	UIButton* _loadingButton;
	IGButton* _chainingButton;

}

@property (nonatomic,retain) UIButton * followButton;                                          //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UIButton * followingButton;                                       //@synthesize followingButton=_followingButton - In the implementation block
@property (nonatomic,retain) UIButton * requestedButton;                                       //@synthesize requestedButton=_requestedButton - In the implementation block
@property (nonatomic,retain) UIButton * loadingButton;                                         //@synthesize loadingButton=_loadingButton - In the implementation block
@property (nonatomic,retain) IGButton * chainingButton;                                        //@synthesize chainingButton=_chainingButton - In the implementation block
@property (assign,getter=isUsingRequestButton,nonatomic) char usingRequestButton;              //@synthesize usingRequestButton=_usingRequestButton - In the implementation block
@property (assign,getter=isFollowingVisible,nonatomic) char followingVisible;                  //@synthesize followingVisible=_followingVisible - In the implementation block
-(UIButton *)followButton;
-(IGButton *)chainingButton;
-(UIButton *)followingButton;
-(UIButton *)loadingButton;
-(UIButton *)requestedButton;
-(char)isUsingRequestButton;
-(void)updateChainingButton:(char)arg1 ;
-(id)initWithShowingChainingButton:(char)arg1 ;
-(void)setFollowingVisible:(char)arg1 animated:(char)arg2 ;
-(void)setFollowButton:(UIButton *)arg1 ;
-(void)setFollowingButton:(UIButton *)arg1 ;
-(void)setRequestedButton:(UIButton *)arg1 ;
-(void)setLoadingButton:(UIButton *)arg1 ;
-(void)setChainingButton:(IGButton *)arg1 ;
-(void)setUsingRequestButton:(char)arg1 ;
-(char)isFollowingVisible;
-(void)setFollowingVisible:(char)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

