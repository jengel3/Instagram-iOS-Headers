

@protocol IGListCollectionContext <NSObject>
@property (nonatomic,readonly) CGSize containerSize; 
@required
-(id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3;
-(id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2;
-(void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
-(unsigned)indexForCell:(id)arg1 listItemController:(id)arg2;
-(unsigned)sectionForListItemController:(id)arg1;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4;
-(void)reloadListItemController:(id)arg1;
-(void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(char)arg3;
-(void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
-(void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2;
-(CGSize)containerSize;

@end

