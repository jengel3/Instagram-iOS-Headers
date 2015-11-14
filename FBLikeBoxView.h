/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class FBLikeBoxBorderView, UILabel;

@interface FBLikeBoxView : UIView {

	FBLikeBoxBorderView* _borderView;
	UILabel* _likeCountLabel;
	unsigned _caretPosition;
	unsigned _likeCount;

}

@property (assign,nonatomic) unsigned caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (assign,nonatomic) unsigned likeCount;                  //@synthesize likeCount=_likeCount - In the implementation block
-(void)_initializeContent;
-(void)setLikeCount:(unsigned)arg1 animated:(char)arg2 ;
-(void)setCaretPosition:(unsigned)arg1 ;
-(unsigned)caretPosition;
-(unsigned)likeCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setLikeCount:(unsigned)arg1 ;
@end

