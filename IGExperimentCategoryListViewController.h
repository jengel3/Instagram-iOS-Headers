
#import <Instagram/IGPlainTableViewController.h>

@class IGExperimentSet, NSDictionary, IGSectionInfo;

@interface IGExperimentCategoryListViewController : IGPlainTableViewController {

	IGExperimentSet* _experimentSet;
	NSDictionary* _categoryToExperimentSpecList;
	IGSectionInfo* _categorySection;

}
-(id)analyticsModule;
-(void)configureCell:(id)arg1 forExperimentCategory:(int)arg2 ;
-(void)didSelectExperimentCategory:(int)arg1 ;
-(id)initWithTitle:(id)arg1 experimentSet:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
@end

