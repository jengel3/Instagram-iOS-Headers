
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface IGWelcomeSeparator : UIView {

	UILabel* _label;
	UIView* _line;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * line;                //@synthesize line=_line - In the implementation block
-(void)setTextHidden:(char)arg1 ;
-(void)setUpLabel;
-(void)setUpLine;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIView *)line;
-(void)setLine:(UIView *)arg1 ;
@end

