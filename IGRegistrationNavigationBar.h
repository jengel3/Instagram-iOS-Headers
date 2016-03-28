
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, UIActivityIndicatorView;

@interface IGRegistrationNavigationBar : UIView {

	UIButton* _rightButton;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIButton * rightButton;                         //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(void)setIsVerifying:(char)arg1 ;
-(void)addRightButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIButton *)rightButton;
-(void)setRightButton:(UIButton *)arg1 ;
@end

