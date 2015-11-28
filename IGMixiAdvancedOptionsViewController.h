
#import <Instagram/IGGroupedTableViewController.h>

@protocol IGMixiAdvancedOptionsDelegate;
@class NSArray, NSDictionary, UIBarButtonItem;

@interface IGMixiAdvancedOptionsViewController : IGGroupedTableViewController {

	NSArray* _availablePrivacySettings;
	NSDictionary* _privacySettingsMap;
	int _originalPrivacySetting;
	UIBarButtonItem* _doneButtonItem;
	id<IGMixiAdvancedOptionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGMixiAdvancedOptionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)onCancelModal;
-(void)onDoneTapped:(id)arg1 ;
-(id)tableView:(id)arg1 optionCellForRow:(int)arg2 ;
-(id)unlinkCellForTableView:(id)arg1 ;
-(void)setDelegate:(id<IGMixiAdvancedOptionsDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGMixiAdvancedOptionsDelegate>)delegate;
-(void)viewDidLoad;
@end

