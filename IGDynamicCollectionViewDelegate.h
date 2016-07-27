

@protocol IGDynamicCollectionViewDelegate <NSObject>
@optional
-(void)collectionView:(id)arg1 scrollViewDidScroll:(id)arg2;
-(char)collectionView:(id)arg1 canMoveItemFromIndex:(int)arg2 toIndex:(int)arg3;
-(char)collectionView:(id)arg1 canMoveItemAtIndex:(int)arg2;
-(char)collectionView:(id)arg1 canTapItemAtIndex:(int)arg2;
-(void)collectionView:(id)arg1 didTapItemAtIndex:(int)arg2;
-(void)collectionView:(id)arg1 didEndMovingView:(id)arg2;
-(void)collectionView:(id)arg1 willBeginMovingView:(id)arg2;
-(void)collectionView:(id)arg1 didChangeContentSize:(CGSize)arg2;

@end

