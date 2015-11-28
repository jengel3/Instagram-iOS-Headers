

@protocol IGFeedItemVideoCellDelegate <NSObject>
@optional
-(void)feedItemVideoCellDidLoadImage:(id)arg1;
-(void)feedItemVideoCellDidPlayToEnd:(id)arg1;
-(void)feedItemVideoCellDidLongPress:(id)arg1;

@required
-(void)feedItemVideoCellDidRequestVideoPlayback:(id)arg1;
-(void)feedItemVideoCell:(id)arg1 didFailToPlayWithError:(id)arg2;
-(void)feedItemVideoCellDidDoubleTapToLike:(id)arg1;
-(id)feedItemVideoCellCurrentIGAnalyticsMetadata:(id)arg1;
-(int)feedItemVideoCellPosition:(id)arg1;

@end

