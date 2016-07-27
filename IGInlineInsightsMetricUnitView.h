
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGInlineInsightsMetricUnitView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _additionalInfoLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * additionalInfoLabel;              //@synthesize additionalInfoLabel=_additionalInfoLabel - In the implementation block
-(void)setSubtitleLabelText:(id)arg1 ;
-(void)setTitleLabelText:(id)arg1 ;
-(UILabel *)additionalInfoLabel;
-(void)setAdditionalInfoLabel:(UILabel *)arg1 ;
-(void)setAdditionalInfoLabelText:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

