
#import <UIKit/UIViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGConfirmPhoneManagerDelegate.h>

@protocol IGRetroRegistrationSMSVerificationViewControllerDelegate;
@class IGRetroRegistrationSMSVerificationView, NSString, IGConfirmPhoneManager, UITapGestureRecognizer, FBSDKAccessToken;

@interface IGRetroRegistrationSMSVerificationViewController : UIViewController <IGCoreTextLinkHandler, UIGestureRecognizerDelegate, IGConfirmPhoneManagerDelegate> {

	char _submitting;
	id<IGRetroRegistrationSMSVerificationViewControllerDelegate> _delegate;
	IGRetroRegistrationSMSVerificationView* _smsVerificationView;
	NSString* _username;
	NSString* _obfuscatedPhoneNumber;
	int _smsResendDelay;
	NSString* _twoFactorIdentifier;
	IGConfirmPhoneManager* _confirmPhoneManager;
	UITapGestureRecognizer* _tapGesture;
	FBSDKAccessToken* _facebookAccessToken;

}

@property (assign,nonatomic,__weak) id<IGRetroRegistrationSMSVerificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationSMSVerificationView * smsVerificationView;                              //@synthesize smsVerificationView=_smsVerificationView - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                                                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * obfuscatedPhoneNumber;                                                   //@synthesize obfuscatedPhoneNumber=_obfuscatedPhoneNumber - In the implementation block
@property (nonatomic,readonly) int smsResendDelay;                                                                      //@synthesize smsResendDelay=_smsResendDelay - In the implementation block
@property (nonatomic,copy) NSString * twoFactorIdentifier;                                                              //@synthesize twoFactorIdentifier=_twoFactorIdentifier - In the implementation block
@property (nonatomic,readonly) IGConfirmPhoneManager * confirmPhoneManager;                                             //@synthesize confirmPhoneManager=_confirmPhoneManager - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                                       //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * facebookAccessToken;                                                    //@synthesize facebookAccessToken=_facebookAccessToken - In the implementation block
@property (assign,nonatomic) char submitting;                                                                           //@synthesize submitting=_submitting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)confirmPhoneManager:(id)arg1 didFireWithSecondsLeft:(int)arg2 ;
-(int)smsResendDelay;
-(void)setSubmitting:(char)arg1 ;
-(char)submitting;
-(FBSDKAccessToken *)facebookAccessToken;
-(void)setFacebookAccessToken:(FBSDKAccessToken *)arg1 ;
-(void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3 ;
-(id)initWithTwoFactorInfo:(id)arg1 facebookAccessToken:(id)arg2 ;
-(id)createIndicatorViewAndAddToLoginButton;
-(void)removeIndicatorViewFromLoginButton:(id)arg1 ;
-(void)handleLoginErrors:(id)arg1 ;
-(NSString *)twoFactorIdentifier;
-(void)setTwoFactorIdentifier:(NSString *)arg1 ;
-(IGRetroRegistrationSMSVerificationView *)smsVerificationView;
-(NSString *)obfuscatedPhoneNumber;
-(void)confirmCodeButtonPressed;
-(void)keyboardWillDisappear;
-(IGConfirmPhoneManager *)confirmPhoneManager;
-(void)loginWithTwoFactorIdentifier;
-(void)resendTwoFactorSMS;
-(void)updateRobocallFooterWithSecondsLeft:(int)arg1 ;
-(void)robocallTwoFactorCode;
-(void)setSmsVerificationView:(IGRetroRegistrationSMSVerificationView *)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationSMSVerificationViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationSMSVerificationViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)backButtonTapped;
-(char)prefersNavigationBarHidden;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)keyboardWillShow:(id)arg1 ;
@end

