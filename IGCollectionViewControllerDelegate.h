

@protocol IGCollectionViewControllerDelegate <UICollectionViewDelegate>
@optional
-(void)collectionViewControllerDidStartPullToRefreshAction:(id)arg1;
-(void)collectionViewController:(id)arg1 didScrollWithDistanceToEndOfContent:(float)arg2 isScrollingDown:(char)arg3;
-(void)collectionViewControllerDidScrollToEndOfContent:(id)arg1;

@end

