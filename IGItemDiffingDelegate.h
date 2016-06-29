

@protocol IGItemDiffingDelegate <NSObject>
@required
-(void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2;
-(void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2;

@end

