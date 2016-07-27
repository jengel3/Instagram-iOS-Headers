
@class NSNumber;


@protocol IGVideoViewLogging <NSObject>
@property (retain) NSNumber * lastPlaybackTime; 
@property (assign) int originalPlaybackReason; 
@required
-(void)logVideoShouldStart;
-(void)logVideoStopForPlayer:(id)arg1 reason:(int)arg2 extraInfo:(id)arg3;
-(void)logVideoComplete;
-(void)logVideoError:(id)arg1;
-(void)logVideoUnpauseForPlayer:(id)arg1 playbackReason:(int)arg2;
-(void)setLastPlaybackTime:(id)arg1;
-(void)setOriginalPlaybackReason:(int)arg1;
-(void)logVideoStartForPlayer:(id)arg1 playbackReason:(int)arg2 videoStartDelay:(float)arg3;
-(void)logAudioWillPlay:(char)arg1 player:(id)arg2 reason:(int)arg3;
-(void)logVideoTapForPlayer:(id)arg1;
-(NSNumber *)lastPlaybackTime;
-(int)originalPlaybackReason;
-(void)logVideoDisplayed;
-(void)logVideoViewForPlayer:(id)arg1 lastPlaybackTime:(float)arg2 loopCount:(int)arg3 eventName:(id)arg4;

@end

