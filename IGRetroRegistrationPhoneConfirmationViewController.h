
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGRetroRegistrationPhoneConfirmationViewControllerDelegate;
@class NSString, IGRetroRegistrationPhoneConfirmationView;

@interface IGRetroRegistrationPhoneConfirmationViewController : UIViewController <IGCoreTextLinkHandler, IGTextFieldDelegate, UIGestureRecognizerDelegate> {

	id<IGRetroRegistrationPhoneConfirmationViewControllerDelegate> _delegate;
	NSString* _phoneNumber;
	IGRetroRegistrationPhoneConfirmationView* _confirmationView;

}

@property (nonatomic,copy,readonly) NSString * phoneNumber;                                                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationPhoneConfirmationView * confirmationView;                                 //@synthesize confirmationView=_confirmationView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationPhoneConfirmationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)setConfirmationView:(IGRetroRegistrationPhoneConfirmationView *)arg1 ;
-(void)backToPhoneNumberButtonTapped;
-(void)verifyCode;
-(void)keyboardWillHide;
-(void)resendCode;
-(id)initWithPhoneNumber:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationPhoneConfirmationViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationPhoneConfirmationViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)phoneNumber;
-(IGRetroRegistrationPhoneConfirmationView *)confirmationView;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end

