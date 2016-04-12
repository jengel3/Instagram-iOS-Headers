
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGVideoPlayerDelegate.h>

@protocol IGVideoPlaybackViewDelegate;
@class IGVideoComposition, IGImageFilter, IGSurfaceView, IGVideoPlayer, IGRenderer, IGSurface, IGStabilizationFilter, NSString;

@interface IGVideoPlaybackView : UIView <IGVideoPlayerDelegate> {

	char _isPlaying;
	IGVideoComposition* _video;
	float _progress;
	IGImageFilter* _filter;
	IGSurfaceView* _thumbnailView;
	id<IGVideoPlaybackViewDelegate> _delegate;
	IGVideoPlayer* _videoPlayer;
	IGRenderer* _renderer;
	IGSurface* _stabilizedFrame;
	IGStabilizationFilter* _stabilizationFilter;
	IGSurfaceView* _filteredView;

}

@property (nonatomic,retain) IGVideoComposition * video;                                   //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) char isPlaying;                                               //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) float progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) IGImageFilter * filter;                                       //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) IGSurfaceView * thumbnailView;                                //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoPlaybackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLooping,nonatomic) char looping; 
@property (assign,getter=isMuted,nonatomic) char muted; 
@property (assign,nonatomic) SCD_Struct_IG58 playableRange; 
@property (assign,nonatomic) SCD_Struct_IG44 startTime; 
@property (assign,nonatomic) SCD_Struct_IG44 endTime; 
@property (nonatomic,readonly) SCD_Struct_IG44 currentTime; 
@property (nonatomic,retain) IGVideoPlayer * videoPlayer;                                  //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) IGRenderer * renderer;                                        //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) IGSurface * stabilizedFrame;                                  //@synthesize stabilizedFrame=_stabilizedFrame - In the implementation block
@property (nonatomic,retain) IGStabilizationFilter * stabilizationFilter;                  //@synthesize stabilizationFilter=_stabilizationFilter - In the implementation block
@property (nonatomic,retain) IGSurfaceView * filteredView;                                 //@synthesize filteredView=_filteredView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)playFromStart;
-(void)playFromTime:(SCD_Struct_IG44)arg1 ;
-(id)initWithVideo:(id)arg1 size:(CGSize)arg2 ;
-(void)setPlayableRange:(SCD_Struct_IG58)arg1 ;
-(void)makeKey;
-(void)setIsPlaying:(char)arg1 ;
-(void)seekToPosition:(float)arg1 ;
-(void)stopOnGoingIntoBackground;
-(void)reloadPlayerAsset;
-(IGSurface *)stabilizedFrame;
-(void)setStabilizedFrame:(IGSurface *)arg1 ;
-(IGStabilizationFilter *)stabilizationFilter;
-(IGSurfaceView *)filteredView;
-(void)videoPlayer:(id)arg1 didLoadPixelBuffer:(CVBufferRef)arg2 withTime:(SCD_Struct_IG44)arg3 ;
-(void)videoPlayer:(id)arg1 didFinishPlayingWithAnimation:(char)arg2 ;
-(SCD_Struct_IG58)playableRange;
-(void)setStabilizationFilter:(IGStabilizationFilter *)arg1 ;
-(void)setFilteredView:(IGSurfaceView *)arg1 ;
-(void)setLooping:(char)arg1 ;
-(void)seekToTime:(SCD_Struct_IG44)arg1 ;
-(void)togglePlayback;
-(void)setMuted:(char)arg1 ;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(SCD_Struct_IG44)currentTime;
-(IGVideoPlayer *)videoPlayer;
-(void)setVideoPlayer:(IGVideoPlayer *)arg1 ;
-(IGImageFilter *)filter;
-(char)isPlaying;
-(void)setDelegate:(id<IGVideoPlaybackViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGVideoPlaybackViewDelegate>)delegate;
-(void)setStartTime:(SCD_Struct_IG44)arg1 ;
-(void)stop;
-(void)setFilter:(IGImageFilter *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)setThumbnailView:(IGSurfaceView *)arg1 ;
-(IGSurfaceView *)thumbnailView;
-(float)progress;
-(SCD_Struct_IG44)startTime;
-(SCD_Struct_IG44)endTime;
-(void)setEndTime:(SCD_Struct_IG44)arg1 ;
-(IGVideoComposition *)video;
-(void)setVideo:(IGVideoComposition *)arg1 ;
-(char)isMuted;
-(char)isLooping;
-(IGRenderer *)renderer;
@end

