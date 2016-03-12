

@protocol IGListItemType <NSObject>
@required
-(id)cellClasses;
-(CGSize*)estimatedSizeForItemAtIndex:(int)arg1;
-(id)cellForItemAtIndex:(int)arg1;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1;
-(CGSize*)sizeForItemAtIndex:(int)arg1;

@end

