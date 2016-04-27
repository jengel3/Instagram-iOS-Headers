

@protocol IGListItemType <NSObject>
@required
-(id)displayDelegate;
-(id)supplementaryViewSource;
-(CGSize*)estimatedSizeForItemAtIndex:(int)arg1;
-(void)didUpdateToItem:(id)arg1;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1;
-(CGSize*)sizeForItemAtIndex:(int)arg1;

@end

