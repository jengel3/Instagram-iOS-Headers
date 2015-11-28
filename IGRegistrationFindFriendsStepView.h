
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, IGCoreTextView, UILabel, NSString, UIImage;

@interface IGRegistrationFindFriendsStepView : UIView {

	UIButton* _connectButton;
	IGCoreTextView* _descriptionLabel;
	UILabel* _titleLabel;
	NSString* _titleText;
	NSString* _descriptionText;
	NSString* _buttonText;
	UIImage* _buttonIcon;

}

@property (nonatomic,retain) UIButton * connectButton;                       //@synthesize connectButton=_connectButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSString * titleText;                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                     //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                          //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,retain) UIImage * buttonIcon;                           //@synthesize buttonIcon=_buttonIcon - In the implementation block
-(id)initWithFrame:(CGRect)arg1 titleText:(id)arg2 descriptionText:(id)arg3 buttonText:(id)arg4 buttonIcon:(id)arg5 ;
-(UIButton *)connectButton;
-(void)setButtonIcon:(UIImage *)arg1 ;
-(UIImage *)buttonIcon;
-(void)setConnectButton:(UIButton *)arg1 ;
-(IGCoreTextView *)descriptionLabel;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDescriptionLabel:(IGCoreTextView *)arg1 ;
-(NSString *)titleText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

