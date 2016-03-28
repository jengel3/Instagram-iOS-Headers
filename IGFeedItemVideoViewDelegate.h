

@protocol IGFeedItemVideoViewDelegate <NSObject>
@required
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2;
-(void)feedItemVideoViewDidDoubleTap:(id)arg1;
-(void)feedItemVideoViewDidLoadImage:(id)arg1;
-(void)feedItemVideoViewDidPlay:(id)arg1;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1;
-(void)feedItemVideoViewDidLongPress:(id)arg1;
-(void)feedItemVideoView:(id)arg1 didToggleAudio:(char)arg2;

@end

