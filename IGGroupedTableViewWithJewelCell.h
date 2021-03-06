
#import <Instagram/IGGroupedTableViewCell.h>

@class IGUnreadBubbleView;

@interface IGGroupedTableViewWithJewelCell : IGGroupedTableViewCell {

	IGUnreadBubbleView* _unreadBubbleView;

}

@property (nonatomic,retain) IGUnreadBubbleView * unreadBubbleView;              //@synthesize unreadBubbleView=_unreadBubbleView - In the implementation block
-(void)setUnreadBubbleView:(IGUnreadBubbleView *)arg1 ;
-(IGUnreadBubbleView *)unreadBubbleView;
-(void)setupViewHierarchy;
-(void)updateJewelCount:(int)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

