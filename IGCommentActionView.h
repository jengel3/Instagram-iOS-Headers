/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGCommentActionViewDelegate;
@class UIButton;

@interface IGCommentActionView : UIView {

	int _deleteButtonType;
	id<IGCommentActionViewDelegate> _delegate;
	UIButton* _replyButton;
	UIButton* _deleteButton;

}

@property (assign,nonatomic) int deleteButtonType;                                         //@synthesize deleteButtonType=_deleteButtonType - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float maxWidth; 
@property (nonatomic,retain) UIButton * replyButton;                                       //@synthesize replyButton=_replyButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                      //@synthesize deleteButton=_deleteButton - In the implementation block
-(UIButton *)replyButton;
-(void)replyButtonTapped:(id)arg1 ;
-(void)setDeleteButtonType:(int)arg1 ;
-(int)deleteButtonType;
-(void)setReplyButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCommentActionViewDelegate>)arg1 ;
-(id<IGCommentActionViewDelegate>)delegate;
-(float)maxWidth;
-(void)deleteButtonTapped:(id)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
@end

