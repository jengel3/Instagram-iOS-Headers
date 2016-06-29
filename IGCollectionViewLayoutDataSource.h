

@protocol IGCollectionViewLayoutDataSource <NSObject>
@required
-(int)numberOfSectionsForCollectionViewLayout:(id)arg1 withObjects:(id)arg2 context:(id)arg3;
-(CGSize*)collectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5;
-(void)collectionViewLayout:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3;
-(int)collectionViewLayout:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4;
-(id)collectionViewLayout:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5;
-(CGPoint*)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2;

@end

