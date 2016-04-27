
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol IGAccountRecoveryEmailConfirmationViewDelegate;
@class IGRetroRegistrationTextField, UIButton, UILabel, UIImageView;

@interface IGAccountRecoveryEmailConfirmationScrollView : UIScrollView {

	IGRetroRegistrationTextField* _confirmationCodeField;
	UIButton* _nextButton;
	UILabel* _messageLabel;
	id<IGAccountRecoveryEmailConfirmationViewDelegate> _emailConfirmationDelegate;
	UIButton* _resendButton;
	UIButton* _loginInInsteadButton;
	UIImageView* _logoView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) IGRetroRegistrationTextField * confirmationCodeField;                                             //@synthesize confirmationCodeField=_confirmationCodeField - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                                                            //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                                           //@synthesize messageLabel=_messageLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGAccountRecoveryEmailConfirmationViewDelegate> emailConfirmationDelegate;              //@synthesize emailConfirmationDelegate=_emailConfirmationDelegate - In the implementation block
@property (nonatomic,retain) UIButton * resendButton;                                                                          //@synthesize resendButton=_resendButton - In the implementation block
@property (nonatomic,retain) UIButton * loginInInsteadButton;                                                                  //@synthesize loginInInsteadButton=_loginInInsteadButton - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                                                                           //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
-(UIButton *)resendButton;
-(UIButton *)loginInInsteadButton;
-(void)nextButtonTapped:(id)arg1 ;
-(void)loginInsteadButtonTapped:(id)arg1 ;
-(void)resendCodeButtonTapped:(id)arg1 ;
-(id<IGAccountRecoveryEmailConfirmationViewDelegate>)emailConfirmationDelegate;
-(void)setConfirmationCodeField:(IGRetroRegistrationTextField *)arg1 ;
-(void)setResendButton:(UIButton *)arg1 ;
-(void)setLoginInInsteadButton:(UIButton *)arg1 ;
-(void)setEmailConfirmationDelegate:(id<IGAccountRecoveryEmailConfirmationViewDelegate>)arg1 ;
-(IGRetroRegistrationTextField *)confirmationCodeField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
@end

