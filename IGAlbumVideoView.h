
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>
#import <Instagram/IGAlbumPlayerMediaViewType.h>

@protocol IGAlbumItemType, IGAlbumPlayerMediaViewDelegate;
@class IGFeedVideoManager, IGFeedVideoPlayer, IGVideoViewLogger, UIView, IGAlbumGradientRingView, IGImageProgressView, NSString;

@interface IGAlbumVideoView : UIView <IGFeedVideoPlayerDelegate, IGAlbumPlayerMediaViewType> {

	char _audioEnabled;
	char _hasStartedPlayback;
	char _isStopped;
	id<IGAlbumItemType> _item;
	IGFeedVideoManager* _feedVideoManager;
	IGFeedVideoPlayer* _videoPlayer;
	IGVideoViewLogger* _logger;
	UIView* _videoPlayerView;
	IGAlbumGradientRingView* _videoLoadingIndicatorView;
	IGImageProgressView* _photoView;
	id<IGAlbumPlayerMediaViewDelegate> _delegate;
	double _videoShouldStartTime;

}

@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                           //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * videoPlayer;                                   //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) IGVideoViewLogger * logger;                                        //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) UIView * videoPlayerView;                                          //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,retain) IGAlbumGradientRingView * videoLoadingIndicatorView;               //@synthesize videoLoadingIndicatorView=_videoLoadingIndicatorView - In the implementation block
@property (assign,nonatomic) double videoShouldStartTime;                                       //@synthesize videoShouldStartTime=_videoShouldStartTime - In the implementation block
@property (assign,nonatomic) char hasStartedPlayback;                                           //@synthesize hasStartedPlayback=_hasStartedPlayback - In the implementation block
@property (assign,nonatomic) char isStopped;                                                    //@synthesize isStopped=_isStopped - In the implementation block
@property (nonatomic,readonly) IGImageProgressView * photoView;                                 //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumPlayerMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> item;                                        //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) char audioEnabled;                                                 //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)audioEnabled;
-(UIView *)videoPlayerView;
-(void)setVideoPlayerView:(UIView *)arg1 ;
-(IGFeedVideoManager *)feedVideoManager;
-(void)setVideoShouldStartTime:(double)arg1 ;
-(void)setIsStopped:(char)arg1 ;
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
-(void)configureWithItem:(id)arg1 delegate:(id)arg2 loggingContext:(id)arg3 ;
-(void)pauseWithReason:(int)arg1 ;
-(void)seekToBeginning;
-(char)isViewFinishedLoading;
-(IGAlbumGradientRingView *)videoLoadingIndicatorView;
-(void)setVideoLoadingIndicatorView:(IGAlbumGradientRingView *)arg1 ;
-(IGVideoViewLogger *)logger;
-(void)setLogger:(IGVideoViewLogger *)arg1 ;
-(char)isStopped;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)stopWithReason:(int)arg1 ;
-(IGFeedVideoPlayer *)videoPlayer;
-(void)play;
-(IGImageProgressView *)photoView;
-(void)setVideoPlayer:(IGFeedVideoPlayer *)arg1 ;
-(void)setAudioEnabled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGAlbumPlayerMediaViewDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(void)prepareForReuse;
@end

