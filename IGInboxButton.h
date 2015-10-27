/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class IGUnreadBubbleView, UIView;

@interface IGInboxButton : UIButton {

	int _unreadCount;
	IGUnreadBubbleView* _unreadBubbleView;
	UIView* _bubbleBackground;

}

@property (assign,nonatomic) int unreadCount;                                    //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) IGUnreadBubbleView * unreadBubbleView;              //@synthesize unreadBubbleView=_unreadBubbleView - In the implementation block
@property (nonatomic,retain) UIView * bubbleBackground;                          //@synthesize bubbleBackground=_bubbleBackground - In the implementation block
+(id)button;
-(UIView *)bubbleBackground;
-(IGUnreadBubbleView *)unreadBubbleView;
-(void)updateCountLabel:(id)arg1 ;
-(void)layoutCountLabel;
-(void)setUnreadBubbleView:(IGUnreadBubbleView *)arg1 ;
-(void)setBubbleBackground:(UIView *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)unreadCount;
-(void)setUnreadCount:(int)arg1 ;
@end

