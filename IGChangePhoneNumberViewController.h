
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGPhoneNumberTextFieldDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGChangePhoneNumberViewControllerDelegate;
@class IGPhoneNumberTextField, NSString;

@interface IGChangePhoneNumberViewController : IGGroupedTableViewController <IGCountryCodeViewControllerDelegate, IGPhoneNumberTextFieldDelegate, IGTextFieldDelegate> {

	char _showContactOptions;
	id<IGChangePhoneNumberViewControllerDelegate> _delegate;
	unsigned _selectedContactPreference;
	IGPhoneNumberTextField* _phoneNumberTextField;
	NSString* _countryNumber;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) IGPhoneNumberTextField * phoneNumberTextField;                              //@synthesize phoneNumberTextField=_phoneNumberTextField - In the implementation block
@property (nonatomic,copy) NSString * countryNumber;                                                     //@synthesize countryNumber=_countryNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) char showContactOptions;                                                    //@synthesize showContactOptions=_showContactOptions - In the implementation block
@property (assign,nonatomic,__weak) id<IGChangePhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned selectedContactPreference;                                         //@synthesize selectedContactPreference=_selectedContactPreference - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)parsePhoneNumber;
-(void)setupNavigationItems;
-(void)setUpTextField;
-(void)setPhoneNumberTextField:(IGPhoneNumberTextField *)arg1 ;
-(IGPhoneNumberTextField *)phoneNumberTextField;
-(NSString *)countryNumber;
-(void)nextButtonTapped;
-(char)showContactOptions;
-(void)configureContactCell:(id)arg1 forIndexPath:(id)arg2 ;
-(unsigned)contactPreferenceForRow:(int)arg1 ;
-(void)setSelectedContactPreference:(unsigned)arg1 ;
-(unsigned)selectedContactPreference;
-(void)setCountryNumber:(NSString *)arg1 ;
-(void)textFieldDidTapCountryButton:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 showContactOptions:(char)arg2 ;
-(id)initWithNationalPhoneNumber:(id)arg1 countryCode:(id)arg2 selectedContactPreference:(unsigned)arg3 showContactOptions:(char)arg4 ;
-(void)setRightButtonString:(id)arg1 ;
-(void)setShowContactOptions:(char)arg1 ;
-(void)setDelegate:(id<IGChangePhoneNumberViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGChangePhoneNumberViewControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

