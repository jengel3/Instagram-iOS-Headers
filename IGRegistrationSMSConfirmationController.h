
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGSMSConfirmationControllerDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationSMSConfirmationControllerDelegate;
@class IGRegistrationStepView, IGRegistrationNavigationBar, UIView, NSString, IGSMSConfirmationController;

@interface IGRegistrationSMSConfirmationController : NSObject <IGTextFieldDelegate, IGSMSConfirmationControllerDelegate, IGRegistrationStepObject> {

	char _isInsertingCode;
	id<IGRegistrationSMSConfirmationControllerDelegate> _delegate;
	IGRegistrationStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;
	NSString* _phoneNumber;
	NSString* _confirmationCode;
	IGSMSConfirmationController* _smsConfirmationController;

}

@property (assign,nonatomic,__weak) id<IGRegistrationSMSConfirmationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationStepView * stepView;                                                //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                             //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                                //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                           //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * confirmationCode;                                                      //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (nonatomic,retain) IGSMSConfirmationController * smsConfirmationController;                          //@synthesize smsConfirmationController=_smsConfirmationController - In the implementation block
@property (assign,nonatomic) char isInsertingCode;                                                             //@synthesize isInsertingCode=_isInsertingCode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)coreTextViewStringStyle;
-(void)setIsVerifying:(char)arg1 ;
-(void)nextButtonTapped;
-(IGSMSConfirmationController *)smsConfirmationController;
-(NSString *)confirmationCode;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)smsConfirmationControllerWantsToCallUserWithConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToResendConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToChangePhoneNumber:(id)arg1 ;
-(float)topBarsHeight;
-(void)setSmsConfirmationController:(IGSMSConfirmationController *)arg1 ;
-(IGRegistrationStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationStepView *)arg1 ;
-(void)smsConfirmationFailed;
-(char)isInsertingCode;
-(void)setIsInsertingCode:(char)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRegistrationSMSConfirmationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGRegistrationSMSConfirmationControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(NSString *)phoneNumber;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

