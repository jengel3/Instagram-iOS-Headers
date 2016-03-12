

@protocol IGSearchSectionController <NSObject>
@required
-(id)tableView:(id)arg1 cellForIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectIndexPath:(id)arg2 searchString:(id)arg3;
-(unsigned)numberOfRows;

@end

