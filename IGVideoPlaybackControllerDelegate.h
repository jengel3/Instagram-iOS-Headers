

@protocol IGVideoPlaybackControllerDelegate <NSObject>
@required
-(void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2;
-(void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(unsigned)arg3;
-(void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2;
-(void)videoPlaybackController:(id)arg1 didRequestPlaybackItem:(id)arg2;
-(void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3;

@end

