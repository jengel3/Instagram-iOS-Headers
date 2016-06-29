
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGPassthroughLabel;

@interface IGUnreadBubbleView : UIView {

	int _unreadCount;
	IGPassthroughLabel* _label;

}

@property (nonatomic,retain) IGPassthroughLabel * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int unreadCount;                         //@synthesize unreadCount=_unreadCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IGPassthroughLabel *)label;
-(void)setLabel:(IGPassthroughLabel *)arg1 ;
-(int)unreadCount;
-(void)setUnreadCount:(int)arg1 ;
@end

