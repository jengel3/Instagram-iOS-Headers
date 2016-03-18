

@protocol IGFeedItemVideoViewDelegate <NSObject>
@required
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2;
-(void)feedItemVideoViewDidDoubleTap:(id)arg1;
-(id)feedItemVideoViewCurrentIGAnalyticsMetadata:(id)arg1;
-(int)feedItemVideoViewPosition:(id)arg1;
-(void)feedItemVideoViewDidLoadImage:(id)arg1;
-(void)feedItemVideoViewDidPlay:(id)arg1;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1;
-(void)feedItemVideoViewDidLongPress:(id)arg1;

@end

