

@protocol IGFindFriendsHelperDelegate <NSObject>
@required
-(void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
-(void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;

@end

