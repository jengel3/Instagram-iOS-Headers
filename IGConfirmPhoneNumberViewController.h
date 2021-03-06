
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGSMSConfirmationControllerDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGConfirmPhoneNumberViewControllerDelegate;
@class IGSMSConfirmationController, IGTextField, NSString, IGConfirmPhoneSettings;

@interface IGConfirmPhoneNumberViewController : IGGroupedTableViewController <IGSMSConfirmationControllerDelegate, IGTextFieldDelegate> {

	char _submitting;
	id<IGConfirmPhoneNumberViewControllerDelegate> _delegate;
	IGSMSConfirmationController* _smsConfirmationController;
	IGTextField* _confirmNumberTextField;
	NSString* _phoneNumber;
	NSString* _confirmationCode;
	IGConfirmPhoneSettings* _confirmPhoneSettings;
	int _confirmationType;

}

@property (nonatomic,retain) IGSMSConfirmationController * smsConfirmationController;                     //@synthesize smsConfirmationController=_smsConfirmationController - In the implementation block
@property (nonatomic,retain) IGTextField * confirmNumberTextField;                                        //@synthesize confirmNumberTextField=_confirmNumberTextField - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * confirmationCode;                                                 //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (nonatomic,retain) IGConfirmPhoneSettings * confirmPhoneSettings;                               //@synthesize confirmPhoneSettings=_confirmPhoneSettings - In the implementation block
@property (assign,nonatomic) char submitting;                                                             //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) int confirmationType;                                                        //@synthesize confirmationType=_confirmationType - In the implementation block
@property (assign,nonatomic,__weak) id<IGConfirmPhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setupNavigationItems;
-(IGTextField *)confirmNumberTextField;
-(IGSMSConfirmationController *)smsConfirmationController;
-(void)callUserWithConfirmationCode;
-(int)confirmationType;
-(id)smsPathForConfirmationType;
-(NSString *)confirmationCode;
-(id)robocallPathForConfirmationType;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)checkConfirmationCode;
-(void)smsConfirmationControllerWantsToCallUserWithConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToResendConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToChangePhoneNumber:(id)arg1 ;
-(id)initWithConfirmationType:(int)arg1 confirmPhoneSettings:(id)arg2 phoneNumber:(id)arg3 ;
-(void)setSmsConfirmationController:(IGSMSConfirmationController *)arg1 ;
-(void)setConfirmNumberTextField:(IGTextField *)arg1 ;
-(void)setConfirmPhoneSettings:(IGConfirmPhoneSettings *)arg1 ;
-(void)setConfirmationType:(int)arg1 ;
-(IGConfirmPhoneSettings *)confirmPhoneSettings;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGConfirmPhoneNumberViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGConfirmPhoneNumberViewControllerDelegate>)delegate;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSString *)phoneNumber;
-(void)doneButtonTapped;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

