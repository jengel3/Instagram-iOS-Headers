
#import <Instagram/IGNewsTableViewController.h>

@interface IGNewsFollowingTableViewController : IGNewsTableViewController
-(id)analyticsModule;
-(void)onStoriesReceived:(id)arg1 ;
-(void)findFriendsButtonTapped;
-(void)onFetchFailed:(id)arg1 ;
-(id)newEmptyFeedView;
-(void)fetchData;
-(int)segment;
@end

