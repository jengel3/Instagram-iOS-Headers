

@protocol IGFeedItemPageCellDelegate <NSObject>
@required
-(void)feedItemPageCellDidSingleTap:(id)arg1;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2;

@end

