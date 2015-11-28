
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGRetroRegistrationTextField.h>

@class UIButton, UIView, NSString;

@interface IGRetroRegistrationPhoneNumberField : IGRetroRegistrationTextField {

	UIButton* _countryCodeButton;
	UIView* _textFieldLeftView;
	UIView* _lineSeparatorView;
	UIButton* _countrycodeButton;
	NSString* _countryNumber;

}

@property (nonatomic,readonly) UIButton * countryCodeButton;              //@synthesize countryCodeButton=_countryCodeButton - In the implementation block
@property (nonatomic,readonly) UIView * textFieldLeftView;                //@synthesize textFieldLeftView=_textFieldLeftView - In the implementation block
@property (nonatomic,readonly) UIView * lineSeparatorView;                //@synthesize lineSeparatorView=_lineSeparatorView - In the implementation block
@property (nonatomic,retain) UIButton * countrycodeButton;                //@synthesize countrycodeButton=_countrycodeButton - In the implementation block
@property (nonatomic,copy) NSString * countryNumber;                      //@synthesize countryNumber=_countryNumber - In the implementation block
-(NSString *)countryNumber;
-(void)setCountryNumber:(NSString *)arg1 ;
-(UIButton *)countryCodeButton;
-(UIView *)textFieldLeftView;
-(id)configureCountryCodeButton;
-(UIView *)lineSeparatorView;
-(void)updateCountryName:(id)arg1 countryNumber:(id)arg2 ;
-(id)formatPhoneNumber;
-(UIButton *)countrycodeButton;
-(void)setCountrycodeButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

