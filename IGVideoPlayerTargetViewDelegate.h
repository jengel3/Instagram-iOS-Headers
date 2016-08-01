

@protocol IGVideoPlayerTargetViewDelegate <NSObject>
@required
-(void)videoPlayerViewIsReadyToDisplay:(id)arg1;
-(void)videoPlayer:(id)arg1 didChangePlaybackRate:(float)arg2;
-(void)videoPlayer:(id)arg1 didChangePlaybackTime:(SCD_Struct_IG19)arg2;

@end

