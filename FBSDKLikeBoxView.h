
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class FBSDKLikeBoxBorderView, UILabel, NSString;

@interface FBSDKLikeBoxView : UIView {

	FBSDKLikeBoxBorderView* _borderView;
	UILabel* _likeCountLabel;
	unsigned _caretPosition;

}

@property (assign,nonatomic) unsigned caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)_initializeContent;
-(void)setCaretPosition:(unsigned)arg1 ;
-(unsigned)caretPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
@end

