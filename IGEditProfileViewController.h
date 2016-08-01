
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGChangeEmailViewControllerDelegate.h>
#import <Instagram/IGChangePhoneNumberViewControllerDelegate.h>
#import <Instagram/IGConfirmPhoneNumberViewControllerDelegate.h>

@protocol IGEditProfileViewControllerDelegate;
@class IGUserProfileGroupedTableViewCell, IGInsetLabel, NSDateFormatter, UIBarButtonItem, NSArray, UITextField, IGUserSession, NSNumber, UIImage, NSString;

@interface IGEditProfileViewController : IGGroupedTableViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGGrowingTextViewDelegate, IGChangeEmailViewControllerDelegate, IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate> {

	IGUserProfileGroupedTableViewCell* _profileCell;
	IGInsetLabel* _characterCountLabel;
	NSDateFormatter* _dateFormatter;
	UIBarButtonItem* _doneButton;
	NSArray* _textFields;
	UITextField* _currentField;
	char _hasUnsavedChanges;
	int _currentBioHeight;
	int _dataState;
	int _profilePictureState;
	char _ttiLogged;
	char _emptyEmailConfirmed;
	char _submitting;
	char _needPhoneConfirm;
	char _needEmailConfirm;
	char _confirmedEmailInSession;
	char _confirmedPhoneInSession;
	id<IGEditProfileViewControllerDelegate> _delegate;
	IGUserSession* _userSession;
	NSNumber* _startTime;
	UIImage* _profilePicture;
	int _profilePictureOption;
	NSString* _phoneNumber;
	double _viewDidAppearTime;
	double _ttiTime;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) NSNumber * startTime;                                               //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double viewDidAppearTime;                                             //@synthesize viewDidAppearTime=_viewDidAppearTime - In the implementation block
@property (assign,nonatomic) double ttiTime;                                                       //@synthesize ttiTime=_ttiTime - In the implementation block
@property (assign,nonatomic) char ttiLogged;                                                       //@synthesize ttiLogged=_ttiLogged - In the implementation block
@property (nonatomic,retain) UIImage * profilePicture;                                             //@synthesize profilePicture=_profilePicture - In the implementation block
@property (assign,nonatomic) int profilePictureOption;                                             //@synthesize profilePictureOption=_profilePictureOption - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) char emptyEmailConfirmed;                                             //@synthesize emptyEmailConfirmed=_emptyEmailConfirmed - In the implementation block
@property (assign,nonatomic) char submitting;                                                      //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) char needPhoneConfirm;                                                //@synthesize needPhoneConfirm=_needPhoneConfirm - In the implementation block
@property (assign,nonatomic) char needEmailConfirm;                                                //@synthesize needEmailConfirm=_needEmailConfirm - In the implementation block
@property (assign,nonatomic) char confirmedEmailInSession;                                         //@synthesize confirmedEmailInSession=_confirmedEmailInSession - In the implementation block
@property (assign,nonatomic) char confirmedPhoneInSession;                                         //@synthesize confirmedPhoneInSession=_confirmedPhoneInSession - In the implementation block
@property (assign,nonatomic,__weak) id<IGEditProfileViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(id)initWithUserSession:(id)arg1 ;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(void)onCancelModal;
-(void)fetchUserData;
-(void)confirmEmailDismissedWithSuccess:(char)arg1 forEmail:(id)arg2 ;
-(void)validateAndSubmit;
-(id)indexPathForAccessoryView:(id)arg1 ;
-(char)scrollToAccessory:(id)arg1 ;
-(void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned)arg4 ;
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2 ;
-(void)logTTITimes;
-(char)needEmailConfirm;
-(char)confirmedEmailInSession;
-(void)setConfirmedEmailInSession:(char)arg1 ;
-(void)removeConfirmEmailButton;
-(char)showConfirmEmailButton;
-(char)showConfirmPhoneButton;
-(void)setEmptyEmailConfirmed:(char)arg1 ;
-(char)needPhoneConfirm;
-(char)confirmedPhoneInSession;
-(void)setConfirmedPhoneInSession:(char)arg1 ;
-(void)sendSMSCodeToPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 ;
-(void)confirmEmailButtonTapped;
-(void)confirmPhoneButtonTapped;
-(void)configureRequiredCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(void)removeConfirmPhoneButton;
-(char)emptyEmailConfirmed;
-(void)setParametersFor:(id)arg1 ;
-(void)dataFetchedWithDictionary:(id)arg1 ;
-(void)dataFetchFailed:(id)arg1 ;
-(int)pickerIndexForGender:(int)arg1 ;
-(void)setNeedEmailConfirm:(char)arg1 ;
-(void)setNeedPhoneConfirm:(char)arg1 ;
-(double)viewDidAppearTime;
-(void)setViewDidAppearTime:(double)arg1 ;
-(double)ttiTime;
-(void)setTtiTime:(double)arg1 ;
-(char)ttiLogged;
-(void)setTtiLogged:(char)arg1 ;
-(int)profilePictureOption;
-(void)setProfilePictureOption:(int)arg1 ;
-(UIImage *)profilePicture;
-(void)setProfilePicture:(UIImage *)arg1 ;
-(id)initWithUserSession:(id)arg1 startTime:(id)arg2 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(int)arg3 ;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(void)profilePictureHelperWantsEditProfileViewControllerDismissed;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGEditProfileViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<IGEditProfileViewControllerDelegate>)delegate;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)dismiss;
-(NSString *)phoneNumber;
-(NSNumber *)startTime;
-(IGUserSession *)userSession;
-(void)setCurrentField:(id)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)submit;
@end

