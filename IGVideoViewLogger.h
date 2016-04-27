
#import <Instagram/IGVideoViewLogging.h>

@class NSNumber, IGPost, NSDictionary, NSString;

@interface IGVideoViewLogger : NSObject <IGVideoViewLogging> {

	NSNumber* _lastPlaybackTime;
	int _originalPlaybackReason;
	IGPost* _post;
	NSDictionary* _extra;

}

@property (nonatomic,retain) IGPost * post;                         //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) NSDictionary * extra;                  //@synthesize extra=_extra - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSNumber * lastPlaybackTime;                     //@synthesize lastPlaybackTime=_lastPlaybackTime - In the implementation block
@property (assign) int originalPlaybackReason;                      //@synthesize originalPlaybackReason=_originalPlaybackReason - In the implementation block
-(void)setExtra:(NSDictionary *)arg1 ;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(id)initWithPost:(id)arg1 ;
-(id)initWithPost:(id)arg1 extraFields:(id)arg2 ;
-(id)playbackInfoForPlayer:(id)arg1 withTimingInfo:(char)arg2 ;
-(NSNumber *)lastPlaybackTime;
-(int)originalPlaybackReason;
-(void)setLastPlaybackTime:(NSNumber *)arg1 ;
-(NSDictionary *)extra;
-(void)logVideoStopForPlayer:(id)arg1 reason:(int)arg2 ;
-(void)logAudioWillPlay:(char)arg1 player:(id)arg2 reason:(int)arg3 ;
-(void)logVideoError;
-(void)logVideoUnpauseForPlayer:(id)arg1 playbackReason:(int)arg2 ;
-(void)logVideoStartForPlayer:(id)arg1 playbackReason:(int)arg2 videoStartDelay:(float)arg3 ;
-(void)logVideoComplete;
-(void)logVideoTapForPlayer:(id)arg1 ;
-(void)logVideoShouldStart;
-(void)logVideoDisplayed;
-(void)setOriginalPlaybackReason:(int)arg1 ;
@end

