
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGDirectToggleTableViewCellDelegate.h>

@protocol IGDirectThreadInfoDelegate;
@class IGDirectThread, IGUserSession, IGTextField, NSArray, IGDirectThreadService, IGDirectInboxService, NSString;

@interface IGDirectThreadInfoViewController : IGGroupedTableViewController <IGTextFieldDelegate, IGDirectToggleTableViewCellDelegate> {

	char _isLoading;
	id<IGDirectThreadInfoDelegate> _delegate;
	IGDirectThread* _thread;
	IGUserSession* _userSession;
	IGTextField* _nameField;
	NSArray* _sections;
	IGDirectThreadService* _threadService;
	IGDirectInboxService* _inboxService;

}

@property (nonatomic,retain) IGDirectThread * thread;                                     //@synthesize thread=_thread - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                               //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGTextField * nameField;                                     //@synthesize nameField=_nameField - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) char isLoading;                                              //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) IGDirectThreadService * threadService;                     //@synthesize threadService=_threadService - In the implementation block
@property (nonatomic,readonly) IGDirectInboxService * inboxService;                       //@synthesize inboxService=_inboxService - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadID; 
@property (assign,nonatomic,__weak) id<IGDirectThreadInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(IGDirectThreadService *)threadService;
-(void)threadUpdated;
-(id)sectionsBasedOnThread:(id)arg1 ;
-(int)itemTypeForIndexPath:(id)arg1 ;
-(id)userForMemberSectionAtIndexPath:(id)arg1 ;
-(void)showLeaveActionMenu;
-(id)initWithThread:(id)arg1 userSession:(id)arg2 ;
-(void)leaveThread;
-(char)popToIGDirectMainInboxViewController;
-(id)cellForGroupNameAtIndexPath:(id)arg1 ;
-(id)cellForMuteAtIndexPath:(id)arg1 ;
-(id)cellForUser:(id)arg1 atIndexPath:(id)arg2 ;
-(id)hideThreadCellAtIndexPath:(id)arg1 ;
-(id)addPeopleCellAtIndexPath:(id)arg1 ;
-(void)updateDoneButton:(char)arg1 ;
-(void)finishEditingName;
-(char)nameIsTooLong;
-(void)updateThreadNameToName:(id)arg1 ;
-(IGDirectInboxService *)inboxService;
-(void)cell:(id)arg1 didSwitchValueTo:(char)arg2 ;
-(void)setDelegate:(id<IGDirectThreadInfoDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGDirectThreadInfoDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(char)isLoading;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(IGTextField *)nameField;
-(void)setNameField:(IGTextField *)arg1 ;
-(IGUserSession *)userSession;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
-(void)setIsLoading:(char)arg1 ;
-(NSString *)threadID;
@end

