

@protocol IGEventViewerFeedViewControllerDelegate <NSObject>
@required
-(void)eventViewerFeedViewController:(id)arg1 didScrollToItemAtIndexPath:(id)arg2;
-(void)willBeginDraggingFeedViewController:(id)arg1;
-(void)eventViewerFeedViewController:(id)arg1 willScrollToItemAtIndexPath:(id)arg2;
-(void)didEndDraggingFeedViewController:(id)arg1;
-(void)willEndDraggingNearBottomFeedViewController:(id)arg1;

@end

