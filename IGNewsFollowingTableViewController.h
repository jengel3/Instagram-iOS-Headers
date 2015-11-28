
#import <Instagram/IGNewsTableViewController.h>

@interface IGNewsFollowingTableViewController : IGNewsTableViewController
-(void)findFriendsButtonTapped;
-(void)onStoriesReceived:(id)arg1 ;
-(void)onFetchFailed:(id)arg1 ;
-(id)newEmptyFeedView;
-(void)fetchData;
-(int)segment;
@end

