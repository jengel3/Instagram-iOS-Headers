
#import <Instagram/IGVideoViewLogging.h>

@class NSNumber, IGPost, NSString;

@interface IGVideoViewLogger : NSObject <IGVideoViewLogging> {

	NSNumber* _lastPlaybackTime;
	int _originalPlaybackReason;
	IGPost* _post;

}

@property (nonatomic,retain) IGPost * post;                         //@synthesize post=_post - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSNumber * lastPlaybackTime;                     //@synthesize lastPlaybackTime=_lastPlaybackTime - In the implementation block
@property (assign) int originalPlaybackReason;                      //@synthesize originalPlaybackReason=_originalPlaybackReason - In the implementation block
+(id)playbackInfoForPlayer:(id)arg1 withTimingInfo:(char)arg2 ;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(id)initWithPost:(id)arg1 ;
-(void)setLastPlaybackTime:(NSNumber *)arg1 ;
-(void)setOriginalPlaybackReason:(int)arg1 ;
-(void)logVideoStopForPlayer:(id)arg1 reason:(int)arg2 ;
-(void)logAudioWillPlay:(char)arg1 player:(id)arg2 reason:(int)arg3 ;
-(void)logVideoError;
-(void)logVideoUnpauseForPlayer:(id)arg1 playbackReason:(int)arg2 ;
-(void)logVideoStartForPlayer:(id)arg1 playbackReason:(int)arg2 videoStartDelay:(float)arg3 ;
-(void)logVideoComplete;
-(void)logVideoTapForPlayer:(id)arg1 ;
-(NSNumber *)lastPlaybackTime;
-(int)originalPlaybackReason;
-(void)logVideoShouldStart;
@end

