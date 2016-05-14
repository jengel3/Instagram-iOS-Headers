/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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
