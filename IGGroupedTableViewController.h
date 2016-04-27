
#import <Instagram/IGPlainTableViewController.h>
#import <Instagram/IGGroupedTableViewDataSource.h>

@class IGUser, NSString, IGGroupedTableView;

@interface IGGroupedTableViewController : IGPlainTableViewController <IGGroupedTableViewDataSource> {

	float _tableViewBottomPadding;

}

@property (nonatomic,retain) IGUser * passwordResetUser; 
@property (nonatomic,copy) NSString * passwordResetUserEmail; 
@property (assign,nonatomic) char fetchingResetToken; 
@property (assign,nonatomic) char animateResetVC; 
@property (nonatomic,retain) IGGroupedTableView * tableView; 
@property (assign,nonatomic) float tableViewBottomPadding;                 //@synthesize tableViewBottomPadding=_tableViewBottomPadding - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableViewBottomPadding:(float)arg1 ;
-(id)subtitleForHeaderInSection:(int)arg1 ;
-(id)titleForFooterInSection:(int)arg1 ;
-(float)tableViewBottomPadding;
-(id)titleForUnlinkSection;
-(void)configureUnlinkCell:(id)arg1 ;
-(void)didSelectUnlinkCellForServiceType:(int)arg1 ;
-(void)configureFacebookCell:(id)arg1 ;
-(char)fetchingResetToken;
-(void)getFacebookTokenForForPasswordResetForUser:(id)arg1 ;
-(void)setPasswordResetUser:(IGUser *)arg1 ;
-(void)loginViaFacebook;
-(void)setAnimateResetVC:(char)arg1 ;
-(void)setPasswordResetUserEmail:(NSString *)arg1 ;
-(void)validateFacebookToken:(id)arg1 ;
-(void)setFetchingResetToken:(char)arg1 ;
-(IGUser *)passwordResetUser;
-(NSString *)passwordResetUserEmail;
-(char)animateResetVC;
-(void)getFacebookTokenForForPasswordResetForUserEmail:(id)arg1 ;
-(void)onFacebookAuthSuccess:(id)arg1 ;
-(void)onFacebookAuthCancelled:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
@end

