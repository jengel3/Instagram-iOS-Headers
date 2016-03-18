
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIButton, IGRetroRegistrationFacebookButtonContainer, IGCoreTextView, IGRetroRegistrationTextField, UIImageView;

@interface IGRetroRegistrationLoginScrollView : UIScrollView {

	UIButton* _loginButton;
	IGRetroRegistrationFacebookButtonContainer* _facebookButtonContainer;
	IGCoreTextView* _loginHelperView;
	IGRetroRegistrationTextField* _usernameField;
	IGRetroRegistrationTextField* _passwordField;
	UIButton* _dismissButton;
	UIImageView* _iconView;
	float _facebookButtonContainerTopPaddingModifier;

}

@property (nonatomic,retain) UIButton * loginButton;                                                            //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFacebookButtonContainer * facebookButtonContainer;              //@synthesize facebookButtonContainer=_facebookButtonContainer - In the implementation block
@property (nonatomic,retain) IGCoreTextView * loginHelperView;                                                  //@synthesize loginHelperView=_loginHelperView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * usernameField;                                      //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * passwordField;                                      //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) float facebookButtonContainerTopPaddingModifier;                                   //@synthesize facebookButtonContainerTopPaddingModifier=_facebookButtonContainerTopPaddingModifier - In the implementation block
-(void)showDismissButton;
-(IGRetroRegistrationTextField *)usernameField;
-(void)setUsernameField:(IGRetroRegistrationTextField *)arg1 ;
-(IGCoreTextView *)loginHelperView;
-(IGRetroRegistrationFacebookButtonContainer *)facebookButtonContainer;
-(void)setFacebookButtonContainerTopPaddingModifier:(float)arg1 ;
-(float)facebookButtonContainerTopPaddingModifier;
-(void)setLoginButton:(UIButton *)arg1 ;
-(void)setFacebookButtonContainer:(IGRetroRegistrationFacebookButtonContainer *)arg1 ;
-(void)setLoginHelperView:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(IGRetroRegistrationTextField *)passwordField;
-(void)setPasswordField:(IGRetroRegistrationTextField *)arg1 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(UIButton *)loginButton;
@end

