
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationPasswordControllerDelegate;
@class IGRegistrationStepView, IGRegistrationNavigationBar, UIView, UIButton, NSString;

@interface IGRegistrationPasswordController : NSObject <IGTextFieldDelegate, IGRegistrationStepObject> {

	id<IGRegistrationPasswordControllerDelegate> _delegate;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;
	UIButton* _passwordToggleButton;

}

@property (assign,nonatomic,__weak) id<IGRegistrationPasswordControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                         //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                      //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIButton * passwordToggleButton;                                           //@synthesize passwordToggleButton=_passwordToggleButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVerifying:(char)arg1 ;
-(void)nextButtonTapped;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(IGRegistrationStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(UIButton *)passwordToggleButton;
-(void)passwordToggleButtonTapped;
-(void)setPasswordToggleButton:(UIButton *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRegistrationPasswordControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGRegistrationPasswordControllerDelegate>)delegate;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
@end

