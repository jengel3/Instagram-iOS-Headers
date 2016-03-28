
@class NSNumber;


@protocol IGVideoViewLogging <NSObject>
@property (retain) NSNumber * lastPlaybackTime; 
@property (assign) int originalPlaybackReason; 
@required
-(void)setLastPlaybackTime:(id)arg1;
-(void)setOriginalPlaybackReason:(int)arg1;
-(void)logVideoStopForPlayer:(id)arg1 reason:(int)arg2;
-(void)logAudioWillPlay:(char)arg1 player:(id)arg2 reason:(int)arg3;
-(void)logVideoError;
-(void)logVideoUnpauseForPlayer:(id)arg1 playbackReason:(int)arg2;
-(void)logVideoStartForPlayer:(id)arg1 playbackReason:(int)arg2 videoStartDelay:(float)arg3;
-(void)logVideoComplete;
-(void)logVideoTapForPlayer:(id)arg1;
-(void)logVideoDisplayed;
-(NSNumber *)lastPlaybackTime;
-(int)originalPlaybackReason;
-(void)logVideoShouldStart;

@end

