
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGRetroRegistrationSMSVerificationViewControllerDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGResetPasswordDelegate;
@class IGTableViewInsetInfoView, IGTextField, IGUser, NSString;

@interface IGResetPasswordViewController : IGGroupedTableViewController <IGRetroRegistrationSMSVerificationViewControllerDelegate, IGTextFieldDelegate> {

	IGTableViewInsetInfoView* _footerView;
	IGTextField* _passwordField;
	IGTextField* _repeatPasswordField;
	IGUser* _user;
	NSString* _token;
	id<IGResetPasswordDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGResetPasswordDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToken:(id)arg1 user:(id)arg2 ;
-(void)userUpdated:(id)arg1 ;
-(void)signIn;
-(char)validateLengthAllowZeroLength:(char)arg1 ;
-(char)validateMatching;
-(void)smsVerificationViewController:(id)arg1 wantsToPopViewControllerAnimated:(char)arg2 ;
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

