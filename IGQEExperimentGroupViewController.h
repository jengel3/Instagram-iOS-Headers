
#import <Instagram/IGGroupedTableViewController.h>

@class IGQEExperiment;

@interface IGQEExperimentGroupViewController : IGGroupedTableViewController {

	IGQEExperiment* _experiment;

}

@property (nonatomic,retain) IGQEExperiment * experiment;              //@synthesize experiment=_experiment - In the implementation block
-(id)initWithExperiment:(id)arg1 ;
-(void)setExperiment:(IGQEExperiment *)arg1 ;
-(IGQEExperiment *)experiment;
-(void)onCloseTapped;
-(id)userGroupAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
@end

