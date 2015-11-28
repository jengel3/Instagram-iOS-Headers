

@protocol IGFeedItemVideoViewDelegate <NSObject>
@optional
-(void)feedItemVideoViewDidLoadImage:(id)arg1;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1;
-(void)feedItemVideoViewDidLongPress:(id)arg1;

@required
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2;
-(void)feedItemVideoViewDidDoubleTapToLike:(id)arg1;
-(id)feedItemVideoViewCurrentIGAnalyticsMetadata:(id)arg1;
-(int)feedItemVideoViewPosition:(id)arg1;

@end

