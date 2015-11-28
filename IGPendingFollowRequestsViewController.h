
#import <Instagram/IGUserListViewController.h>

@interface IGPendingFollowRequestsViewController : IGUserListViewController
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)onFriendStatusChanged:(id)arg1 ;
-(void)removeUserFromList:(id)arg1 ;
-(id)usersSortedBySecondaryName:(id)arg1 ;
-(id)pendingRequestsCount;
-(void)dealloc;
-(id)init;
@end

