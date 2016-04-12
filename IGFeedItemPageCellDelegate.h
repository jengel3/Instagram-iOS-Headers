

@protocol IGFeedItemPageCellDelegate <NSObject>
@required
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3;
-(void)feedItemPageCellDidInitialSingleTap:(id)arg1;
-(void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(char)arg2;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2;

@end

