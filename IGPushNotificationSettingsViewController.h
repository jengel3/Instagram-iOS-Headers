
#import <Instagram/IGGroupedTableViewController.h>

@class NSMutableDictionary, NSArray;

@interface IGPushNotificationSettingsViewController : IGGroupedTableViewController {

	NSMutableDictionary* _notificationSettings;
	NSArray* _defaultKeys;

}

@property (nonatomic,retain) NSMutableDictionary * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (nonatomic,retain) NSArray * defaultKeys;                                   //@synthesize defaultKeys=_defaultKeys - In the implementation block
-(NSMutableDictionary *)notificationSettings;
-(void)setNotificationSettings:(NSMutableDictionary *)arg1 ;
-(NSArray *)defaultKeys;
-(void)setDefaultKeys:(NSArray *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

