

#import <Instagram/Instagram-Structs.h>
@class IGFeedVideoTimeIndicatorView;

@interface IGPlaybackTimeIndicatorController : NSObject {

	char _disabled;
	char _didStartHiding;
	char _didShowIndicator;
	char _playerDidStartPlayback;
	IGFeedVideoTimeIndicatorView* _indicatorView;
	float _playbackStartTime;

}

@property (nonatomic,__weak,readonly) IGFeedVideoTimeIndicatorView * indicatorView;              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign,nonatomic) char didStartHiding;                                                //@synthesize didStartHiding=_didStartHiding - In the implementation block
@property (assign,nonatomic) char didShowIndicator;                                              //@synthesize didShowIndicator=_didShowIndicator - In the implementation block
@property (assign,nonatomic) float playbackStartTime;                                            //@synthesize playbackStartTime=_playbackStartTime - In the implementation block
@property (assign,nonatomic) char playerDidStartPlayback;                                        //@synthesize playerDidStartPlayback=_playerDidStartPlayback - In the implementation block
@property (assign,nonatomic) char disabled;                                                      //@synthesize disabled=_disabled - In the implementation block
-(id)initWithIndicatorView:(id)arg1 ;
-(void)layoutViewsInRect:(CGRect)arg1 ;
-(void)didStartLoadingVideoForPlayer:(id)arg1 ;
-(void)didStopPlaybackForPlayer:(id)arg1 ;
-(void)didEmptyPlaybackBufferForPlayer:(id)arg1 ;
-(void)didStartPlaybackForPlayer:(id)arg1 ;
-(void)didUpdatePlaybackProgressForPlayer:(id)arg1 progress:(float)arg2 ;
-(void)didFinishSeeking:(id)arg1 ;
-(void)setPlayerDidStartPlayback:(char)arg1 ;
-(void)trySetupIndicatorForPlayer:(id)arg1 ;
-(char)playerDidStartPlayback;
-(float)remainingTimeForPlayer:(id)arg1 ;
-(char)didShowIndicator;
-(void)setDidShowIndicator:(char)arg1 ;
-(void)setPlaybackStartTime:(float)arg1 ;
-(void)setDidStartHiding:(char)arg1 ;
-(float)playbackStartTime;
-(char)didStartHiding;
-(void)reset;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(IGFeedVideoTimeIndicatorView *)indicatorView;
@end

