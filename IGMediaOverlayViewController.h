
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGStatusBarHiding.h>

@protocol IGMediaOverlayViewControllerDelegate, IGMediaOverlayAnalyticsLogging;
@class IGPhoto, IGVideo, UIImage, IGVideoPlaybackController, UIImageView, IGFeedItemVideoView, UIView, NSString;

@interface IGMediaOverlayViewController : UIViewController <IGMediaRequestDelegate, IGStatusBarHiding> {

	char _statusBarHidden;
	id<IGMediaOverlayViewControllerDelegate> _delegate;
	IGPhoto* _photo;
	IGVideo* _video;
	UIImage* _previewImage;
	IGVideoPlaybackController* _playbackController;
	UIImageView* _imageView;
	IGFeedItemVideoView* _videoView;
	id<IGMediaOverlayAnalyticsLogging> _analyticsLogger;
	CGRect _mediaViewInitialFrame;

}

@property (nonatomic,readonly) IGPhoto * photo;                                                     //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                                                     //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                                              //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) IGVideoPlaybackController * playbackController;                      //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoView * videoView;                                       //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) UIView * mediaView; 
@property (assign,nonatomic) CGRect mediaViewInitialFrame;                                          //@synthesize mediaViewInitialFrame=_mediaViewInitialFrame - In the implementation block
@property (assign,nonatomic) char statusBarHidden;                                                  //@synthesize statusBarHidden=_statusBarHidden - In the implementation block
@property (nonatomic,readonly) id<IGMediaOverlayAnalyticsLogging> analyticsLogger;                  //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (assign,nonatomic,__weak) id<IGMediaOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(id)analyticsModule;
-(id<IGMediaOverlayAnalyticsLogging>)analyticsLogger;
-(void)stopVideoIfNeeded;
-(CGRect)videoViewFrame;
-(CGRect)imageViewFrame;
-(void)playVideoIfNeeded;
-(IGVideoPlaybackController *)playbackController;
-(void)didTap:(id)arg1 ;
-(void)didPan:(id)arg1 ;
-(void)setMediaViewInitialFrame:(CGRect)arg1 ;
-(CGRect)mediaViewInitialFrame;
-(id)initWithPhoto:(id)arg1 video:(id)arg2 previewImage:(id)arg3 ;
-(void)setVideoView:(IGFeedItemVideoView *)arg1 ;
-(IGPhoto *)photo;
-(IGFeedItemVideoView *)videoView;
-(void)setDelegate:(id<IGMediaOverlayViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMediaOverlayViewControllerDelegate>)delegate;
-(char)statusBarHidden;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)setStatusBarHidden:(char)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImage *)previewImage;
-(void)setupGestures;
-(IGVideo *)video;
-(UIView *)mediaView;
@end

