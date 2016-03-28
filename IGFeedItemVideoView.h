
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedMediaView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <Instagram/IGAudioNUXControllerDelegate.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>

@protocol IGFeedItemVideoViewDelegate, IGVideoViewLogging;
@class UIView, IGImageProgressView, IGFeedVideoPlayer, IGVideo, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, IGAudioNUXController, IGVideoIndicatorView, NSNumber, IGPhoto;

@interface IGFeedItemVideoView : IGFeedMediaView <UIGestureRecognizerDelegate, IGImageProgressViewDelegate, IGAudioNUXControllerDelegate, IGFeedVideoPlayerDelegate> {

	UIView* _videoView;
	double _videoShouldStartTime;
	char _hasStartedPlayback;
	char _userDidTap;
	char _loading;
	char _allowHardwareSoundControl;
	IGImageProgressView* _photoImageView;
	id<IGFeedItemVideoViewDelegate> _delegate;
	IGFeedVideoPlayer* _player;
	id<IGVideoViewLogging> _logger;
	IGVideo* _video;
	NSString* _videoCacheKey;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	IGAudioNUXController* _audioNUXController;
	IGVideoIndicatorView* _indicatorView;
	NSNumber* _postAudioValue;
	float _startTime;
	IGPhoto* _photo;

}

@property (assign,nonatomic,__weak) id<IGFeedItemVideoViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) char posterFrameLoaded; 
@property (nonatomic,readonly) char hasPlayer; 
@property (nonatomic,readonly) char hasPlaybackError; 
@property (nonatomic,readonly) char isPlaying; 
@property (nonatomic,readonly) id<IGVideoViewLogging> logger;                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                                                 //@synthesize video=_video - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoCacheKey;                                   //@synthesize videoCacheKey=_videoCacheKey - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapRecognizer;                    //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapRecognizer;                    //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressRecognizer;              //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) IGAudioNUXController * audioNUXController;                         //@synthesize audioNUXController=_audioNUXController - In the implementation block
@property (nonatomic,retain) IGVideoIndicatorView * indicatorView;                              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign) char hasStartedPlayback;                                                     //@synthesize hasStartedPlayback=_hasStartedPlayback - In the implementation block
@property (assign) char userDidTap;                                                             //@synthesize userDidTap=_userDidTap - In the implementation block
@property (nonatomic,retain) NSNumber * postAudioValue;                                         //@synthesize postAudioValue=_postAudioValue - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                     //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) float startTime;                                                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                                                 //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) char allowHardwareSoundControl;                                    //@synthesize allowHardwareSoundControl=_allowHardwareSoundControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForWidth:(float)arg1 ;
-(void)playVideoURL:(id)arg1 withPlayer:(id)arg2 config:(id)arg3 ;
-(id)relinquishPlayer;
-(void)setAllowHardwareSoundControl:(char)arg1 ;
-(void)setVideo:(id)arg1 coverPhoto:(id)arg2 videoCacheKey:(id)arg3 logger:(id)arg4 ;
-(void)disableIndicator:(char)arg1 ;
-(void)didPressVolumeButton:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(char)hasPlayer;
-(void)showVideoIndication:(char)arg1 animated:(char)arg2 ;
-(void)showVideo:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)showIndicatorStyle:(int)arg1 animated:(char)arg2 ;
-(char)posterFrameLoaded;
-(void)videoPlayer:(id)arg1 didLoadVideoInView:(id)arg2 ;
-(void)videoPlayerLoadedFirstFrame:(id)arg1 ;
-(void)videoPlayerDidPlayToEnd:(id)arg1 ;
-(void)videoPlayerWillPrepareAssetForPlayback:(id)arg1 ;
-(void)videoPlayer:(id)arg1 playbackBufferEmpty:(char)arg2 ;
-(void)videoPlayer:(id)arg1 playbackBufferLikelyToKeepUp:(char)arg2 ;
-(void)videoPlayer:(id)arg1 didFailToPlaybackWithError:(id)arg2 ;
-(void)videoPlayerDidPlay:(id)arg1 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)hasPlaybackError;
-(void)setAudioNUXController:(IGAudioNUXController *)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)logVideoStoppedForReason:(int)arg1 ;
-(void)showOneTapIndicatorNUXAnimated:(char)arg1 ;
-(char)audioNUXControllerVideoHasSound:(id)arg1 ;
-(char)audioNUXControllerIsPlayingSound:(id)arg1 ;
-(char)audioNUXControllerIsVideoPlaying:(id)arg1 ;
-(void)onDoubleTap:(id)arg1 ;
-(void)onLongTap:(id)arg1 ;
-(void)setHasStartedPlayback:(char)arg1 ;
-(void)setPostAudioValue:(NSNumber *)arg1 ;
-(IGAudioNUXController *)audioNUXController;
-(char)allowHardwareSoundControl;
-(void)observeHeadphoneEvent:(char)arg1 ;
-(void)observeHardwareControlEvents:(char)arg1 ;
-(void)setUserDidTap:(char)arg1 ;
-(void)logVideoStoppedForPlayer:(id)arg1 reason:(int)arg2 ;
-(void)muteSwitchStateChanged:(id)arg1 ;
-(void)didUnplugHeadphones:(id)arg1 ;
-(void)logAudioWillPlay:(char)arg1 reason:(int)arg2 ;
-(char)userDidTap;
-(char)hasStartedPlayback;
-(char)isVideoHasSound;
-(NSNumber *)postAudioValue;
-(void)playWithPlayer:(id)arg1 startTime:(float)arg2 ;
-(NSString *)videoCacheKey;
-(id<IGVideoViewLogging>)logger;
-(IGPhoto *)photo;
-(void)setPlayer:(IGFeedVideoPlayer *)arg1 ;
-(id)photoImageView;
-(void)setAudioEnabled:(char)arg1 ;
-(char)isPlaying;
-(IGFeedVideoPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFeedItemVideoViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setStartTime:(float)arg1 ;
-(char)isLoading;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(float)startTime;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(IGVideoIndicatorView *)indicatorView;
-(void)setIndicatorView:(IGVideoIndicatorView *)arg1 ;
-(IGVideo *)video;
-(UITapGestureRecognizer *)singleTapRecognizer;
-(void)setLoading:(char)arg1 ;
@end

