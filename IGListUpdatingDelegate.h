

@protocol IGListUpdatingDelegate
@required
-(void)performUpdateWithCollectionView:(id)arg1 fromObjects:(id)arg2 toObjects:(id)arg3 objectUpdateBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;
-(void)reloadDataWithCollectionView:(id)arg1 objectUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2;
-(void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
-(void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;

@end

