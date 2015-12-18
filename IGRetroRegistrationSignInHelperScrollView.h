
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIButton, IGRetroRegistrationTextField, IGRetroRegistrationPhoneNumberField, IGRetroRegistrationNextButton, IGTextField, IGCoreTextView, UIImageView, UILabel, IGRetroRegistrationFacebookButtonSeperator, IGFacebookButton;

@interface IGRetroRegistrationSignInHelperScrollView : UIScrollView {

	UIButton* _switchButton;
	IGRetroRegistrationTextField* _emailField;
	IGRetroRegistrationPhoneNumberField* _phoneNumberField;
	IGRetroRegistrationNextButton* _sendButton;
	IGTextField* _inputView;
	int _inputMode;
	IGCoreTextView* _loginHelperView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	IGRetroRegistrationFacebookButtonSeperator* _facebookButtonSeparator;
	IGFacebookButton* _facebookButton;

}

@property (nonatomic,retain) UIButton * switchButton;                                                           //@synthesize switchButton=_switchButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * emailField;                                         //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationPhoneNumberField * phoneNumberField;                            //@synthesize phoneNumberField=_phoneNumberField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * sendButton;                                        //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) IGTextField * inputView;                                                           //@synthesize inputView=_inputView - In the implementation block
@property (assign,nonatomic) int inputMode;                                                                     //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) IGCoreTextView * loginHelperView;                                                  //@synthesize loginHelperView=_loginHelperView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                        //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationFacebookButtonSeperator * facebookButtonSeparator;              //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                                                 //@synthesize facebookButton=_facebookButton - In the implementation block
+(id)createIconView;
+(id)createTitleLabel;
+(id)createDescriptionLabel;
+(id)createSwitchButton;
+(id)createEmailField;
+(id)createPhoneNumberField;
+(id)createSendButton;
+(id)createLoginHelperView;
+(id)createFacebookButton;
+(id)createFacebookButtonSeparator;
-(IGRetroRegistrationTextField *)emailField;
-(IGFacebookButton *)facebookButton;
-(void)setEmailField:(IGRetroRegistrationTextField *)arg1 ;
-(IGRetroRegistrationFacebookButtonSeperator *)facebookButtonSeparator;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(void)setFacebookButtonSeparator:(IGRetroRegistrationFacebookButtonSeperator *)arg1 ;
-(IGCoreTextView *)loginHelperView;
-(void)setLoginHelperView:(IGCoreTextView *)arg1 ;
-(IGRetroRegistrationPhoneNumberField *)phoneNumberField;
-(void)setPhoneNumberField:(IGRetroRegistrationPhoneNumberField *)arg1 ;
-(void)switchToEmailView;
-(UIButton *)switchButton;
-(void)switchToPhonenumberView;
-(void)setSwitchButton:(UIButton *)arg1 ;
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

