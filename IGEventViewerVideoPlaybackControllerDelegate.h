

@protocol IGEventViewerVideoPlaybackControllerDelegate <NSObject>
@required
-(void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 withDuration:(double)arg3;
-(void)videoPlaybackController:(id)arg1 didUpdateVideoProgress:(float)arg2 forItem:(id)arg3;
-(void)videoPlaybackController:(id)arg1 didPlayVideoToEndForItem:(id)arg2;

@end

