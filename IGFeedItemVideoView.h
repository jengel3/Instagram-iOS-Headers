
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedMediaView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <Instagram/IGAudioNUXControllerDelegate.h>
#import <Instagram/IGFeedVideoPlayerDelegate.h>

@protocol IGFeedItemVideoViewDelegate;
@class UIView, IGPhoto, IGVideo, IGPost, IGImageProgressView, IGFeedVideoPlayer, UITapGestureRecognizer, UILongPressGestureRecognizer, IGAudioNUXController, IGVideoIndicatorView, NSNumber, NSString;

@interface IGFeedItemVideoView : IGFeedMediaView <UIGestureRecognizerDelegate, IGImageProgressViewDelegate, IGAudioNUXControllerDelegate, IGFeedVideoPlayerDelegate> {

	UIView* _videoView;
	IGPhoto* _photo;
	IGVideo* _video;
	IGPost* _post;
	double _videoShouldStartTime;
	char _hasStartedPlayback;
	char _userDidTap;
	char _loading;
	IGImageProgressView* _photoImageView;
	id<IGFeedItemVideoViewDelegate> _delegate;
	IGFeedVideoPlayer* _player;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	IGAudioNUXController* _audioNUXController;
	IGVideoIndicatorView* _indicatorView;
	NSNumber* _lastPlaybackTime;
	int _originalPlaybackReason;
	NSNumber* _postAudioValue;
	float _startTime;

}

@property (assign,nonatomic,__weak) id<IGFeedItemVideoViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFeedVideoPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) char posterFrameLoaded; 
@property (nonatomic,readonly) char hasPlayer; 
@property (nonatomic,readonly) char hasPlaybackError; 
@property (nonatomic,readonly) char isPlaying; 
@property (nonatomic,readonly) IGPost * post; 
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapRecognizer;                    //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapRecognizer;                    //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressRecognizer;              //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) IGAudioNUXController * audioNUXController;                         //@synthesize audioNUXController=_audioNUXController - In the implementation block
@property (nonatomic,retain) IGVideoIndicatorView * indicatorView;                              //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign) char hasStartedPlayback;                                                     //@synthesize hasStartedPlayback=_hasStartedPlayback - In the implementation block
@property (assign) char userDidTap;                                                             //@synthesize userDidTap=_userDidTap - In the implementation block
@property (retain) NSNumber * lastPlaybackTime;                                                 //@synthesize lastPlaybackTime=_lastPlaybackTime - In the implementation block
@property (assign) int originalPlaybackReason;                                                  //@synthesize originalPlaybackReason=_originalPlaybackReason - In the implementation block
@property (nonatomic,retain) NSNumber * postAudioValue;                                         //@synthesize postAudioValue=_postAudioValue - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                     //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) float startTime;                                                   //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForWidth:(float)arg1 ;
-(void)didPressVolumeButton:(id)arg1 ;
-(void)onTap:(id)arg1 ;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(void)setVideo:(id)arg1 withPhoto:(id)arg2 ;
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
-(id)relinquishPlayer;
-(void)playVideoURL:(id)arg1 withPlayer:(id)arg2 startTime:(float)arg3 ;
-(void)logVideoStoppedForReason:(int)arg1 ;
-(void)disableIndicator:(char)arg1 ;
-(char)audioNUXControllerVideoHasSound:(id)arg1 ;
-(char)audioNUXControllerIsPlayingSound:(id)arg1 ;
-(char)audioNUXControllerIsVideoPlaying:(id)arg1 ;
-(void)showOneTapIndicatorNUX;
-(void)onDoubleTap:(id)arg1 ;
-(void)onLongTap:(id)arg1 ;
-(void)setHasStartedPlayback:(char)arg1 ;
-(void)setLastPlaybackTime:(NSNumber *)arg1 ;
-(void)setOriginalPlaybackReason:(int)arg1 ;
-(void)setPostAudioValue:(NSNumber *)arg1 ;
-(IGAudioNUXController *)audioNUXController;
-(void)observeHeadphoneEvent:(char)arg1 ;
-(void)logVideoStoppedForPlayer:(id)arg1 reason:(int)arg2 ;
-(id)playbackTimesForPlayer:(id)arg1 ;
-(id)playbackAudioSettingsForPlayer:(id)arg1 ;
-(NSNumber *)lastPlaybackTime;
-(int)originalPlaybackReason;
-(void)muteSwitchStateChanged:(id)arg1 ;
-(void)didUnplugHeadphones:(id)arg1 ;
-(void)logAudioWillPlay:(char)arg1 reason:(int)arg2 ;
-(char)userDidTap;
-(void)setUserDidTap:(char)arg1 ;
-(char)hasStartedPlayback;
-(char)isVideoHasSound;
-(NSNumber *)postAudioValue;
-(void)playWithPlayer:(id)arg1 startTime:(float)arg2 ;
-(void)setPlayer:(IGFeedVideoPlayer *)arg1 ;
-(id)photoImageView;
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
-(UITapGestureRecognizer *)singleTapRecognizer;
-(void)setLoading:(char)arg1 ;
@end

