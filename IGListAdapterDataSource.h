

@protocol IGListAdapterDataSource <NSObject>
@required
-(id)itemsForListAdapter:(id)arg1;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2;
-(id)emptyViewForListAdapter:(id)arg1;

@end

