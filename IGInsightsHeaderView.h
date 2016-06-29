
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInsightsHeaderViewDelegate;
@class UILabel, UIButton, UIImageView;

@interface IGInsightsHeaderView : UIView {

	id<IGInsightsHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _button;
	UIImageView* _iconView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * button;                                           //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                                      //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTitle:(id)arg1 buttonText:(id)arg2 ;
-(void)_buttonClick:(id)arg1 ;
-(void)_layoutActionButton;
-(void)_layoutTitles;
-(UIButton *)button;
-(void)setDelegate:(id<IGInsightsHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsHeaderViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UIImageView *)iconView;
@end

