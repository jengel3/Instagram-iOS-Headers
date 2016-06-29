
#import <Instagram/IGGroupedTableViewController.h>

@interface IGDataUsageSettingsViewController : IGGroupedTableViewController {

	char _initialVideoPreloadSetting;

}
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

