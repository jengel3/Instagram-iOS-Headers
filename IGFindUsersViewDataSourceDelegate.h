

@protocol IGFindUsersViewDataSourceDelegate <NSObject>
@required
-(void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2;
-(void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
-(void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
-(void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
-(void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;

@end

