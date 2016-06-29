
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface IGBusinessConversionHeaderView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _bottomLine;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                  //@synthesize bottomLine=_bottomLine - In the implementation block
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)lineWidth;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 ;
@end

