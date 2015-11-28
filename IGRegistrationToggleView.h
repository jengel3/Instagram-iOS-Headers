
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView;

@interface IGRegistrationToggleView : UIView {

	int _registrationMode;
	/*^block*/id _switchBlock;
	float _backgroundTopInset;
	UIButton* _signUpLabel;
	UIButton* _logInLabel;
	UIView* _caretView;

}

@property (assign,nonatomic) int registrationMode;                  //@synthesize registrationMode=_registrationMode - In the implementation block
@property (nonatomic,copy) id switchBlock;                          //@synthesize switchBlock=_switchBlock - In the implementation block
@property (assign,nonatomic) float backgroundTopInset;              //@synthesize backgroundTopInset=_backgroundTopInset - In the implementation block
@property (nonatomic,retain) UIButton * signUpLabel;                //@synthesize signUpLabel=_signUpLabel - In the implementation block
@property (nonatomic,retain) UIButton * logInLabel;                 //@synthesize logInLabel=_logInLabel - In the implementation block
@property (nonatomic,retain) UIView * caretView;                    //@synthesize caretView=_caretView - In the implementation block
-(id)switchBlock;
-(float)backgroundTopInset;
-(void)setBackgroundTopInset:(float)arg1 ;
-(void)setSwitchBlock:(id)arg1 ;
-(int)registrationMode;
-(void)setRegistrationMode:(int)arg1 ;
-(UIButton *)signUpLabel;
-(UIButton *)logInLabel;
-(void)onSignUpButtonTapped;
-(void)onLogInButtonTapped;
-(void)setSignUpLabel:(UIButton *)arg1 ;
-(void)setLogInLabel:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)caretView;
-(void)setCaretView:(UIView *)arg1 ;
@end

