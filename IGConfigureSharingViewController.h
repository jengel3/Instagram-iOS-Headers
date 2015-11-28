
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGShareServiceConfigureManagerDelegate.h>

@class NSArray, IGShareServiceConfigureManager, NSString;

@interface IGConfigureSharingViewController : IGGroupedTableViewController <IGShareServiceConfigureManagerDelegate> {

	NSArray* _services;
	IGShareServiceConfigureManager* _configureManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForShareConfiguration;
-(id)shareServiceAtRow:(int)arg1 ;
-(void)configureCell:(id)arg1 forShareService:(id)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
@end

