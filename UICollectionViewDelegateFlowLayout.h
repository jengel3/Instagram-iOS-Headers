

@protocol UICollectionViewDelegateFlowLayout <UICollectionViewDelegate>
@optional
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
-(CGSize*)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;

@end

