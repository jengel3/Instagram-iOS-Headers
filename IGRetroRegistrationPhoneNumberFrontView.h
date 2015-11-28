
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, IGRetroRegistrationPhoneNumberField, IGCoreTextView, UIImageView, UILabel;

@interface IGRetroRegistrationPhoneNumberFrontView : UIView {

	UIButton* _switchToEmailRegiButton;
	IGRetroRegistrationPhoneNumberField* _phoneNumberField;
	UIButton* _nextButton;
	IGCoreTextView* _termView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIButton * switchToEmailRegiButton;                                  //@synthesize switchToEmailRegiButton=_switchToEmailRegiButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationPhoneNumberField * phoneNumberField;              //@synthesize phoneNumberField=_phoneNumberField - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                               //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                                           //@synthesize termView=_termView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                          //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(IGCoreTextView *)termView;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(UIButton *)switchToEmailRegiButton;
-(IGRetroRegistrationPhoneNumberField *)phoneNumberField;
-(void)setSwitchToEmailRegiButton:(UIButton *)arg1 ;
-(void)setPhoneNumberField:(IGRetroRegistrationPhoneNumberField *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

