
#import <Instagram/IGGroupedTableViewController.h>

@class UIActivityIndicatorView;

@interface IGProfanityFilterViewController : IGGroupedTableViewController {

	char _initialProfanityFilterSetting;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;               //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) char initialProfanityFilterSetting;              //@synthesize initialProfanityFilterSetting=_initialProfanityFilterSetting - In the implementation block
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(char)initialProfanityFilterSetting;
-(void)setInitialProfanityFilterSetting:(char)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

