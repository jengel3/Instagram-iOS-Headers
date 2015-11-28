
#import <Instagram/IGFindUsersViewController.h>

@class NSMutableSet;

@interface IGAYMFFriendsViewController : IGFindUsersViewController {

	NSMutableSet* _displayedUsers;

}

@property (nonatomic,retain) NSMutableSet * displayedUsers;              //@synthesize displayedUsers=_displayedUsers - In the implementation block
-(id)analyticsModule;
-(void)logAYMFEvent:(id)arg1 userID:(id)arg2 atPosition:(unsigned)arg3 fullScreen:(char)arg4 algorithm:(id)arg5 ;
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(NSMutableSet *)displayedUsers;
-(void)updateNavigationRightBarButtonItem;
-(id)newFindUsersView;
-(void)authorizeAndFetchUsers;
-(id)newFindUsersViewDataSource;
-(void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 willDisplayOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)setDisplayedUsers:(NSMutableSet *)arg1 ;
-(id)init;
@end

