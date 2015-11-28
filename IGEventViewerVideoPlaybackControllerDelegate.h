

@protocol IGEventViewerVideoPlaybackControllerDelegate <NSObject>
@required
-(void)videoPlaybackController:(id)arg1 didBeginPlayingVideoForPost:(id)arg2 withDuration:(double)arg3;
-(void)videoPlaybackController:(id)arg1 didUpdateVideoProgress:(float)arg2 forPost:(id)arg3;
-(void)videoPlaybackController:(id)arg1 didPlayVideoToEndForPost:(id)arg2;

@end

