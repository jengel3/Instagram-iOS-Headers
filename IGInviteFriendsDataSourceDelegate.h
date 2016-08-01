

@protocol IGInviteFriendsDataSourceDelegate <NSObject>
@required
-(void)inviteFriendsDataSource:(id)arg1 didLoadFriendsList:(id)arg2;
-(void)inviteFriendsDataSourceDidFailToLoad:(id)arg1;

@end

