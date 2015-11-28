
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGChangeEmailViewControllerDelegate.h>
#import <Instagram/IGChangePhoneNumberViewControllerDelegate.h>
#import <Instagram/IGConfirmPhoneNumberViewControllerDelegate.h>

@class IGUserProfileGroupedTableViewCell, IGInsetLabel, IGButton, NSDateFormatter, UIBarButtonItem, NSArray, UITextField, UIImage, NSString;

@interface IGEditProfileViewController : IGGroupedTableViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGGrowingTextViewDelegate, IGChangeEmailViewControllerDelegate, IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate> {

	IGUserProfileGroupedTableViewCell* _profileCell;
	IGInsetLabel* _characterCountLabel;
	IGButton* _confirmEmailButton;
	NSDateFormatter* _dateFormatter;
	UIBarButtonItem* _doneButton;
	NSArray* _textFields;
	UITextField* _currentField;
	char _hasUnsavedChanges;
	char _needEmailConfirm;
	char _confirmedOnceInSession;
	int _currentBioHeight;
	int _dataState;
	int _profilePictureState;
	char _emptyEmailConfirmed;
	char _submitting;
	UIImage* _profilePicture;
	NSString* _countryNumber;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) UIImage * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) NSString * countryNumber;              //@synthesize countryNumber=_countryNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) char emptyEmailConfirmed;              //@synthesize emptyEmailConfirmed=_emptyEmailConfirmed - In the implementation block
@property (assign,nonatomic) char submitting;                       //@synthesize submitting=_submitting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onCancelModal;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(char)growingTextViewShouldAnimateOnHeightChange:(id)arg1 ;
-(char)prefersTabBarHidden;
-(UIImage *)profilePicture;
-(void)setProfilePicture:(UIImage *)arg1 ;
-(void)fetchUserData;
-(void)dataFetchedWithDictionary:(id)arg1 ;
-(void)dataFetchFailed:(id)arg1 ;
-(void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 ;
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2 ;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1 ;
-(NSString *)countryNumber;
-(void)setCountryNumber:(NSString *)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)confirmEmailDismissedWithSuccess:(char)arg1 forEmail:(id)arg2 ;
-(void)validateAndSubmit;
-(id)indexPathForAccessoryView:(id)arg1 ;
-(char)scrollToAccessory:(id)arg1 ;
-(void)removeConfirmEmailButton;
-(void)setEmptyEmailConfirmed:(char)arg1 ;
-(char)showConfirmEmailButton;
-(void)confirmEmailButtonTapped;
-(void)configureRequiredCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(void)sendSMSCodeToPhoneNumber:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(char)emptyEmailConfirmed;
-(id)formData;
-(int)pickerIndexForGender:(int)arg1 ;
-(void)configureConfirmEmailButton;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 ;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(int)genderForPickerIndex:(int)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)keyboardDidShow:(id)arg1 ;
-(NSString *)phoneNumber;
-(void)setCurrentField:(id)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)submit;
@end

