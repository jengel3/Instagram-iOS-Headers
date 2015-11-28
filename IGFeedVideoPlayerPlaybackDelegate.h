

@protocol IGFeedVideoPlayerPlaybackDelegate <NSObject>
@required
-(void)videoPlayerDidPlayToEnd:(id)arg1;
-(void)videoPlayer:(id)arg1 didFailWithError:(id)arg2;
-(void)videoPlayerDidStartPlaying:(id)arg1;
-(void)videoPlayer:(id)arg1 didUpdateProgress:(float)arg2;
-(void)videoPlayer:(id)arg1 isWaitingForBuffer:(char)arg2;

@end

