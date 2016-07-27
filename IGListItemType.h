

@protocol IGListItemType <NSObject>
@required
-(id)cellForItemAtIndex:(int)arg1;
-(void)didUpdateToItem:(id)arg1;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1;
-(CGSize*)sizeForItemAtIndex:(int)arg1;

@end

