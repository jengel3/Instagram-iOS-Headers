

@protocol IGSearchControllerDelegate <NSObject>
@optional
-(void)searchControllerWillBeginSearch:(id)arg1;
-(void)searchControllerWillEndSearch:(id)arg1;
-(char)searchController:(id)arg1 shouldChangeSearchTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)searchController:(id)arg1 searchTextDidChange:(id)arg2;
-(void)searchControllerSearchButtonTapped:(id)arg1;

@end

