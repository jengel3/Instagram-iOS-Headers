
#import <Instagram/IGEmojiScrollView.h>

@protocol IGEmojiScrollViewWithHeartAndCloseDelegate;
@class NSArray, UIButton;

@interface IGEmojiScrollViewWithHeartAndClose : IGEmojiScrollView {

	NSArray* _customEmojiButtonsAray;
	id<IGEmojiScrollViewWithHeartAndCloseDelegate> _emojiDelegate;
	UIButton* _closeButton;
	UIButton* _likeButton;

}

@property (assign,nonatomic,__weak) id<IGEmojiScrollViewWithHeartAndCloseDelegate> emojiDelegate;              //@synthesize emojiDelegate=_emojiDelegate - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                           //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIButton * likeButton;                                                            //@synthesize likeButton=_likeButton - In the implementation block
-(void)setEmojiDelegate:(id<IGEmojiScrollViewWithHeartAndCloseDelegate>)arg1 ;
-(void)hideLikeButton:(char)arg1 ;
-(void)setLikeButton:(UIButton *)arg1 ;
-(id)emojiButtonsArray;
-(id<IGEmojiScrollViewWithHeartAndCloseDelegate>)emojiDelegate;
-(void)setEmojiButtonsArray:(id)arg1 ;
-(void)closeButtonTapped:(id)arg1 ;
-(void)likeButtonTapped:(id)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIButton *)likeButton;
-(UIButton *)closeButton;
@end

