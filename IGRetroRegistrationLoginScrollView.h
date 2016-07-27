
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationFacebookButtonContainer, UIImageView, IGRetroRegistrationTextField, UIButton, IGChevronTitleButton, IGCoreTextView;

@interface IGRetroRegistrationLoginScrollView : UIScrollView {

	IGRetroRegistrationFacebookButtonContainer* _facebookButtonContainer;
	UIImageView* _iconView;
	IGRetroRegistrationTextField* _usernameField;
	IGRetroRegistrationTextField* _passwordField;
	UIButton* _loginButton;
	IGChevronTitleButton* _changeLanguageButton;
	IGCoreTextView* _loginHelperView;
	float _facebookButtonContainerTopPaddingModifier;

}

@property (nonatomic,retain) UIImageView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * usernameField;                                      //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * passwordField;                                      //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) UIButton * loginButton;                                                            //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,retain) IGChevronTitleButton * changeLanguageButton;                                       //@synthesize changeLanguageButton=_changeLanguageButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * loginHelperView;                                                  //@synthesize loginHelperView=_loginHelperView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFacebookButtonContainer * facebookButtonContainer;              //@synthesize facebookButtonContainer=_facebookButtonContainer - In the implementation block
@property (assign,nonatomic) float facebookButtonContainerTopPaddingModifier;                                   //@synthesize facebookButtonContainerTopPaddingModifier=_facebookButtonContainerTopPaddingModifier - In the implementation block
-(IGCoreTextView *)loginHelperView;
-(IGRetroRegistrationFacebookButtonContainer *)facebookButtonContainer;
-(IGChevronTitleButton *)changeLanguageButton;
-(float)facebookButtonContainerTopPaddingModifier;
-(void)setFacebookButtonContainerTopPaddingModifier:(float)arg1 ;
-(void)setFacebookButtonContainer:(IGRetroRegistrationFacebookButtonContainer *)arg1 ;
-(void)setLoginButton:(UIButton *)arg1 ;
-(void)setChangeLanguageButton:(IGChevronTitleButton *)arg1 ;
-(void)setLoginHelperView:(IGCoreTextView *)arg1 ;
-(void)setUsernameField:(IGRetroRegistrationTextField *)arg1 ;
-(IGRetroRegistrationTextField *)usernameField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(IGRetroRegistrationTextField *)passwordField;
-(void)setPasswordField:(IGRetroRegistrationTextField *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(UIButton *)loginButton;
@end

