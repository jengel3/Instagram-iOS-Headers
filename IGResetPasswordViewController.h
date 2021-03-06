
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGRetroRegistrationSMSVerificationViewControllerDelegate.h>
#import <Instagram/IGRetroRegistrationRequestSupportDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGResetPasswordDelegate;
@class IGTableViewInsetInfoView, IGTextField, IGUser, NSString, FBSDKAccessToken;

@interface IGResetPasswordViewController : IGGroupedTableViewController <IGRetroRegistrationSMSVerificationViewControllerDelegate, IGRetroRegistrationRequestSupportDelegate, IGTextFieldDelegate> {

	IGTableViewInsetInfoView* _footerView;
	IGTextField* _passwordField;
	IGTextField* _repeatPasswordField;
	IGUser* _user;
	NSString* _token;
	char _isSubmitting;
	id<IGResetPasswordDelegate> _delegate;
	FBSDKAccessToken* _facebookAccessToken;

}

@property (nonatomic,retain) FBSDKAccessToken * facebookAccessToken;                   //@synthesize facebookAccessToken=_facebookAccessToken - In the implementation block
@property (assign,nonatomic) char isSubmitting;                                        //@synthesize isSubmitting=_isSubmitting - In the implementation block
@property (assign,nonatomic,__weak) id<IGResetPasswordDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)signIn;
-(void)userUpdated:(id)arg1 ;
-(char)validateLengthAllowZeroLength:(char)arg1 ;
-(char)isSubmitting;
-(char)validateMatching;
-(void)requestSignIn;
-(void)setIsSubmitting:(char)arg1 ;
-(void)logIn;
-(FBSDKAccessToken *)facebookAccessToken;
-(id)createSMSVerificationViewControllerWithTwoFactorInfo:(id)arg1 ;
-(void)handleLogInForUser:(id)arg1 withResponse:(id)arg2 isTwoFactorRequired:(char)arg3 twoFactorInfo:(id)arg4 ;
-(void)loginCompletionHandlerForUser:(id)arg1 error:(id)arg2 statusCode:(int)arg3 ;
-(void)smsVerificationViewController:(id)arg1 didRequestSupportWithUsername:(id)arg2 twoFactorIdentifier:(id)arg3 ;
-(void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(char)arg2 ;
-(char)smsVerificationViewControllerIsSwitchingUsers:(id)arg1 ;
-(void)requestSupportViewControllerWantsToDismiss:(id)arg1 ;
-(id)initWithToken:(id)arg1 user:(id)arg2 facebookAccessToken:(id)arg3 ;
-(void)setFacebookAccessToken:(FBSDKAccessToken *)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)setDelegate:(id<IGResetPasswordDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGResetPasswordDelegate>)delegate;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

