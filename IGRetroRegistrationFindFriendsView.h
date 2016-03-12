
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, IGRetroRegistrationBackgroundView, UIImageView, UILabel, IGCoreTextView, NSString, UIImage;

@interface IGRetroRegistrationFindFriendsView : UIView {

	UIButton* _connectButton;
	IGRetroRegistrationBackgroundView* _backgroundView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	IGCoreTextView* _descriptionLabel;
	NSString* _descriptionText;
	UIImage* _buttonIcon;
	UIImage* _iconImage;
	NSString* _buttonText;

}

@property (nonatomic,retain) UIButton * connectButton;                                        //@synthesize connectButton=_connectButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                          //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                                         //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) IGCoreTextView * descriptionLabel;                               //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                        //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) UIImage * buttonIcon;                                            //@synthesize buttonIcon=_buttonIcon - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                             //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                             //@synthesize buttonText=_buttonText - In the implementation block
-(UILabel *)subTitleLabel;
-(UIButton *)connectButton;
-(UIImage *)buttonIcon;
-(id)initWithFrame:(CGRect)arg1 iconImage:(id)arg2 titleText:(id)arg3 subTitleText:(id)arg4 buttonText:(id)arg5 buttonIcon:(id)arg6 descriptionText:(id)arg7 ;
-(void)setConnectButton:(UIButton *)arg1 ;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(void)setButtonIcon:(UIImage *)arg1 ;
-(IGCoreTextView *)descriptionLabel;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setBackgroundView:(IGRetroRegistrationBackgroundView *)arg1 ;
-(IGRetroRegistrationBackgroundView *)backgroundView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImage *)iconImage;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setDescriptionLabel:(IGCoreTextView *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

