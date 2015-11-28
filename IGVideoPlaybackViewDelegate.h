

@protocol IGVideoPlaybackViewDelegate <NSObject>
@optional
-(void)playbackView:(id)arg1 didPlayToTime:(SCD_Struct_IG0)arg2;

@required
-(void)filterPlayerViewDidFinishPlaying;

@end

