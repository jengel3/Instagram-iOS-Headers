
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGRegistrationProfilePicHeaderViewDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGSuggestedUsernamesViewControllerDelegate.h>
#import <Instagram/IGUsernameViewControllerProtocol.h>

@protocol IGUsernameViewControllerDelegate;
@class NSDictionary, NSString, IGTextField, IGButton, IGRegistrationProfilePicHeaderView, UIBarButtonItem, NSArray, UIView, NSTimer, UITextField, UIColor, IGRequest;

@interface IGUsernameViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGRegistrationProfilePicHeaderViewDelegate, IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGSuggestedUsernamesViewControllerDelegate, IGUsernameViewControllerProtocol> {

	IGTextField* _usernameField;
	IGTextField* _passwordField;
	IGTextField* _emailField;
	IGButton* _suggestUsernamesButton;
	IGRegistrationProfilePicHeaderView* _profileHeaderView;
	UIBarButtonItem* _nextButton;
	NSArray* _textFields;
	UIView* _registrationNotesView;
	char _isEmailConfirmed;
	char _downloadingProfilePicture;
	char _connectingWithFacebook;
	char _connectedWithFacebook;
	char _submitting;
	char _shouldAutofillUsernameWithEmail;
	char _proactivelyCheckUsername;
	NSTimer* _usernameCheckTimer;
	UITextField* _currentField;
	UIColor* _defaultTextFieldTextColor;
	NSTimer* _endEmailInputDetectionTimer;
	NSString* _userDisplayName;
	char _usernameCheckIsValid;
	char _showsSuggestUsernames;
	unsigned _mode;
	NSDictionary* _facebookUserInfo;
	id<IGUsernameViewControllerDelegate> _delegate;
	NSString* _email;
	IGRequest* _accountCreationRequest;
	NSArray* _currentUsernameSuggestions;

}

@property (assign,nonatomic,__weak) IGRequest * accountCreationRequest;                         //@synthesize accountCreationRequest=_accountCreationRequest - In the implementation block
@property (assign,nonatomic) char showsSuggestUsernames;                                        //@synthesize showsSuggestUsernames=_showsSuggestUsernames - In the implementation block
@property (nonatomic,copy) NSArray * currentUsernameSuggestions;                                //@synthesize currentUsernameSuggestions=_currentUsernameSuggestions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned mode;                                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) NSDictionary * facebookUserInfo;                                   //@synthesize facebookUserInfo=_facebookUserInfo - In the implementation block
@property (nonatomic,retain) NSString * email;                                                  //@synthesize email=_email - In the implementation block
@property (assign,nonatomic,__weak) id<IGUsernameViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)onAppBecameActive;
-(void)validateAndSubmit;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 ;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(void)profilePictureHelperWillStartDownloadingProfilePicture:(id)arg1 ;
-(id)registrationNotesView;
-(void)setFacebookUserInfo:(NSDictionary *)arg1 ;
-(void)profileCelldidTapNotMe:(id)arg1 ;
-(void)suggestedUsernamesViewControllerDidCancel:(id)arg1 ;
-(void)suggestedUsernamesViewController:(id)arg1 didPickUsername:(id)arg2 index:(unsigned)arg3 ;
-(void)onSuggestUsernames;
-(void)pasteFacebookUserInfo;
-(IGRequest *)accountCreationRequest;
-(void)setCurrentUsernameSuggestions:(NSArray *)arg1 ;
-(char)showsSuggestUsernames;
-(id)makeSuggestionButtonCellWithTextField:(id)arg1 ;
-(void)configureRequiredCell:(id)arg1 forRow:(int)arg2 ;
-(void)checkUsername;
-(void)autoFillUsernameWithEmailUsername;
-(void)startOrRestartUsernameCheckTimer;
-(void)setShowsSuggestUsernames:(char)arg1 ;
-(NSArray *)currentUsernameSuggestions;
-(void)getFacebookUserInfo;
-(void)logoutAndUnlinkFacebook;
-(void)setAccountCreationRequest:(IGRequest *)arg1 ;
-(void)switchToEmailFlowClearFields:(char)arg1 ;
-(NSDictionary *)facebookUserInfo;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGUsernameViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<IGUsernameViewControllerDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)dictionaryRepresentation;
-(void)setCurrentField:(id)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)submit;
@end

