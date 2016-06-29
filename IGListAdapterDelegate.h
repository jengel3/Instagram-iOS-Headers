

@protocol IGListAdapterDelegate <NSObject>
@required
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3;

@end

