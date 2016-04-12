

@protocol IGListUpdatingDelegate
@required
-(id)itemLookupPointerFunctions;
-(void)performUpdateWithCollectionView:(id)arg1 fromItems:(id)arg2 toItems:(id)arg3 itemTransitionBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;
-(void)reloadDataWithCollectionView:(id)arg1 itemUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)reloadCollectionView:(id)arg1 sections:(id)arg2 animated:(char)arg3;
-(void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2;
-(void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
-(void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
-(void)performUpdateWithCollectionView:(id)arg1 itemUpdates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;

@end

