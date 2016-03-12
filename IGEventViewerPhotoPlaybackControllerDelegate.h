

@protocol IGEventViewerPhotoPlaybackControllerDelegate <NSObject>
@required
-(void)photoPlaybackController:(id)arg1 didBeginPlayingPhotoForItem:(id)arg2 withDuration:(double)arg3;
-(void)photoPlaybackController:(id)arg1 didUpdatePhotoProgress:(float)arg2 forItem:(id)arg3;
-(void)photoPlaybackController:(id)arg1 didEndPlayingPhotoForItem:(id)arg2;

@end

