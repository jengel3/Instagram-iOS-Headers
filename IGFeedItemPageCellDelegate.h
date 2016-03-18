

@protocol IGFeedItemPageCellDelegate <NSObject>
@required
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2;
-(void)feedItemPageCellDidInitialSingleTap:(id)arg1;
-(void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(char)arg2;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2;
-(void)feedItemPageCell:(id)arg1 wantsOpenURL:(id)arg2 modal:(char)arg3;

@end

