

@protocol IGExploreSearchControllerDelegate <NSObject>
@optional
-(void)searchControllerPeopleIconTapped:(id)arg1;

@required
-(void)searchControllerSearchBarTapped:(id)arg1;
-(void)searchControllerCancelButtonTapped:(id)arg1;
-(void)searchController:(id)arg1 switchedToViewController:(id)arg2;

@end

