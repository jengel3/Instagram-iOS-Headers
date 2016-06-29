

@protocol IGCollectionViewControllerDelegate <UICollectionViewDelegate>
@required
-(void)collectionViewControllerDidStartPullToRefreshAction:(id)arg1;
-(void)collectionViewController:(id)arg1 didScrollWithDistanceToEndOfContent:(float)arg2 isScrollingDown:(char)arg3;

@end

