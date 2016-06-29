
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedMediaView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGImageProgressViewDelegate.h>

@protocol IGFeedItemVideoViewDelegate, IGFeedItemVideoViewAudioDelegate, IGFeedItemVideoViewSingleTapDelegate, IGFeedItemVideoViewDoubleTapDelegate, IGVideoCaptionViewType, IGVideoViewLogging;
@class IGImageProgressView, IGVideoLoadProgressView, UIView, IGVideo, UITapGestureRecognizer, UILongPressGestureRecognizer, IGVideoIndicatorView, IGPlaybackTimeIndicatorController, IGPhoto, IGFeedVideoTimeIndicatorView, NSString;

@interface IGFeedItemVideoView : IGFeedMediaView <UIGestureRecognizerDelegate, IGImageProgressViewDelegate> {

	IGImageProgressView* _photoImageView;
	id<IGFeedItemVideoViewDelegate> _delegate;
	id<IGFeedItemVideoViewAudioDelegate> _audioDelegate;
	id<IGFeedItemVideoViewSingleTapDelegate> _singleTapDelegate;
	id<IGFeedItemVideoViewDoubleTapDelegate> _doubleTapDelegate;
	IGVideoLoadProgressView* _progressView;
	UIView*<IGVideoCaptionViewType> _captionView;
	id<IGVideoViewLogging> _logger;
	IGVideo* _video;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	IGVideoIndicatorView* _indicatorView;
	IGPlaybackTimeIndicatorController* _timeIndicatorController;
	float _startTime;
	IGPhoto* _photo;
	UIView* _videoView;
	IGFeedVideoTimeIndicatorView* _timeIndicatorView;
	double _videoShouldStartTime;

}

@property (nonatomic,retain) IGVideoIndicatorView * indicatorView;                                           //@synthesize indicatorView=_indicatorView - In the implementation block
@property (assign,nonatomic) float startTime;                                                                //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                                                              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                                             //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic) double videoShouldStartTime;                                                    //@synthesize videoShouldStartTime=_videoShouldStartTime - In the implementation block
@property (nonatomic,readonly) IGFeedVideoTimeIndicatorView * timeIndicatorView;                             //@synthesize timeIndicatorView=_timeIndicatorView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemVideoViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemVideoViewAudioDelegate> audioDelegate;                      //@synthesize audioDelegate=_audioDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemVideoViewSingleTapDelegate> singleTapDelegate;              //@synthesize singleTapDelegate=_singleTapDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemVideoViewDoubleTapDelegate> doubleTapDelegate;              //@synthesize doubleTapDelegate=_doubleTapDelegate - In the implementation block
@property (nonatomic,readonly) IGVideoLoadProgressView * progressView;                                       //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) UIView*<IGVideoCaptionViewType> captionView;                                  //@synthesize captionView=_captionView - In the implementation block
@property (nonatomic,readonly) char posterFrameLoaded; 
@property (nonatomic,readonly) id<IGVideoViewLogging> logger;                                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                                                              //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapRecognizer;                                 //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapRecognizer;                                 //@synthesize singleTapRecognizer=_singleTapRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressRecognizer;                           //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,readonly) IGPlaybackTimeIndicatorController * timeIndicatorController;                  //@synthesize timeIndicatorController=_timeIndicatorController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForWidth:(float)arg1 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)onTap:(id)arg1 ;
-(UIView*<IGVideoCaptionViewType>)captionView;
-(char)posterFrameLoaded;
-(void)showVideoIndication:(char)arg1 animated:(char)arg2 ;
-(void)showIndicatorStyle:(int)arg1 animated:(char)arg2 ;
-(void)setAudioDelegate:(id<IGFeedItemVideoViewAudioDelegate>)arg1 ;
-(void)setDoubleTapDelegate:(id<IGFeedItemVideoViewDoubleTapDelegate>)arg1 ;
-(void)setVideo:(id)arg1 coverPhoto:(id)arg2 logger:(id)arg3 ;
-(void)disableIndicator:(char)arg1 ;
-(void)layoutCaptionView;
-(id<IGFeedItemVideoViewSingleTapDelegate>)singleTapDelegate;
-(id<IGFeedItemVideoViewDoubleTapDelegate>)doubleTapDelegate;
-(void)disableImageProgressView;
-(IGFeedVideoTimeIndicatorView *)timeIndicatorView;
-(void)onDoubleTap:(id)arg1 ;
-(void)setSingleTapDelegate:(id<IGFeedItemVideoViewSingleTapDelegate>)arg1 ;
-(void)setVideoShouldStartTime:(double)arg1 ;
-(IGPlaybackTimeIndicatorController *)timeIndicatorController;
-(void)cleanUpVideoView;
-(void)updateVideoViewToView:(id)arg1 ;
-(void)updateVideoViewToLoadingState;
-(void)updateVideoViewToPlayingState;
-(double)videoShouldStartTime;
-(id<IGFeedItemVideoViewAudioDelegate>)audioDelegate;
-(void)showVideo:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(id<IGVideoViewLogging>)logger;
-(void)setVideoView:(UIView *)arg1 ;
-(IGPhoto *)photo;
-(id)photoImageView;
-(UIView *)videoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemVideoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFeedItemVideoViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setStartTime:(float)arg1 ;
-(IGVideoLoadProgressView *)progressView;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(float)startTime;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(IGVideoIndicatorView *)indicatorView;
-(void)setIndicatorView:(IGVideoIndicatorView *)arg1 ;
-(IGVideo *)video;
-(UITapGestureRecognizer *)singleTapRecognizer;
@end

