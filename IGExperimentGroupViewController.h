
#import <Instagram/IGGroupedTableViewController.h>

@class IGExperimentSpec, IGExperimentSet;

@interface IGExperimentGroupViewController : IGGroupedTableViewController {

	IGExperimentSpec* _experimentSpec;
	IGExperimentSet* _experimentSet;

}
-(id)analyticsModule;
-(void)onCloseTapped;
-(id)groupAtIndexPath:(id)arg1 ;
-(id)initWithExperiment:(id)arg1 experimentSet:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
@end

