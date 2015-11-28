

@protocol IGNavSearchBarDelegate <NSObject>
@optional
-(void)searchBarButtonTapped:(id)arg1;
-(void)searchBarWillBeginEditing:(id)arg1;
-(void)searchBarWillEndEditing:(id)arg1;
-(void)searchBarCancelButtonTapped:(id)arg1;
-(void)searchBarReturnKeyTapped:(id)arg1;
-(void)searchBarPeopleIconTapped:(id)arg1;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2;
-(char)searchBarShouldBeginEditing:(id)arg1;
-(char)searchBarShouldEndEditing:(id)arg1;
-(void)searchBarTextDidBeginEditing:(id)arg1;
-(void)searchBarTextDidEndEditing:(id)arg1;
-(char)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;

@end

