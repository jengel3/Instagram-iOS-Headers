
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>

@class IGTextField, UIBarButtonItem, NSArray, UIView, UITextField, NSString;

@interface IGProfileInfoViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGTextFieldDelegate, IGProfilePictureHelperDelegate> {

	IGTextField* _nameField;
	IGTextField* _phoneField;
	UIBarButtonItem* _nextButton;
	NSArray* _textFields;
	UIView* _registrationNotesView;
	char _submitting;
	UITextField* _currentField;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(char)disableNavigationGesture;
-(void)onAppBecameActive;
-(void)validateAndSubmit;
-(id)registrationNotesView;
-(void)nextButtonPressed;
-(void)submit:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCurrentField:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
@end

