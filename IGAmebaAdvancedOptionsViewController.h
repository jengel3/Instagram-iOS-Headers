
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGAmebaThemesDelegate.h>

@class NSString;

@interface IGAmebaAdvancedOptionsViewController : IGGroupedTableViewController <IGAmebaThemesDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)tableView:(id)arg1 optionCellForRow:(int)arg2 ;
-(id)unlinkCellForTableView:(id)arg1 ;
-(void)didSelectThemeRow;
-(void)themesViewController:(id)arg1 didSelectTheme:(id)arg2 ;
-(void)configurePostToCell:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
@end

