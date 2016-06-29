

@protocol IGFeedVideoCell <IGPercentVisible,IGHeartAnimatable,IGSponsoring>
@required
-(void)handleDidBeginPlaying;
-(void)handleDidPause;
-(void)handleDidEndPlaying;
-(void)handleDidRequestPlayback;
-(id)videoView;

@end

