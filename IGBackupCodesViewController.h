
#import <Instagram/IGGroupedTableViewController.h>

@class NSArray, IGGroupedTableViewFooterView;

@interface IGBackupCodesViewController : IGGroupedTableViewController {

	char _submitting;
	NSArray* _backupCodes;
	IGGroupedTableViewFooterView* _backupCodeFooterView;

}

@property (nonatomic,retain) NSArray * backupCodes;                                            //@synthesize backupCodes=_backupCodes - In the implementation block
@property (nonatomic,retain) IGGroupedTableViewFooterView * backupCodeFooterView;              //@synthesize backupCodeFooterView=_backupCodeFooterView - In the implementation block
@property (assign,nonatomic) char submitting;                                                  //@synthesize submitting=_submitting - In the implementation block
-(void)setBackupCodes:(NSArray *)arg1 ;
-(NSArray *)backupCodes;
-(id)initWithBackupCodes:(id)arg1 ;
-(void)saveImageToLibrary:(id)arg1 ;
-(char)submitting;
-(void)configureBackupCodeCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureActionCell:(id)arg1 forRow:(int)arg2 ;
-(IGGroupedTableViewFooterView *)backupCodeFooterView;
-(void)selectedBackupCodeRow:(int)arg1 ;
-(void)selectedBackupCodeActionRow:(int)arg1 ;
-(void)fetchNewBackupCodes;
-(void)copyBackupCodesToClipboard;
-(void)backupCodesScreenshot;
-(void)setSubmitting:(char)arg1 ;
-(void)dataFetchedWithResponse:(id)arg1 ;
-(void)dataFetchFailedWithError:(id)arg1 ;
-(void)updateTableViewAfterFetch;
-(void)setBackupCodeFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
@end

