
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTextField.h>

@protocol IGPhoneNumberTextFieldDelegate;
@class NSString, UIButton, UILabel, UIView, UIImageView;

@interface IGPhoneNumberTextField : IGTextField {

	id<IGPhoneNumberTextFieldDelegate> _phoneFieldDelegate;
	NSString* _countryNumber;
	UIButton* _countryCodeButton;
	UILabel* _countryCodeLabel;
	UILabel* _countryNumberLabel;
	UIView* _disclosureView;
	UIView* _textFieldLeftView;
	UIImageView* _iconImageView;

}

@property (assign,nonatomic,__weak) id<IGPhoneNumberTextFieldDelegate> phoneFieldDelegate;              //@synthesize phoneFieldDelegate=_phoneFieldDelegate - In the implementation block
@property (nonatomic,copy) NSString * countryNumber;                                                    //@synthesize countryNumber=_countryNumber - In the implementation block
@property (nonatomic,retain) UIButton * countryCodeButton;                                              //@synthesize countryCodeButton=_countryCodeButton - In the implementation block
@property (nonatomic,retain) UILabel * countryCodeLabel;                                                //@synthesize countryCodeLabel=_countryCodeLabel - In the implementation block
@property (nonatomic,retain) UILabel * countryNumberLabel;                                              //@synthesize countryNumberLabel=_countryNumberLabel - In the implementation block
@property (nonatomic,retain) UIView * disclosureView;                                                   //@synthesize disclosureView=_disclosureView - In the implementation block
@property (nonatomic,retain) UIView * textFieldLeftView;                                                //@synthesize textFieldLeftView=_textFieldLeftView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                               //@synthesize iconImageView=_iconImageView - In the implementation block
-(NSString *)countryNumber;
-(void)setCountryNumber:(NSString *)arg1 ;
-(void)setCountryWithCode:(id)arg1 andCountryNumber:(id)arg2 ;
-(void)setCountryWithCode:(id)arg1 ;
-(void)setPhoneFieldDelegate:(id<IGPhoneNumberTextFieldDelegate>)arg1 ;
-(void)initializeSubviews;
-(id)newDisclosureView;
-(id)countryCodeColor;
-(UILabel *)countryCodeLabel;
-(void)selectCountryCode;
-(void)layoutCountryCodeLabels;
-(UILabel *)countryNumberLabel;
-(UIView *)disclosureView;
-(CGRect)disclosureViewFrame;
-(CGPoint)countryNumberLabelOrigin;
-(void)sizeAndPositionCountryCodeButton;
-(UIView *)textFieldLeftView;
-(UIButton *)countryCodeButton;
-(void)setCountryNumberLabelAttributedTextWithLabel:(id)arg1 countryNumber:(id)arg2 ;
-(id<IGPhoneNumberTextFieldDelegate>)phoneFieldDelegate;
-(void)setCountryCodeButton:(UIButton *)arg1 ;
-(void)setCountryCodeLabel:(UILabel *)arg1 ;
-(void)setCountryNumberLabel:(UILabel *)arg1 ;
-(void)setDisclosureView:(UIView *)arg1 ;
-(void)setTextFieldLeftView:(UIView *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
@end

