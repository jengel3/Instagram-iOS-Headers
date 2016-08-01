
#import <Instagram/IGGroupedTableViewController.h>

@class IGUserSession, IGUserListViewController, NSSet, NSString, IGGroupedTableViewFooterView;

@interface IGAlbumSettingsViewController : IGGroupedTableViewController {

	IGUserSession* _userSession;
	IGUserListViewController* _userListVC;
	NSSet* _blockedUsers;
	NSString* _messagePreference;
	NSString* _pendingMessagePreference;
	IGGroupedTableViewFooterView* _messageReplySettingsFooterView;

}

@property (nonatomic,retain) IGUserSession * userSession;                                                //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGUserListViewController * userListVC;                                      //@synthesize userListVC=_userListVC - In the implementation block
@property (nonatomic,retain) NSSet * blockedUsers;                                                       //@synthesize blockedUsers=_blockedUsers - In the implementation block
@property (nonatomic,copy) NSString * messagePreference;                                                 //@synthesize messagePreference=_messagePreference - In the implementation block
@property (nonatomic,copy) NSString * pendingMessagePreference;                                          //@synthesize pendingMessagePreference=_pendingMessagePreference - In the implementation block
@property (nonatomic,retain) IGGroupedTableViewFooterView * messageReplySettingsFooterView;              //@synthesize messageReplySettingsFooterView=_messageReplySettingsFooterView - In the implementation block
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(void)setBlockedUsers:(NSSet *)arg1 ;
-(void)setMessagePreference:(NSString *)arg1 ;
-(NSSet *)blockedUsers;
-(void)configureMessageRepliesCell:(id)arg1 forRow:(int)arg2 ;
-(IGGroupedTableViewFooterView *)messageReplySettingsFooterView;
-(void)handleIndividualHidesRowSelected;
-(void)handleMessageReplyRowSelected:(int)arg1 ;
-(void)cancelBlockedUserSelection;
-(void)saveBlockedUserSelection;
-(NSString *)messagePreference;
-(NSString *)pendingMessagePreference;
-(void)setPendingMessagePreference:(NSString *)arg1 ;
-(IGUserListViewController *)userListVC;
-(void)setUserListVC:(IGUserListViewController *)arg1 ;
-(void)setMessageReplySettingsFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGUserSession *)userSession;
-(void)setUserSession:(IGUserSession *)arg1 ;
@end

