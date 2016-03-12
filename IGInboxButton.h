
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
-(void)setBubbleBackground:(UIView *)arg1 ;
-(UIView *)bubbleBackground;
-(void)setUnreadBubbleView:(IGUnreadBubbleView *)arg1 ;
-(IGUnreadBubbleView *)unreadBubbleView;
-(void)updateCountLabel:(id)arg1 ;
-(void)layoutCountLabel;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)unreadCount;
-(void)setUnreadCount:(int)arg1 ;
@end

