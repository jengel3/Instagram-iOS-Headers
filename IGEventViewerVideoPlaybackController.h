
#import <Instagram/IGFeedVideoPlayerPlaybackDelegate.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>
#import <Instagram/IGFeedItemVideoViewDelegate.h>

@protocol IGEventViewerVideoPlaybackControllerDelegate;
@class IGFeedVideoManager, IGEventViewerAnalyticsLogger, IGEventViewerPlaybackItem, IGFeedVideoPlayer, NSString;

@interface IGEventViewerVideoPlaybackController : NSObject <IGFeedVideoPlayerPlaybackDelegate, IGFeedVideoPlayerDelegate, IGFeedItemVideoViewDelegate> {

	char _audioEnabled;
	char _currentVideoDidPlayToEnd;
	id<IGEventViewerVideoPlaybackControllerDelegate> _delegate;
	IGFeedVideoManager* _feedVideoManager;
	IGEventViewerAnalyticsLogger* _logger;
	IGEventViewerPlaybackItem* _playbackItem;
	IGFeedVideoPlayer* _currentPlayer;
	unsigned _videoRetryCount;

}

@property (assign,nonatomic,__weak) id<IGEventViewerVideoPlaybackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentProgress; 
@property (nonatomic,readonly) float currentDuration; 
@property (assign,nonatomic) char audioEnabled;                                                             //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                                       //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) IGEventViewerPlaybackItem * playbackItem;                                      //@synthesize playbackItem=_playbackItem - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * currentPlayer;                                             //@synthesize currentPlayer=_currentPlayer - In the implementation block
@property (assign,nonatomic) char currentVideoDidPlayToEnd;                                                 //@synthesize currentVideoDidPlayToEnd=_currentVideoDidPlayToEnd - In the implementation block
@property (assign,nonatomic) unsigned videoRetryCount;                                                      //@synthesize videoRetryCount=_videoRetryCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)audioEnabled;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayer:(id)arg1 playbackBufferEmpty:(char)arg2 ;
-(void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(char)arg2 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2 ;
-(id)initWithLogger:(id)arg1 ;
-(void)playVideoForItem:(id)arg1 ;
-(void)stopCurrentlyPlayingVideo;
-(char)isCurrentlyPlayingVideo;
-(IGEventViewerPlaybackItem *)playbackItem;
-(void)setPlaybackItem:(IGEventViewerPlaybackItem *)arg1 ;
-(id)initWithFeedVideoManager:(id)arg1 logger:(id)arg2 ;
-(void)prepareToReusePlayer:(id)arg1 ;
-(IGFeedVideoManager *)feedVideoManager;
-(char)currentVideoDidPlayToEnd;
-(void)setVideoRetryCount:(unsigned)arg1 ;
-(void)setCurrentVideoDidPlayToEnd:(char)arg1 ;
-(unsigned)videoRetryCount;
-(void)videoPlayer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoPlayerDidStartPlaying:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 isWaitingForBuffer:(char)arg2 ;
-(void)feedItemVideoViewDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoView:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoViewDidDoubleTapToLike:(id)arg1 ;
-(id)feedItemVideoViewCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedItemVideoViewPosition:(id)arg1 ;
-(void)feedItemVideoViewDidLoadImage:(id)arg1 ;
-(void)feedItemVideoViewDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoViewDidLongPress:(id)arg1 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(float)currentProgress;
-(void)setAudioEnabled:(char)arg1 ;
-(void)setDelegate:(id<IGEventViewerVideoPlaybackControllerDelegate>)arg1 ;
-(id<IGEventViewerVideoPlaybackControllerDelegate>)delegate;
-(IGFeedVideoPlayer *)currentPlayer;
-(void)setCurrentPlayer:(IGFeedVideoPlayer *)arg1 ;
-(float)currentDuration;
@end

