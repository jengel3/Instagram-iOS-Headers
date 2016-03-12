

@protocol IGSearchBarDelegate <UISearchBarDelegate>
@optional
-(void)searchBar:(id)arg1 textDidChange:(id)arg2;
-(char)searchBarShouldBeginEditing:(id)arg1;
-(char)searchBarShouldEndEditing:(id)arg1;
-(void)searchBarCancelButtonClicked:(id)arg1;
-(void)searchBarTextDidBeginEditing:(id)arg1;
-(void)searchBarTextDidEndEditing:(id)arg1;
-(void)searchBarSearchButtonClicked:(id)arg1;
-(char)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;

@end

