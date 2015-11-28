
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface IGRetroRegistrationLoginHelperView : UIView {

	UIButton* _loginHelperButton;
	UILabel* _loginHelperTextLabel;

}

@property (nonatomic,retain) UIButton * loginHelperButton;                //@synthesize loginHelperButton=_loginHelperButton - In the implementation block
@property (nonatomic,retain) UILabel * loginHelperTextLabel;              //@synthesize loginHelperTextLabel=_loginHelperTextLabel - In the implementation block
-(UILabel *)loginHelperTextLabel;
-(UIButton *)loginHelperButton;
-(void)setLoginHelperButton:(UIButton *)arg1 ;
-(void)setLoginHelperTextLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

