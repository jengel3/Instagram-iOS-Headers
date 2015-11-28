
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationPhoneControllerDelegate;
@class IGCountryCodeViewController, UIButton, UIView, IGRegistrationStepView, IGRegistrationNavigationBar, NSString;

@interface IGRegistrationPhoneController : NSObject <IGCountryCodeViewControllerDelegate, IGTextFieldDelegate, IGRegistrationStepObject> {

	id<IGRegistrationPhoneControllerDelegate> _delegate;
	IGCountryCodeViewController* _countryCodeTableViewController;
	UIButton* _countryCodeButton;
	UIView* _textFieldLeftView;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;

}

@property (assign,nonatomic,__weak) id<IGRegistrationPhoneControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCountryCodeViewController * countryCodeTableViewController;              //@synthesize countryCodeTableViewController=_countryCodeTableViewController - In the implementation block
@property (nonatomic,retain) UIButton * countryCodeButton;                                              //@synthesize countryCodeButton=_countryCodeButton - In the implementation block
@property (nonatomic,retain) UIView * textFieldLeftView;                                                //@synthesize textFieldLeftView=_textFieldLeftView - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                         //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                      //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                         //@synthesize iconView=_iconView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVerifying:(char)arg1 ;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)nextButtonTapped;
-(UIButton *)countryCodeButton;
-(UIView *)textFieldLeftView;
-(void)selectCountryCode;
-(void)setCountryCodeButton:(UIButton *)arg1 ;
-(void)setTextFieldLeftView:(UIView *)arg1 ;
-(IGRegistrationStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(IGCountryCodeViewController *)countryCodeTableViewController;
-(void)setCountryCodeTableViewController:(IGCountryCodeViewController *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRegistrationPhoneControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGRegistrationPhoneControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
@end

