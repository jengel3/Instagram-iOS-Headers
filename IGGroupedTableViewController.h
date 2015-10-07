/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGPlainTableViewController.h>
#import <Instagram/IGGroupedTableViewDataSource.h>

@class IGUser, NSString, IGGroupedTableView;

@interface IGGroupedTableViewController : IGPlainTableViewController <IGGroupedTableViewDataSource> {

	float _tableViewBottomPadding;

}

@property (assign,nonatomic) IGUser * passwordResetUser; 
@property (assign,nonatomic) NSString * passwordResetUserEmail; 
@property (assign,nonatomic) char fetchingResetToken; 
@property (assign,nonatomic) char animateResetVC; 
@property (nonatomic,retain) IGGroupedTableView * tableView; 
@property (assign,nonatomic) float tableViewBottomPadding;                   //@synthesize tableViewBottomPadding=_tableViewBottomPadding - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableViewBottomPadding:(float)arg1 ;
-(void)onFacebookAuthSuccess;
-(float)tableViewBottomPadding;
-(id)subtitleForHeaderInSection:(int)arg1 ;
-(id)titleForFooterInSection:(int)arg1 ;
-(id)titleForUnlinkSection;
-(void)configureUnlinkCell:(id)arg1 ;
-(void)didSelectUnlinkCellForServiceType:(int)arg1 ;
-(void)configureFacebookCell:(id)arg1 ;
-(char)fetchingResetToken;
-(void)getFacebookTokenForForPasswordResetForUser:(id)arg1 ;
-(void)onFacebookAuthCancelled;
-(void)setPasswordResetUser:(IGUser *)arg1 ;
-(void)loginViaFacebook;
-(void)setAnimateResetVC:(char)arg1 ;
-(void)setPasswordResetUserEmail:(NSString *)arg1 ;
-(void)startObservingFacebookAuthNotifications;
-(void)stopObservingFacebookAuthNotifications;
-(void)validateFacebookToken;
-(void)setFetchingResetToken:(char)arg1 ;
-(IGUser *)passwordResetUser;
-(NSString *)passwordResetUserEmail;
-(char)animateResetVC;
-(void)getFacebookTokenForForPasswordResetForUserEmail:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
@end

