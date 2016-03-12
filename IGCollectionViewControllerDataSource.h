

@protocol IGCollectionViewControllerDataSource <NSObject>
@required
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2;
-(id)collectionViewController:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3;
-(void)collectionViewController:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3;
-(int)collectionViewController:(id)arg1 numberOfSectionsForObjects:(id)arg2 context:(id)arg3;
-(int)collectionViewController:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4;
-(CGSize*)collectionViewController:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5;
-(id)collectionViewController:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5;

@end

