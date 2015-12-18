
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIButton, IGFacebookButton, IGRetroRegistrationLoginHelperView, IGRetroRegistrationTextField, IGPasswordField, UIImageView, IGRetroRegistrationFacebookButtonSeperator;

@interface IGRetroRegistrationLoginScrollView : UIScrollView {

	UIButton* _loginButton;
	IGFacebookButton* _facebookButton;
	IGRetroRegistrationLoginHelperView* _loginHelperView;
	IGRetroRegistrationTextField* _usernameField;
	IGPasswordField* _passwordField;
	UIButton* _dismissButton;
	UIImageView* _iconView;
	IGRetroRegistrationFacebookButtonSeperator* _facebookButtonSeparator;

}

@property (nonatomic,retain) UIButton * loginButton;                                                            //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                                                 //@synthesize facebookButton=_facebookButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationLoginHelperView * loginHelperView;                              //@synthesize loginHelperView=_loginHelperView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * usernameField;                                      //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGPasswordField * passwordField;                                                   //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFacebookButtonSeperator * facebookButtonSeparator;              //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
-(void)showDismissButton;
-(IGRetroRegistrationTextField *)usernameField;
-(void)setUsernameField:(IGRetroRegistrationTextField *)arg1 ;
-(IGFacebookButton *)facebookButton;
-(IGRetroRegistrationFacebookButtonSeperator *)facebookButtonSeparator;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(void)setFacebookButtonSeparator:(IGRetroRegistrationFacebookButtonSeperator *)arg1 ;
-(IGRetroRegistrationLoginHelperView *)loginHelperView;
-(void)setLoginButton:(UIButton *)arg1 ;
-(void)setLoginHelperView:(IGRetroRegistrationLoginHelperView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(IGPasswordField *)passwordField;
-(void)setPasswordField:(IGPasswordField *)arg1 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)loginButton;
@end

