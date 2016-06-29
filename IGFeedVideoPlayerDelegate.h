

@protocol IGFeedVideoPlayerDelegate <NSObject>
@required
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2;
-(void)videoPlayerLoadedFirstFrame:(id)arg1;
-(void)videoPlayerDidPlayToEnd:(id)arg1;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1;
-(void)videoPlayer:(id)arg1 playbackBufferEmpty:(char)arg2;
-(void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(char)arg2;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2;
-(void)videoPlayerDidPlay:(id)arg1;
-(void)videoPlayerDidPause:(id)arg1;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2;
-(void)videoPlayerDidFinishSeeking:(id)arg1;

@end

