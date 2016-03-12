
#import <Instagram/IGPlainTableViewController.h>

@class NSArray;

@interface IGExperimentsListViewController : IGPlainTableViewController {

	NSArray* _experiments;

}

@property (nonatomic,readonly) NSArray * experiments;              //@synthesize experiments=_experiments - In the implementation block
-(NSArray *)experiments;
-(id)initWithTitle:(id)arg1 experiments:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
@end

