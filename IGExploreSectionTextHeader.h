
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIImageView;

@interface IGExploreSectionTextHeader : UIView {

	UILabel* _titleLabel;
	UIButton* _actionButton;
	UIImageView* _iconView;
	unsigned _titleLocation;

}

@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;               //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) unsigned titleLocation;                 //@synthesize titleLocation=_titleLocation - In the implementation block
-(unsigned)titleLocation;
-(void)setTitleLocation:(unsigned)arg1 ;
-(void)layoutIcon;
-(void)layoutActionButton;
-(void)layoutTitle;
-(UIButton *)actionButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)iconView;
@end

