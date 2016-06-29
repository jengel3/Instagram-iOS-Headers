
#import <Instagram/IGPlainTableViewController.h>

@class NSArray, IGExperimentSet;

@interface IGExperimentListViewController : IGPlainTableViewController {

	NSArray* _experiments;
	IGExperimentSet* _experimentSet;

}
-(id)analyticsModule;
-(id)initWithTitle:(id)arg1 experiments:(id)arg2 experimentSet:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
@end

