/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:11 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGChangeEmailViewControllerDelegate.h>
#import <Instagram/IGChangePhoneNumberViewControllerDelegate.h>
#import <Instagram/IGConfirmPhoneNumberViewControllerDelegate.h>

@class IGUserProfileGroupedTableViewCell, IGInsetLabel, IGButton, NSDateFormatter, UIBarButtonItem, NSArray, UITextField, NSString;

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
	NSString* _countryNumber;
	NSString* _phoneNumber;

}

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
-(void)fetchUserData;
-(void)confirmEmailDismissedWithSuccess:(char)arg1 forEmail:(id)arg2 ;
-(void)validateAndSubmit;
-(id)indexPathForAccessoryView:(id)arg1 ;
-(char)scrollToAccessory:(id)arg1 ;
-(void)setCountryNumber:(NSString *)arg1 ;
-(NSString *)countryNumber;
-(void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 ;
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 ;
-(void)removeConfirmEmailButton;
-(void)setEmptyEmailConfirmed:(char)arg1 ;
-(char)showConfirmEmailButton;
-(void)confirmEmailButtonTapped;
-(void)configureRequiredCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(void)sendSMSCodeToPhoneNumber:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(char)emptyEmailConfirmed;
-(id)formData;
-(void)dataFetchedWithDictionary:(id)arg1 ;
-(void)dataFetchFailed:(id)arg1 ;
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

