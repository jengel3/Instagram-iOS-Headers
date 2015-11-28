

@protocol IGEventViewerTimelineViewControllerDelegate <NSObject>
@required
-(void)willBeginDraggingTimelineController:(id)arg1;
-(void)didEndDraggingTimelineController:(id)arg1;
-(void)eventViewerTimelineViewController:(id)arg1 didScrollToItemAtIndexPath:(id)arg2;

@end

