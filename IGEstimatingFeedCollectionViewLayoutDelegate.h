

@protocol IGEstimatingFeedCollectionViewLayoutDelegate <UICollectionViewDelegate>
@required
-(float)estimatedHeightForASectionInCollectionView:(id)arg1;
-(id)kindForHeadersInCollectionView:(id)arg1;
-(CGSize*)collectionView:(id)arg1 sizeForHeaderInSection:(int)arg2;
-(CGSize*)collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2;

@end

