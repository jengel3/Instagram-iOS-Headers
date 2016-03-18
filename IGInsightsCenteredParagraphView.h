
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface IGInsightsCenteredParagraphView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _bottomSeparator;

}

@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;               //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
@end

