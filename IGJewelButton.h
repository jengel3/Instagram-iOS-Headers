
#import <UIKit/UIButton.h>

@protocol IGJewelButtonDelegate;
@class IGUnreadBubbleView;

@interface IGJewelButton : UIButton {

	int _jewelCount;
	id<IGJewelButtonDelegate> _delegate;
	IGUnreadBubbleView* _unreadBubbleView;

}

@property (nonatomic,retain) IGUnreadBubbleView * unreadBubbleView;                  //@synthesize unreadBubbleView=_unreadBubbleView - In the implementation block
@property (assign,nonatomic) int jewelCount;                                         //@synthesize jewelCount=_jewelCount - In the implementation block
@property (assign,nonatomic,__weak) id<IGJewelButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)styleWithImage:(id)arg1 initialJewelCount:(int)arg2 ;
-(void)setJewelCount:(int)arg1 ;
-(void)setUnreadBubbleView:(IGUnreadBubbleView *)arg1 ;
-(IGUnreadBubbleView *)unreadBubbleView;
-(void)layoutCountLabel;
-(int)jewelCount;
-(void)setDelegate:(id<IGJewelButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGJewelButtonDelegate>)delegate;
@end

