
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>
#import <Instagram/IGSoundStateListenerDelegate.h>
#import <Instagram/IGAlbumPlayerMediaViewType.h>

@protocol IGAlbumItemType, IGAlbumPlayerMediaViewDelegate;
@class IGFeedVideoManager, IGFeedVideoPlayer, UIView, IGImageProgressView, IGSoundStateListener, NSString;

@interface IGAlbumVideoView : UIView <IGFeedVideoPlayerDelegate, IGSoundStateListenerDelegate, IGAlbumPlayerMediaViewType> {

	char _paused;
	id<IGAlbumItemType> _item;
	IGFeedVideoManager* _feedVideoManager;
	IGFeedVideoPlayer* _videoPlayer;
	UIView* _videoPlayerView;
	IGImageProgressView* _photoView;
	id<IGAlbumPlayerMediaViewDelegate> _delegate;
	IGSoundStateListener* _soundStateListener;

}

@property (nonatomic,readonly) IGFeedVideoManager * feedVideoManager;                           //@synthesize feedVideoManager=_feedVideoManager - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * videoPlayer;                                   //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) UIView * videoPlayerView;                                          //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,readonly) IGImageProgressView * photoView;                                 //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) char paused;                                                       //@synthesize paused=_paused - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumPlayerMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGSoundStateListener * soundStateListener;                       //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> item;                                        //@synthesize item=_item - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isViewFinishedLoading;
-(void)configureWithItem:(id)arg1 delegate:(id)arg2 ;
-(void)seekToBeginning;
-(UIView *)videoPlayerView;
-(void)setVideoPlayerView:(UIView *)arg1 ;
-(IGFeedVideoManager *)feedVideoManager;
-(IGSoundStateListener *)soundStateListener;
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
-(void)soundListenerDidUpdate:(id)arg1 ;
-(IGFeedVideoPlayer *)videoPlayer;
-(void)play;
-(IGImageProgressView *)photoView;
-(void)setVideoPlayer:(IGFeedVideoPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGAlbumPlayerMediaViewDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(void)prepareForReuse;
-(void)setPaused:(char)arg1 ;
-(char)paused;
-(void)pause;
@end

