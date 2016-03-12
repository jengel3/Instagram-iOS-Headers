
#import <Instagram/IGTabPageViewController.h>

@class IGNewsFollowingTableViewController, IGNewsInboxTableViewController;

@interface IGNewsViewController : IGTabPageViewController {

	IGNewsFollowingTableViewController* _followingViewController;
	IGNewsInboxTableViewController* _inboxViewController;

}

@property (nonatomic,retain) IGNewsFollowingTableViewController * followingViewController;              //@synthesize followingViewController=_followingViewController - In the implementation block
@property (nonatomic,retain) IGNewsInboxTableViewController * inboxViewController;                      //@synthesize inboxViewController=_inboxViewController - In the implementation block
-(id)analyticsModule;
-(void)focusInboxIfOffscreen;
-(void)focusInbox;
-(void)fetchInbox;
-(void)onShouldReload;
-(void)tabBarTapped:(id)arg1 ;
-(IGNewsFollowingTableViewController *)followingViewController;
-(IGNewsInboxTableViewController *)inboxViewController;
-(int)currentSegment;
-(id)scrollViewForSegment:(int)arg1 ;
-(void)setFollowingViewController:(IGNewsFollowingTableViewController *)arg1 ;
-(void)setInboxViewController:(IGNewsInboxTableViewController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

