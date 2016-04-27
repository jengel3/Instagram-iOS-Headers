
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIButton, IGRetroRegistrationSignInHelperToggleView, IGRetroRegistrationTextField, IGRetroRegistrationPhoneNumberField, IGRetroRegistrationNextButton, IGTextField, IGFacebookButton, UIImageView, UILabel, IGRetroRegistrationFacebookButtonSeperator;

@interface IGRetroRegistrationSignInHelperScrollView : UIScrollView {

	char _isTabEnabled;
	UIButton* _switchButton;
	IGRetroRegistrationSignInHelperToggleView* _toggleView;
	IGRetroRegistrationTextField* _emailField;
	IGRetroRegistrationPhoneNumberField* _phoneNumberField;
	IGRetroRegistrationNextButton* _sendButton;
	IGTextField* _inputView;
	int _inputMode;
	UIButton* _loginHelperButton;
	IGFacebookButton* _facebookButton;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	IGRetroRegistrationFacebookButtonSeperator* _facebookButtonSeparator;

}

@property (nonatomic,retain) UIButton * switchButton;                                                           //@synthesize switchButton=_switchButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationSignInHelperToggleView * toggleView;                            //@synthesize toggleView=_toggleView - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * emailField;                                         //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationPhoneNumberField * phoneNumberField;                            //@synthesize phoneNumberField=_phoneNumberField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * sendButton;                                        //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) IGTextField * inputView;                                                           //@synthesize inputView=_inputView - In the implementation block
@property (assign,nonatomic) int inputMode;                                                                     //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) UIButton * loginHelperButton;                                                      //@synthesize loginHelperButton=_loginHelperButton - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                                                 //@synthesize facebookButton=_facebookButton - In the implementation block
@property (assign,nonatomic) char isTabEnabled;                                                                 //@synthesize isTabEnabled=_isTabEnabled - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                        //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFacebookButtonSeperator * facebookButtonSeparator;              //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
+(id)createTitleLabel;
+(id)createDescriptionLabel;
+(id)createIconView;
+(id)createToggleView;
+(id)createSwitchButton;
+(id)createEmailField;
+(id)createPhoneNumberField;
+(id)createSendButton;
+(id)createLoginHelperButton;
+(id)createFacebookButton;
-(IGRetroRegistrationPhoneNumberField *)phoneNumberField;
-(void)setEmailField:(IGRetroRegistrationTextField *)arg1 ;
-(IGRetroRegistrationTextField *)emailField;
-(void)switchToEmailView;
-(char)isTabEnabled;
-(IGRetroRegistrationSignInHelperToggleView *)toggleView;
-(UIButton *)switchButton;
-(UIButton *)loginHelperButton;
-(IGRetroRegistrationFacebookButtonSeperator *)facebookButtonSeparator;
-(IGFacebookButton *)facebookButton;
-(void)switchToPhoneNumberView;
-(void)setSwitchButton:(UIButton *)arg1 ;
-(void)setToggleView:(IGRetroRegistrationSignInHelperToggleView *)arg1 ;
-(void)setPhoneNumberField:(IGRetroRegistrationPhoneNumberField *)arg1 ;
-(void)setLoginHelperButton:(UIButton *)arg1 ;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(void)setIsTabEnabled:(char)arg1 ;
-(void)setFacebookButtonSeparator:(IGRetroRegistrationFacebookButtonSeperator *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(IGTextField *)inputView;
-(void)setInputView:(IGTextField *)arg1 ;
-(void)setInputMode:(int)arg1 ;
-(int)inputMode;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(IGRetroRegistrationNextButton *)sendButton;
-(void)setSendButton:(IGRetroRegistrationNextButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

