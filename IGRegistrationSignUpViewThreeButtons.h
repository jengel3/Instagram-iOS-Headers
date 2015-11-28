
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGRegistrationSignUpViewBase.h>

@class UIButton;

@interface IGRegistrationSignUpViewThreeButtons : IGRegistrationSignUpViewBase {

	char _hasSetConstraints;
	UIButton* _emailButton;
	UIButton* _phoneNumberButton;

}

@property (nonatomic,retain) UIButton * emailButton;                    //@synthesize emailButton=_emailButton - In the implementation block
@property (nonatomic,retain) UIButton * phoneNumberButton;              //@synthesize phoneNumberButton=_phoneNumberButton - In the implementation block
@property (assign,nonatomic) char hasSetConstraints;                    //@synthesize hasSetConstraints=_hasSetConstraints - In the implementation block
-(char)hasSetConstraints;
-(void)setHasSetConstraints:(char)arg1 ;
-(void)setupEmailButton;
-(void)setupPhoneNumberButton;
-(UIButton *)emailButton;
-(UIButton *)phoneNumberButton;
-(void)emailButtonPressed;
-(void)phoneNumberButtonPressed;
-(void)setEmailButton:(UIButton *)arg1 ;
-(void)setPhoneNumberButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
@end

