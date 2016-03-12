
#import <UIKit/UIViewController.h>
#import <Instagram/IGAccountRecoveryEmailConfirmationViewDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGAccountRecoveryEmailConfirmationControllerDelegate;
@class IGAccountRecoveryEmailConfirmationView, NSString;

@interface IGAccountRecoveryEmailConfirmationViewController : UIViewController <IGAccountRecoveryEmailConfirmationViewDelegate, IGTextFieldDelegate> {

	id<IGAccountRecoveryEmailConfirmationControllerDelegate> _delegate;
	IGAccountRecoveryEmailConfirmationView* _confirmationView;
	NSString* _email;

}

@property (assign,nonatomic,__weak) id<IGAccountRecoveryEmailConfirmationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAccountRecoveryEmailConfirmationView * confirmationView;                             //@synthesize confirmationView=_confirmationView - In the implementation block
@property (nonatomic,copy) NSString * email;                                                                        //@synthesize email=_email - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)backgroundTapped;
-(void)accountRecoveryEmailConfirmationViewDelegateDidTapNextButton:(id)arg1 ;
-(void)accountRecoveryEmailConfirmationViewDelegateDidTapResendCodeButton:(id)arg1 ;
-(void)accountRecoveryEmailConfirmationViewDelegateDidTapLoginInsteadButton:(id)arg1 ;
-(void)setConfirmationView:(IGAccountRecoveryEmailConfirmationView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGAccountRecoveryEmailConfirmationControllerDelegate>)arg1 ;
-(id<IGAccountRecoveryEmailConfirmationControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)initWithEmail:(id)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(IGAccountRecoveryEmailConfirmationView *)confirmationView;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end

