
#import <Instagram/IGGroupedTableViewController.h>

@interface IGServiceLinkUnlinkViewController : IGGroupedTableViewController {

	int _serviceType;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)setServiceType:(int)arg1 ;
@end

