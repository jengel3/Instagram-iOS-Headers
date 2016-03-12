
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface IGInsightsSummaryView : UIView {

	UILabel* _titleLabel;
	UIButton* _actionButton;

}

@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
-(id)initWithTitle:(id)arg1 buttonTitle:(id)arg2 ;
-(UIButton *)actionButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
@end

