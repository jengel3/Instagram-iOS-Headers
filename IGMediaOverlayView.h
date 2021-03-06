
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGVideoPlaybackViewDelegate.h>
#import <Instagram/IGAudioNUXControllerDelegate.h>

@class UIImage, IGVideoComposition, UIColor, UIImageView, UIView, IGVideoPlaybackView, IGAudioNUXController, IGMediaOverlayIndicator, NSString;

@interface IGMediaOverlayView : UIView <IGVideoPlaybackViewDelegate, IGAudioNUXControllerDelegate> {

	char _dismissed;
	UIImage* _image;
	IGVideoComposition* _video;
	UIColor* _backgroundColor;
	UIImageView* _backgroundView;
	UIView* _contentView;
	UIImageView* _imageView;
	IGVideoPlaybackView* _videoPlayerView;
	IGAudioNUXController* _audioNUXController;
	IGMediaOverlayIndicator* _indicator;
	/*^block*/id _resetBlock;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) IGVideoComposition * video;                             //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGVideoPlaybackView * videoPlayerView;                  //@synthesize videoPlayerView=_videoPlayerView - In the implementation block
@property (nonatomic,retain) IGAudioNUXController * audioNUXController;              //@synthesize audioNUXController=_audioNUXController - In the implementation block
@property (nonatomic,retain) IGMediaOverlayIndicator * indicator;                    //@synthesize indicator=_indicator - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,copy) id resetBlock;                                            //@synthesize resetBlock=_resetBlock - In the implementation block
@property (assign,nonatomic) char dismissed;                                         //@synthesize dismissed=_dismissed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGVideoPlaybackView *)videoPlayerView;
-(void)setVideoPlayerView:(IGVideoPlaybackView *)arg1 ;
-(void)onTap:(id)arg1 ;
-(IGMediaOverlayIndicator *)indicator;
-(IGAudioNUXController *)audioNUXController;
-(void)setAudioNUXController:(IGAudioNUXController *)arg1 ;
-(char)audioNUXControllerVideoHasSound:(id)arg1 ;
-(char)audioNUXControllerIsPlayingSound:(id)arg1 ;
-(char)audioNUXControllerIsVideoPlaying:(id)arg1 ;
-(void)setIndicator:(IGMediaOverlayIndicator *)arg1 ;
-(id)initWithImage:(id)arg1 video:(id)arg2 backgroundColor:(id)arg3 ;
-(void)scaleFromRect:(CGRect)arg1 destinationSize:(CGSize)arg2 resetBlock:(/*^block*/id)arg3 ;
-(id)initWithImage:(id)arg1 video:(id)arg2 ;
-(void)scaleFromRect:(CGRect)arg1 resetBlock:(/*^block*/id)arg2 ;
-(void)filterPlayerViewDidFinishPlayingWithAnimation:(char)arg1 ;
-(void)playbackView:(id)arg1 didPlayToTime:(SCD_Struct_IG19)arg2 ;
-(void)setDismissed:(char)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)layoutSubviews;
-(UIImage *)image;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setBackgroundView:(UIImageView *)arg1 ;
-(UIImageView *)backgroundView;
-(char)dismissed;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)dismiss;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setResetBlock:(id)arg1 ;
-(id)resetBlock;
-(IGVideoComposition *)video;
-(void)setVideo:(IGVideoComposition *)arg1 ;
@end

