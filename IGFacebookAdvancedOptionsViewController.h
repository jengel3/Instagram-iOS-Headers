
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGFacebookPagesViewControllerDelegate.h>

@class NSMutableArray, NSString;

@interface IGFacebookAdvancedOptionsViewController : IGGroupedTableViewController <IGFacebookPagesViewControllerDelegate> {

	NSMutableArray* _availablePages;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)configurePostToCell:(id)arg1 ;
-(id)tableView:(id)arg1 optionCellForIndexPath:(id)arg2 ;
-(id)unlinkCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)didSelectPostToRow;
-(void)pagesViewController:(id)arg1 didSelectAccountNamed:(id)arg2 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
@end

