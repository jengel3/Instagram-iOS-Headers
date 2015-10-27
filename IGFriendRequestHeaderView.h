/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IGFriendRequestHeaderViewDelegate;
@class IGUser, IGSimpleButton, UILabel;

@interface IGFriendRequestHeaderView : UIView {

	char _incomingRequestPending;
	IGUser* _user;
	id<IGFriendRequestHeaderViewDelegate> _delegate;
	IGSimpleButton* _approveButton;
	IGSimpleButton* _ignoreButton;
	UILabel* _followLabel;

}

@property (nonatomic,retain) IGUser * user;                                                      //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<IGFriendRequestHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSimpleButton * approveButton;                                     //@synthesize approveButton=_approveButton - In the implementation block
@property (nonatomic,retain) IGSimpleButton * ignoreButton;                                      //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UILabel * followLabel;                                              //@synthesize followLabel=_followLabel - In the implementation block
-(IGSimpleButton *)approveButton;
-(void)setApproveButton:(IGSimpleButton *)arg1 ;
-(UILabel *)followLabel;
-(void)onApproveButtonTapped:(id)arg1 ;
-(void)onIgnoreButtonTapped:(id)arg1 ;
-(void)updateFollowStatus:(id)arg1 ;
-(void)layOut;
-(void)setFollowLabel:(UILabel *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)hide;
-(void)show;
-(void)setDelegate:(id<IGFriendRequestHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGFriendRequestHeaderViewDelegate>)delegate;
-(void)setIgnoreButton:(IGSimpleButton *)arg1 ;
-(IGSimpleButton *)ignoreButton;
@end

