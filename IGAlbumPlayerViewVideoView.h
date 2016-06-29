
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>
#import <Instagram/IGAlbumPlayerCurrentItemViewProtocol.h>

@protocol IGAlbumPlayerViewVideoViewDelegate;
@class IGFeedVideoManager, IGFeedVideoPlayer, UIView, IGImageProgressView, NSString;

@interface IGAlbumPlayerViewVideoView : UIView <IGFeedVideoPlayerDelegate, IGAlbumPlayerCurrentItemViewProtocol> {

	char _paused;
	IGFeedVideoManager* _feedVideoManager;
	IGFeedVideoPlayer* _videoPlayer;
	UIView* _videoPlayerView;
	IGImageProgressView* _photoView;
	id<IGAlbumPlayerViewVideoViewDelegate> _delegate;

}

@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                               //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * videoPlayer;                                       //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) UIView * videoPlayerView;                                              //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,readonly) IGImageProgressView * photoView;                                     //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) char paused;                                                           //@synthesize paused=_paused - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumPlayerViewVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isViewFinishedLoading;
-(UIView *)videoPlayerView;
-(void)setVideoPlayerView:(UIView *)arg1 ;
-(IGFeedVideoManager *)feedVideoManager;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayer:(id)arg1 playbackBufferEmpty:(char)arg2 ;
-(void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(char)arg2 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)videoPlayerDidPause:(id)arg1 ;
-(void)videoPlayer:(id)arg1 didUpdateLoadingProgress:(float)arg2 ;
-(void)videoPlayer:(id)arg1 didUpdatePlaybackProgress:(float)arg2 ;
-(void)videoPlayerDidFinishSeeking:(id)arg1 ;
-(void)configureWithVideo:(id)arg1 coverPhoto:(id)arg2 audioEnabled:(char)arg3 delegate:(id)arg4 ;
-(IGFeedVideoPlayer *)videoPlayer;
-(void)play;
-(IGImageProgressView *)photoView;
-(void)setVideoPlayer:(IGFeedVideoPlayer *)arg1 ;
-(void)setAudioEnabled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGAlbumPlayerViewVideoViewDelegate>)delegate;
-(void)prepareForReuse;
-(void)setPaused:(char)arg1 ;
-(char)paused;
-(void)pause;
@end

