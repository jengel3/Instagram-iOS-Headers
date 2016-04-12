
#import <UIKit/UIButton.h>

@class IGUnreadBubbleView, UIView;

@interface IGJewelButton : UIButton {

	int _jewelCount;
	IGUnreadBubbleView* _unreadBubbleView;
	UIView* _bubbleBackground;

}

@property (assign,nonatomic) int jewelCount;                                     //@synthesize jewelCount=_jewelCount - In the implementation block
@property (nonatomic,retain) IGUnreadBubbleView * unreadBubbleView;              //@synthesize unreadBubbleView=_unreadBubbleView - In the implementation block
@property (nonatomic,retain) UIView * bubbleBackground;                          //@synthesize bubbleBackground=_bubbleBackground - In the implementation block
-(void)styleWithImage:(id)arg1 initialJewelCount:(int)arg2 useBubbleBackground:(BOOL)arg3 ;
-(void)setJewelCount:(int)arg1 ;
-(IGUnreadBubbleView *)unreadBubbleView;
-(void)setUnreadBubbleView:(IGUnreadBubbleView *)arg1 ;
-(void)setBubbleBackground:(UIView *)arg1 ;
-(UIView *)bubbleBackground;
-(void)layoutCountLabel;
-(int)jewelCount;
-(void)layoutSubviews;
@end

