
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTextField.h>

@class UIButton;

@interface IGPasswordField : IGTextField {

	char _displayRightView;
	UIButton* _logInButton;
	UIButton* _forgotButton;

}

@property (nonatomic,retain) UIButton * logInButton;               //@synthesize logInButton=_logInButton - In the implementation block
@property (nonatomic,retain) UIButton * forgotButton;              //@synthesize forgotButton=_forgotButton - In the implementation block
@property (assign,nonatomic) char displayRightView;                //@synthesize displayRightView=_displayRightView - In the implementation block
-(void)setIsVerifying:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 displaysRightView:(char)arg2 ;
-(UIButton *)forgotButton;
-(UIButton *)logInButton;
-(void)showLogInButton;
-(void)showForgotButton;
-(void)setDisplayRightView:(char)arg1 ;
-(char)displayRightView;
-(void)configureButtons;
-(void)setLogInButton:(UIButton *)arg1 ;
-(void)setForgotButton:(UIButton *)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
@end

