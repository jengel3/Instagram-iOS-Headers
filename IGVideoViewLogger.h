
#import <Instagram/IGVideoViewLogging.h>

@class NSNumber, IGFeedItem, NSDictionary, NSString;

@interface IGVideoViewLogger : NSObject <IGVideoViewLogging> {

	NSNumber* _lastPlaybackTime;
	int _originalPlaybackReason;
	IGFeedItem* _post;
	NSDictionary* _extra;
	NSDictionary* _userInfoFields;

}

@property (nonatomic,retain) IGFeedItem * post;                          //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) NSDictionary * extra;                       //@synthesize extra=_extra - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfoFields;              //@synthesize userInfoFields=_userInfoFields - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSNumber * lastPlaybackTime;                          //@synthesize lastPlaybackTime=_lastPlaybackTime - In the implementation block
@property (assign) int originalPlaybackReason;                           //@synthesize originalPlaybackReason=_originalPlaybackReason - In the implementation block
-(void)setPost:(IGFeedItem *)arg1 ;
-(IGFeedItem *)post;
-(id)initWithPost:(id)arg1 userInfoFields:(id)arg2 extraFields:(id)arg3 ;
-(void)logVideoShouldStart;
-(void)logAudioWillPlay:(char)arg1 player:(id)arg2 reason:(int)arg3 ;
-(void)logVideoStopForPlayer:(id)arg1 reason:(int)arg2 ;
-(void)logVideoComplete;
-(void)logVideoUnpauseForPlayer:(id)arg1 playbackReason:(int)arg2 ;
-(void)setLastPlaybackTime:(NSNumber *)arg1 ;
-(void)setOriginalPlaybackReason:(int)arg1 ;
-(void)logVideoStartForPlayer:(id)arg1 playbackReason:(int)arg2 videoStartDelay:(float)arg3 ;
-(void)logVideoError:(id)arg1 ;
-(void)logVideoTapForPlayer:(id)arg1 ;
-(id)playbackInfoForPlayer:(id)arg1 withTimingInfo:(char)arg2 ;
-(NSNumber *)lastPlaybackTime;
-(int)originalPlaybackReason;
-(NSDictionary *)userInfoFields;
-(NSDictionary *)extra;
-(void)logVideoDisplayed;
-(void)logVideoViewForPlayer:(id)arg1 lastPlaybackTime:(float)arg2 loopCount:(int)arg3 eventName:(id)arg4 ;
-(void)setExtra:(NSDictionary *)arg1 ;
-(void)setUserInfoFields:(NSDictionary *)arg1 ;
@end

