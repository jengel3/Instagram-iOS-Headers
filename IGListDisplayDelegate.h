

@protocol IGListDisplayDelegate <NSObject>
@required
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2;

@end

