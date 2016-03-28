

@protocol IGAlbumPlayerViewDelegate <NSObject>
@required
-(void)albumPlayerView:(id)arg1 didChangeToPage:(int)arg2;
-(void)albumPlayerView:(id)arg1 didRequestVideoPlaybackWithConfig:(id)arg2;
-(void)albumPlayerViewDidRequestVideoStop:(id)arg1;

@end

