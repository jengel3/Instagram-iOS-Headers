
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Instagram/IGRageShakeViewControllerDelegate.h>
#import <Instagram/IGBusinessConversionViewControllerDelegate.h>

@protocol IGBusinessConversionDelegate;
@class NSArray, IGGroupedTableViewFooterView, IGSwitch, IGUserSession, NSString;

@interface IGAccountSettingsViewController : IGGroupedTableViewController <UIAlertViewDelegate, IGRageShakeViewControllerDelegate, IGBusinessConversionViewControllerDelegate> {

	NSArray* _followSectionRowTypes;
	NSArray* _accountSectionRowTypes;
	NSArray* _aboutSectionRowTypes;
	NSArray* _settingSectionRowTypes;
	NSArray* _sessionSectionRowTypes;
	NSArray* _developerSectionRowTypes;
	id _paymentsNotificationObserver;
	char _isSwitchingAccount;
	id<IGBusinessConversionDelegate> _delegate;
	IGGroupedTableViewFooterView* _privacySettingsFooterView;
	IGSwitch* _privateAccountSwitch;
	IGUserSession* _userSession;

}

@property (nonatomic,retain) IGGroupedTableViewFooterView * privacySettingsFooterView;              //@synthesize privacySettingsFooterView=_privacySettingsFooterView - In the implementation block
@property (nonatomic,readonly) IGSwitch * privateAccountSwitch;                                     //@synthesize privateAccountSwitch=_privateAccountSwitch - In the implementation block
@property (assign,getter=isPrivateAccount,nonatomic) char privateAccount; 
@property (assign,nonatomic) char isSwitchingAccount;                                               //@synthesize isSwitchingAccount=_isSwitchingAccount - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                         //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeSettings;
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(void)didDismissRageShakeViewController:(id)arg1 didSendReport:(char)arg2 ;
-(void)presentReportThankYouAlert;
-(void)businessConversionViewControllerDidDismiss:(id)arg1 ;
-(void)businessConversionViewControllerDidCompleteFlow:(id)arg1 ;
-(IGSwitch *)privateAccountSwitch;
-(void)setPrivateAccount:(char)arg1 ;
-(char)isPrivateAccount;
-(char)shouldShowAboutSponsoredPost;
-(void)updateRows;
-(id)aboutSectionRows;
-(id)accountSectionRows;
-(id)followSectionRows;
-(id)settingSectionRows;
-(id)sessionSectionRows;
-(id)developerSectionRows;
-(int)followRowTypeForRow:(int)arg1 ;
-(void)logTapEventForServiceType:(int)arg1 ;
-(void)inviteFBFriends;
-(int)accountRowForRow:(int)arg1 ;
-(void)sendChangePasswordRequest;
-(void)setIsSwitchingAccount:(char)arg1 ;
-(int)settingRowForRow:(int)arg1 ;
-(int)sessionRowForRow:(int)arg1 ;
-(void)showLogoutFromCurrentUserAlertViewForCellWithIndexPath:(id)arg1 ;
-(void)startAdRating;
-(void)showLogoutFromAllUsersAlertViewForCellWithIndexPath:(id)arg1 ;
-(int)developerRowForRow:(int)arg1 ;
-(void)saveAccountWithData:(id)arg1 ;
-(void)showSimpleLogoutDialogWithIndexPath:(id)arg1 logoutBlock:(/*^block*/id)arg2 hasMultipleAccounts:(char)arg3 ;
-(void)showSSOCheckboxDialogPrechecked:(char)arg1 indexPath:(id)arg2 logoutBlock:(/*^block*/id)arg3 ;
-(void)showDoubleDialogWithIndexPath:(id)arg1 logoutBlock:(/*^block*/id)arg2 ;
-(void)presentReportProblemAlert;
-(id)appVersionString;
-(void)tableView:(id)arg1 didSelectFollowRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectAccountRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectSettingsRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectSupportRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectAboutRow:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectSessionRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectDeveloperRowAtIndexPath:(id)arg2 ;
-(id)imageForServiceType:(int)arg1 ;
-(void)configureCell:(id)arg1 forServiceType:(int)arg2 ;
-(char)isSwitchingAccount;
-(IGGroupedTableViewFooterView *)privacySettingsFooterView;
-(id)configureFollowCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureAccountCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureSettingsCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureAboutCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureSupportCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureSessionCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureDeveloperCell:(id)arg1 forRow:(int)arg2 ;
-(void)setPrivacySettingsFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(void)setDelegate:(id<IGBusinessConversionDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<IGBusinessConversionDelegate>)delegate;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(IGUserSession *)userSession;
-(void)dismissViewController;
@end

