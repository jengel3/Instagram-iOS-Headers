
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGInlineInsightsUnitView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(void)setSubtitleLabelText:(id)arg1 ;
-(void)setTitleLabelText:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

