
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

