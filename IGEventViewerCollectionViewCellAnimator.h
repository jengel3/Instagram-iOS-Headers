

@class UICollectionView;

@interface IGEventViewerCollectionViewCellAnimator : NSObject {

	UICollectionView* _collectionView;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(void)updateVisibleCellsForTargetIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)updateVisibleCellsWithDynamicCrossFadeAnimated:(char)arg1 ;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end

