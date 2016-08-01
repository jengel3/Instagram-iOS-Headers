
#import <Instagram/IGFeedVideoPlayerDelegate.h>
#import <Instagram/IGAudioNUXControllerDelegate.h>

@protocol IGVideoPlaybackControllerDelegate, IGVideoPlaybackControllerProgressDelegate;
@class IGFeedVideoPlayer, IGAudioNUXController, IGVideoPlaybackItem, IGVideoCaptionController, IGVideoLoadProgressView, IGPlaybackTimeIndicatorController, IGVideoViewLogger, NSString;

@interface IGVideoPlaybackController : NSObject <IGFeedVideoPlayerDelegate, IGAudioNUXControllerDelegate> {

	char _hasStartedPlayback;
	char _loading;
	char _userDidTap;
	id<IGVideoPlaybackControllerDelegate> _delegate;
	id<IGVideoPlaybackControllerProgressDelegate> _progressDelegate;
	IGFeedVideoPlayer* _player;
	IGAudioNUXController* _audioNUXController;
	IGVideoPlaybackItem* _playbackItem;
	IGVideoCaptionController* _captionController;
	float _startTime;
	double _videoShouldStartTime;

}

@property (nonatomic,retain) IGVideoPlaybackItem * playbackItem;                                                 //@synthesize playbackItem=_playbackItem - In the implementation block
@property (nonatomic,readonly) IGVideoLoadProgressView * progressView; 
@property (nonatomic,readonly) IGPlaybackTimeIndicatorController * timeIndicatorController; 
@property (nonatomic,retain) IGVideoCaptionController * captionController;                                       //@synthesize captionController=_captionController - In the implementation block
@property (nonatomic,readonly) IGVideoViewLogger * logger; 
@property (nonatomic,retain) IGFeedVideoPlayer * player;                                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) IGAudioNUXController * audioNUXController;                                          //@synthesize audioNUXController=_audioNUXController - In the implementation block
@property (assign,nonatomic) double videoShouldStartTime;                                                        //@synthesize videoShouldStartTime=_videoShouldStartTime - In the implementation block
@property (assign,nonatomic) float startTime;                                                                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char hasStartedPlayback;                                                            //@synthesize hasStartedPlayback=_hasStartedPlayback - In the implementation block
@property (assign,nonatomic) char loading;                                                                       //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) char userDidTap;                                                                    //@synthesize userDidTap=_userDidTap - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoPlaybackControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoPlaybackControllerProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVideoShouldStartTime:(double)arg1 ;
-(char)videoHasSound;
-(void)logVideoStoppedForReason:(int)arg1 ;
-(char)hasStartedPlayback;
-(void)setHasStartedPlayback:(char)arg1 ;
-(double)videoShouldStartTime;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayerBufferEmpty:(id)arg1 ;
-(void)videoPlayerBufferLikelyToKeepUp:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)videoPlayerDidPause:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2 ;
-(void)videoPlayerDidFinishSeeking:(id)arg1 ;
-(IGVideoPlaybackItem *)playbackItem;
-(void)setPlaybackItem:(IGVideoPlaybackItem *)arg1 ;
-(void)playVideoItem:(id)arg1 player:(id)arg2 startTime:(float)arg3 ;
-(id)relinquishPlayer;
-(void)applyPlaybackItemSettings;
-(IGPlaybackTimeIndicatorController *)timeIndicatorController;
-(void)setUpAudioNUXController;
-(char)isEligibleForCaptionExperiment;
-(void)setUpCaptionControllerWithPlaybackItem:(id)arg1 ;
-(void)setUserDidTap:(char)arg1 ;
-(void)stopObservingEvents;
-(IGVideoCaptionController *)captionController;
-(void)setCaptionController:(IGVideoCaptionController *)arg1 ;
-(IGAudioNUXController *)audioNUXController;
-(char)userDidTap;
-(void)startObservingEvents;
-(void)observeHeadphoneEvent:(char)arg1 ;
-(void)observeHardwareControlEvents:(char)arg1 ;
-(void)muteSwitchStateChangedNotification:(id)arg1 ;
-(void)didPressVolumeButtonNotification:(id)arg1 ;
-(void)didUnplugHeadphonesNotification:(id)arg1 ;
-(void)updateCaptionSettingWithAudioEnabled:(char)arg1 ;
-(void)showOneTapIndicatorNUXAnimated:(id)arg1 ;
-(void)setAudioNUXController:(IGAudioNUXController *)arg1 ;
-(char)audioNUXControllerVideoHasSound:(id)arg1 ;
-(char)audioNUXControllerIsPlayingSound:(id)arg1 ;
-(char)audioNUXControllerIsVideoPlaying:(id)arg1 ;
-(void)resumeWithVideoItem:(id)arg1 player:(id)arg2 ;
-(void)didSingleTapOnVideo;
-(IGVideoViewLogger *)logger;
-(void)setPlayer:(IGFeedVideoPlayer *)arg1 ;
-(void)setAudioEnabled:(char)arg1 ;
-(IGFeedVideoPlayer *)player;
-(void)setDelegate:(id<IGVideoPlaybackControllerDelegate>)arg1 ;
-(id<IGVideoPlaybackControllerDelegate>)delegate;
-(void)setStartTime:(float)arg1 ;
-(IGVideoLoadProgressView *)progressView;
-(float)startTime;
-(id<IGVideoPlaybackControllerProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<IGVideoPlaybackControllerProgressDelegate>)arg1 ;
-(void)setLoading:(char)arg1 ;
-(char)loading;
@end

