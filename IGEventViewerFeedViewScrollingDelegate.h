

@protocol IGEventViewerFeedViewScrollingDelegate <NSObject>
@required
-(void)eventViewerFeedViewController:(id)arg1 didScrollToItemAtIndexPath:(id)arg2;
-(void)eventViewerFeedViewController:(id)arg1 willScrollToItemAtIndexPath:(id)arg2;
-(void)willScrollNearBottomFeedViewController:(id)arg1;

@end

