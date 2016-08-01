

@protocol IGExploreSearchControllerDelegate <NSObject>
@required
-(void)searchControllerSearchBarTapped:(id)arg1;
-(void)searchControllerCancelButtonTapped:(id)arg1;
-(void)searchControllerChannelHomeTapped:(id)arg1;
-(void)searchController:(id)arg1 switchedToViewController:(id)arg2;
-(void)searchControllerPeopleIconTapped:(id)arg1;
-(void)searchControllerDirectIconTapped:(id)arg1;

@end

