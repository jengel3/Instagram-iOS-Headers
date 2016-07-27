
#import <Instagram/IGTabPageViewController.h>

@protocol IGActivityFeedViewControllerProtocol;
@class IGNewsFollowingTableViewController, UIViewController;

@interface IGNewsViewController : IGTabPageViewController {

	IGNewsFollowingTableViewController* _followingViewController;
	UIViewController*<IGActivityFeedViewControllerProtocol> _inboxViewController;

}

@property (nonatomic,retain) IGNewsFollowingTableViewController * followingViewController;                             //@synthesize followingViewController=_followingViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<IGActivityFeedViewControllerProtocol> inboxViewController;              //@synthesize inboxViewController=_inboxViewController - In the implementation block
-(id)analyticsModule;
-(void)focusInboxIfOffscreen;
-(void)focusInbox;
-(void)fetchInbox;
-(void)onShouldReload;
-(IGNewsFollowingTableViewController *)followingViewController;
-(UIViewController*<IGActivityFeedViewControllerProtocol>)inboxViewController;
-(int)currentSegment;
-(id)scrollViewForSegment:(int)arg1 ;
-(void)setFollowingViewController:(IGNewsFollowingTableViewController *)arg1 ;
-(void)setInboxViewController:(UIViewController*<IGActivityFeedViewControllerProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

