
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGImageProgressViewDelegate.h>

@protocol IGDirectVideoViewDelegate;
@class IGImageProgressView, IGVideo, IGPhoto, IGVideoIndicatorView, UIView, IGFeedVideoPlayer, NSString;

@interface IGDirectVideoView : UIView <IGFeedVideoPlayerDelegate, UIGestureRecognizerDelegate, IGImageProgressViewDelegate> {

	char _loading;
	id<IGDirectVideoViewDelegate> _delegate;
	IGImageProgressView* _photoImageView;
	IGVideo* _video;
	IGPhoto* _photo;
	IGVideoIndicatorView* _indicatorView;
	UIView* _videoView;
	IGFeedVideoPlayer* _player;

}

@property (nonatomic,retain) IGVideo * video;                                            //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) IGPhoto * photo;                                            //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) IGVideoIndicatorView * indicatorView;                       //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                         //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) IGImageProgressView * photoImageView;                       //@synthesize photoImageView=_photoImageView - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * player;                                 //@synthesize player=_player - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                              //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectVideoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char posterFrameLoaded; 
@property (nonatomic,readonly) char hasPlayer; 
@property (nonatomic,readonly) char hasPlaybackError; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
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
-(void)setVideo:(id)arg1 withPhoto:(id)arg2 ;
-(void)setVideo:(id)arg1 withImage:(id)arg2 ;
-(void)hideVideoIndicator;
-(void)playWithPlayer:(id)arg1 ;
-(char)hasPlayer;
-(void)relinquishPlayerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)playVideoURL:(id)arg1 withPlayer:(id)arg2 ;
-(char)hasPlaybackError;
-(char)posterFrameLoaded;
-(void)showVideoIndication:(char)arg1 animated:(char)arg2 ;
-(void)showVideo:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)showIndicatorStyle:(int)arg1 animated:(char)arg2 ;
-(void)setVideoView:(UIView *)arg1 ;
-(IGPhoto *)photo;
-(void)setPlayer:(IGFeedVideoPlayer *)arg1 ;
-(void)setPhotoImageView:(IGImageProgressView *)arg1 ;
-(IGImageProgressView *)photoImageView;
-(UIView *)videoView;
-(IGFeedVideoPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGDirectVideoViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)isLoading;
-(void)setPhoto:(IGPhoto *)arg1 ;
-(IGVideoIndicatorView *)indicatorView;
-(void)setIndicatorView:(IGVideoIndicatorView *)arg1 ;
-(IGVideo *)video;
-(void)setVideo:(IGVideo *)arg1 ;
-(void)setLoading:(char)arg1 ;
@end

