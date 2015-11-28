

@protocol IGSearchResultsItemController <NSObject>
@optional
-(void)sectionController:(id)arg1 tableView:(id)arg2 didSelectItem:(id)arg3 atIndexPath:(id)arg4;

@required
-(char)canHandleItem:(id)arg1;
-(id)tableView:(id)arg1 viewControllerForItem:(id)arg2 atIndexPath:(id)arg3;
-(id)tableView:(id)arg1 cellForItem:(id)arg2 atIndexPath:(id)arg3;

@end

