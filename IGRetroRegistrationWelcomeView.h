
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationBackgroundView, IGFacebookButton, UIButton, UIImageView, UILabel, IGRetroRegistrationFacebookButtonSeperator;

@interface IGRetroRegistrationWelcomeView : UIView {

	IGRetroRegistrationBackgroundView* _backgroundView;
	IGFacebookButton* _facebookButton;
	UIButton* _signUpButton;
	UIButton* _dismissButton;
	UIImageView* _iconView;
	UILabel* _messageLabel;
	IGRetroRegistrationFacebookButtonSeperator* _facebookButtonSeparator;

}

@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                                                 //@synthesize facebookButton=_facebookButton - In the implementation block
@property (nonatomic,retain) UIButton * signUpButton;                                                           //@synthesize signUpButton=_signUpButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                            //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFacebookButtonSeperator * facebookButtonSeparator;              //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
-(void)showDismissButton;
-(IGRetroRegistrationFacebookButtonSeperator *)facebookButtonSeparator;
-(IGFacebookButton *)facebookButton;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(void)setFacebookButtonSeparator:(IGRetroRegistrationFacebookButtonSeperator *)arg1 ;
-(UIButton *)signUpButton;
-(void)setSignUpButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
-(UILabel *)messageLabel;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIButton *)dismissButton;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
@end

