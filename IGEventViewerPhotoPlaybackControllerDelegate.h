

@protocol IGEventViewerPhotoPlaybackControllerDelegate <NSObject>
@required
-(void)photoPlaybackController:(id)arg1 didUpdatePhotoProgress:(float)arg2 forPost:(id)arg3;
-(void)photoPlaybackController:(id)arg1 didEndPlayingPhotoForPost:(id)arg2;
-(void)photoPlaybackController:(id)arg1 didBeginPlayingPhotoForPost:(id)arg2 withDuration:(double)arg3;

@end

