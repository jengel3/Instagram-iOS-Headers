
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGRetroRegistrationNextButton, UIImageView, UILabel, UIButton, IGRetroRegistrationPhoneNumberField, IGCoreTextView;

@interface IGRetroRegistrationPhoneNumberFrontView : UIView {

	IGRetroRegistrationNextButton* _nextButton;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _switchToEmailRegiButton;
	IGRetroRegistrationPhoneNumberField* _phoneNumberField;
	IGCoreTextView* _termView;

}

@property (nonatomic,retain) UIImageView * iconView;                                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                          //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * switchToEmailRegiButton;                                  //@synthesize switchToEmailRegiButton=_switchToEmailRegiButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationPhoneNumberField * phoneNumberField;              //@synthesize phoneNumberField=_phoneNumberField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;                          //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                                           //@synthesize termView=_termView - In the implementation block
-(void)setPhoneNumberField:(IGRetroRegistrationPhoneNumberField *)arg1 ;
-(void)setSwitchToEmailRegiButton:(UIButton *)arg1 ;
-(IGRetroRegistrationPhoneNumberField *)phoneNumberField;
-(UIButton *)switchToEmailRegiButton;
-(IGCoreTextView *)termView;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(IGRetroRegistrationNextButton *)nextButton;
-(void)setNextButton:(IGRetroRegistrationNextButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

