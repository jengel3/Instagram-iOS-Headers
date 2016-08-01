
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>

@class IGTextField, NSArray, NSString;

@interface IGChangePasswordViewController : IGGroupedTableViewController <IGTextFieldDelegate> {

	IGTextField* _currentPasswordField;
	IGTextField* _changedPasswordField;
	IGTextField* _confirmPasswordField;
	NSArray* _fields;
	IGTextField* _currentField;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(void)validateAndSubmit;
-(id)indexPathForAccessoryView:(id)arg1 ;
-(char)scrollToAccessory:(id)arg1 ;
-(char)validateField:(id)arg1 ;
-(char)fieldIsLongEnough:(id)arg1 ;
-(void)showPasswordLengthAlert;
-(char)fieldsMatch;
-(void)showPasswordsDoNotMatchAlert;
-(void)updateDoneButton;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)dismiss;
-(void)setCurrentField:(id)arg1 ;
@end

