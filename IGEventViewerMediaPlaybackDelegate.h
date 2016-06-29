

@protocol IGEventViewerMediaPlaybackDelegate <NSObject>
@required
-(void)mediaPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 withDuration:(double)arg3;
-(void)mediaPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
-(void)mediaPlaybackController:(id)arg1 didPausePlayingItem:(id)arg2;

@end

