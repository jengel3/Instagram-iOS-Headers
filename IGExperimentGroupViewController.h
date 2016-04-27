
#import <Instagram/IGGroupedTableViewController.h>

@class IGExperiment;

@interface IGExperimentGroupViewController : IGGroupedTableViewController {

	IGExperiment* _experiment;

}

@property (nonatomic,retain) IGExperiment * experiment;              //@synthesize experiment=_experiment - In the implementation block
-(void)setExperiment:(IGExperiment *)arg1 ;
-(IGExperiment *)experiment;
-(void)onCloseTapped;
-(id)groupAtIndexPath:(id)arg1 ;
-(id)initWithExperiment:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
@end

