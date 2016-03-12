

@protocol LXReorderableCollectionViewDataSource <UICollectionViewDataSource>
@optional
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(CGPoint)arg3;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 wasRemovedAtPoint:(CGPoint)arg3;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;

@end

