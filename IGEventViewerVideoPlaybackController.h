
#import <Instagram/IGFeedItemVideoViewDelegate.h>
#import <Instagram/IGVideoPlaybackControllerDelegate.h>
#import <Instagram/IGVideoPlaybackControllerProgressDelegate.h>

@protocol IGEventViewerVideoPlaybackControllerDelegate;
@class IGEventViewerPlaybackItem, IGFeedVideoManager, IGEventViewerAnalyticsLogger, IGVideoPlaybackController, IGFeedVideoPlayer, NSString;

@interface IGEventViewerVideoPlaybackController : NSObject <IGFeedItemVideoViewDelegate, IGVideoPlaybackControllerDelegate, IGVideoPlaybackControllerProgressDelegate> {

	char _audioEnabled;
	char _currentVideoDidPlayToEnd;
	id<IGEventViewerVideoPlaybackControllerDelegate> _delegate;
	IGEventViewerPlaybackItem* _playbackItem;
	IGFeedVideoManager* _feedVideoManager;
	IGEventViewerAnalyticsLogger* _logger;
	unsigned _videoRetryCount;
	float _currentVideoStartTime;
	IGVideoPlaybackController* _videoPlaybackController;

}

@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                                       //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) IGEventViewerPlaybackItem * playbackItem;                                      //@synthesize playbackItem=_playbackItem - In the implementation block
@property (assign,nonatomic) char currentVideoDidPlayToEnd;                                                 //@synthesize currentVideoDidPlayToEnd=_currentVideoDidPlayToEnd - In the implementation block
@property (assign,nonatomic) unsigned videoRetryCount;                                                      //@synthesize videoRetryCount=_videoRetryCount - In the implementation block
@property (assign,nonatomic) float currentVideoStartTime;                                                   //@synthesize currentVideoStartTime=_currentVideoStartTime - In the implementation block
@property (nonatomic,readonly) IGVideoPlaybackController * videoPlaybackController;                         //@synthesize videoPlaybackController=_videoPlaybackController - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerVideoPlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentProgress; 
@property (nonatomic,readonly) float currentDuration; 
@property (nonatomic,readonly) IGFeedVideoPlayer * currentPlayer; 
@property (assign,nonatomic) char audioEnabled;                                                             //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)audioEnabled;
-(IGFeedVideoManager *)feedVideoManager;
-(id)initWithLogger:(id)arg1 ;
-(IGVideoPlaybackController *)videoPlaybackController;
-(void)playVideoForItem:(id)arg1 startTime:(float)arg2 ;
-(void)stopCurrentlyPlayingVideo;
-(char)isCurrentlyPlayingVideo;
-(void)pauseCurrentlyPlayingVideo;
-(IGEventViewerPlaybackItem *)playbackItem;
-(void)setPlaybackItem:(IGEventViewerPlaybackItem *)arg1 ;
-(id)initWithFeedVideoManager:(id)arg1 logger:(id)arg2 ;
-(void)setCurrentVideoStartTime:(float)arg1 ;
-(char)currentVideoDidPlayToEnd;
-(float)currentVideoStartTime;
-(void)setVideoRetryCount:(unsigned)arg1 ;
-(void)setCurrentVideoDidPlayToEnd:(char)arg1 ;
-(void)handleDidEndPlayingWithPlayer:(id)arg1 ;
-(unsigned)videoRetryCount;
-(void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didPauseItem:(id)arg2 reason:(unsigned)arg3 ;
-(void)videoPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didRequestPlaybackItem:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didFailPlayingItem:(id)arg2 error:(id)arg3 ;
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackProgressForItem:(id)arg2 progress:(float)arg3 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(float)currentProgress;
-(void)setAudioEnabled:(char)arg1 ;
-(void)setDelegate:(id<IGEventViewerVideoPlaybackControllerDelegate>)arg1 ;
-(id<IGEventViewerVideoPlaybackControllerDelegate>)delegate;
-(IGFeedVideoPlayer *)currentPlayer;
-(float)currentDuration;
@end

