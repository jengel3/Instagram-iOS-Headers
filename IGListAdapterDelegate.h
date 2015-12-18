

@protocol IGListAdapterDelegate <NSObject>
@required
-(void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(int)arg3;
-(void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(int)arg3;

@end

