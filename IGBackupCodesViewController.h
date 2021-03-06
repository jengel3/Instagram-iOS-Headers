
#import <Instagram/IGGroupedTableViewController.h>

@class NSArray, IGGroupedTableViewFooterView;

@interface IGBackupCodesViewController : IGGroupedTableViewController {

	char _showBackupCodeAlert;
	char _submitting;
	NSArray* _backupCodes;
	IGGroupedTableViewFooterView* _backupCodeFooterView;
	IGGroupedTableViewFooterView* _actionsFooterView;

}

@property (nonatomic,retain) NSArray * backupCodes;                                            //@synthesize backupCodes=_backupCodes - In the implementation block
@property (nonatomic,retain) IGGroupedTableViewFooterView * backupCodeFooterView;              //@synthesize backupCodeFooterView=_backupCodeFooterView - In the implementation block
@property (nonatomic,retain) IGGroupedTableViewFooterView * actionsFooterView;                 //@synthesize actionsFooterView=_actionsFooterView - In the implementation block
@property (assign,nonatomic) char showBackupCodeAlert;                                         //@synthesize showBackupCodeAlert=_showBackupCodeAlert - In the implementation block
@property (assign,nonatomic) char submitting;                                                  //@synthesize submitting=_submitting - In the implementation block
-(id)analyticsModule;
-(char)showBackupCodeAlert;
-(void)setShowBackupCodeAlert:(char)arg1 ;
-(void)backupCodesScreenshot;
-(NSArray *)backupCodes;
-(void)saveImageToLibrary:(id)arg1 ;
-(void)configureBackupCodeCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureActionCell:(id)arg1 forRow:(int)arg2 ;
-(IGGroupedTableViewFooterView *)backupCodeFooterView;
-(IGGroupedTableViewFooterView *)actionsFooterView;
-(void)selectedBackupCodeRow:(int)arg1 ;
-(void)selectedBackupCodeActionRow:(int)arg1 ;
-(void)fetchNewBackupCodes;
-(void)copyBackupCodesToClipboard;
-(void)dataFetchedWithResponse:(id)arg1 ;
-(void)dataFetchFailedWithError:(id)arg1 ;
-(void)updateTableViewAfterFetch;
-(void)setBackupCodes:(NSArray *)arg1 ;
-(id)initWithBackupCodes:(id)arg1 showBackupCodeAlert:(char)arg2 ;
-(void)setBackupCodeFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(void)setActionsFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

