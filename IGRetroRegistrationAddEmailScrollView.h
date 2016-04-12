
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationNextButton, UIButton, IGRetroRegistrationTextField, IGCoreTextView, UIImageView, UILabel;

@interface IGRetroRegistrationAddEmailScrollView : UIScrollView {

	IGRetroRegistrationNextButton* _nextButton;
	UIButton* _switchToPhoneRegiButton;
	IGRetroRegistrationTextField* _emailField;
	IGCoreTextView* _termView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;              //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIButton * switchToPhoneRegiButton;                      //@synthesize switchToPhoneRegiButton=_switchToPhoneRegiButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * emailField;               //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                               //@synthesize termView=_termView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(IGRetroRegistrationTextField *)emailField;
-(UIButton *)switchToPhoneRegiButton;
-(IGCoreTextView *)termView;
-(void)setSwitchToPhoneRegiButton:(UIButton *)arg1 ;
-(void)setEmailField:(IGRetroRegistrationTextField *)arg1 ;
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

