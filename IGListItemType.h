

@protocol IGListItemType <NSObject>
@required
-(id)cellClasses;
-(unsigned)numberOfItemsInListAdapter:(id)arg1;
-(CGSize*)listAdapter:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
-(id)listAdapter:(id)arg1 cellForItemAtIndexPath:(id)arg2;
-(void)listAdapter:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(id)supplementaryViewSource;
-(id)displayDelegate;

@end

