

@protocol IGFindUsersViewDelegate <NSObject>
@optional
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3;
-(void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned)arg3;
-(void)findUsersView:(id)arg1 willDisplayOnUser:(id)arg2 atIndex:(unsigned)arg3;
-(void)findUsersView:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(void)findUsersView:(id)arg1 didLoadAllUserIDs:(id)arg2;
-(void)findUsersView:(id)arg1 didUnFollowUser:(id)arg2 atIndex:(unsigned)arg3;
-(void)findUsersView:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)findUsersView:(id)arg1 scrollViewDidEndDragging:(id)arg2;
-(void)findUsersView:(id)arg1 scrollViewDidEndScrolling:(id)arg2;
-(void)findUsersView:(id)arg1 didTapOnItemWithMediaID:(id)arg2 atIndex:(unsigned)arg3;
-(void)findUsersView:(id)arg1 didFollowAllUsers:(id)arg2;

@required
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2;
-(void)findUsersView:(id)arg1 didFailWithError:(id)arg2;

@end

