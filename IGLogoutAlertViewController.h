
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>

@class UILabel, UISwitch, IGButton, NSString, UITapGestureRecognizer;

@interface IGLogoutAlertViewController : IGViewController {

	char _checkboxChecked;
	UILabel* _titleLabel;
	UILabel* _checkboxMessageLabel;
	UISwitch* _checkbox;
	IGButton* _cancelButton;
	IGButton* _confirmButton;
	NSString* _titleText;
	NSString* _checkboxMessageText;
	NSString* _confirmButtonText;
	NSString* _cancelButtonText;
	/*^block*/id _cancelBlock;
	/*^block*/id _confirmBlock;
	UITapGestureRecognizer* _tapGestureRecognizerForConfirmingModal;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * checkboxMessageLabel;                                               //@synthesize checkboxMessageLabel=_checkboxMessageLabel - In the implementation block
@property (nonatomic,retain) UISwitch * checkbox;                                                          //@synthesize checkbox=_checkbox - In the implementation block
@property (nonatomic,retain) IGButton * cancelButton;                                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) IGButton * confirmButton;                                                     //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * checkboxMessageText;                                                 //@synthesize checkboxMessageText=_checkboxMessageText - In the implementation block
@property (nonatomic,copy) NSString * confirmButtonText;                                                   //@synthesize confirmButtonText=_confirmButtonText - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonText;                                                    //@synthesize cancelButtonText=_cancelButtonText - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                                 //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) id confirmBlock;                                                                //@synthesize confirmBlock=_confirmBlock - In the implementation block
@property (assign,nonatomic) char checkboxChecked;                                                         //@synthesize checkboxChecked=_checkboxChecked - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizerForConfirmingModal;              //@synthesize tapGestureRecognizerForConfirmingModal=_tapGestureRecognizerForConfirmingModal - In the implementation block
-(id)analyticsModule;
-(CGSize)titleLabelSize;
-(UITapGestureRecognizer *)tapGestureRecognizerForConfirmingModal;
-(void)onCancelModal;
-(NSString *)confirmButtonText;
-(void)onConfirmModal;
-(void)setConfirmButton:(IGButton *)arg1 ;
-(void)setConfirmButtonText:(NSString *)arg1 ;
-(id)createCheckboxMessageLabel;
-(void)onToggleEnrollmentStatus;
-(id)createCancelButton;
-(id)createConfirmButton;
-(CGSize)checkboxMessageLabelSize;
-(UILabel *)checkboxMessageLabel;
-(UISwitch *)checkbox;
-(CGSize)checkboxSize;
-(id)confirmBlock;
-(char)checkboxChecked;
-(id)initWithTitle:(id)arg1 checkboxMessage:(id)arg2 checkboxChecked:(char)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 cancelBlock:(/*^block*/id)arg6 otherBlock:(/*^block*/id)arg7 ;
-(void)setCheckboxMessageLabel:(UILabel *)arg1 ;
-(void)setCheckbox:(UISwitch *)arg1 ;
-(NSString *)checkboxMessageText;
-(void)setCheckboxMessageText:(NSString *)arg1 ;
-(NSString *)cancelButtonText;
-(void)setCancelButtonText:(NSString *)arg1 ;
-(void)setConfirmBlock:(id)arg1 ;
-(void)setCheckboxChecked:(char)arg1 ;
-(void)setTapGestureRecognizerForConfirmingModal:(UITapGestureRecognizer *)arg1 ;
-(id)createTitleLabel;
-(char)prefersTabBarHidden;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(IGButton *)cancelButton;
-(void)setCancelButton:(IGButton *)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(id)cancelBlock;
-(NSString *)titleText;
-(IGButton *)confirmButton;
-(void)setCancelBlock:(id)arg1 ;
-(char)prefersNavigationBarHidden;
@end

