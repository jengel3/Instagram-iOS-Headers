
#import <Instagram/IGEventViewerVideoPlaybackControllerDelegate.h>
#import <Instagram/IGEventViewerPhotoPlaybackControllerDelegate.h>

@protocol IGEventViewerMediaPlaybackDelegate, IGEventViewerMediaProgressDelegate;
@class IGEventViewerVideoPlaybackController, IGEventViewerPhotoPlaybackController, IGEventViewerAnalyticsLogger, NSString;

@interface IGEventViewerMediaPlaybackController : NSObject <IGEventViewerVideoPlaybackControllerDelegate, IGEventViewerPhotoPlaybackControllerDelegate> {

	id<IGEventViewerMediaPlaybackDelegate> _playDelegate;
	id<IGEventViewerMediaProgressDelegate> _progressDelegate;
	IGEventViewerVideoPlaybackController* _videoPlaybackController;
	IGEventViewerPhotoPlaybackController* _photoPlaybackController;
	IGEventViewerAnalyticsLogger* _logger;

}

@property (nonatomic,readonly) IGEventViewerVideoPlaybackController * videoPlaybackController;              //@synthesize videoPlaybackController=_videoPlaybackController - In the implementation block
@property (nonatomic,readonly) IGEventViewerPhotoPlaybackController * photoPlaybackController;              //@synthesize photoPlaybackController=_photoPlaybackController - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaPlaybackDelegate> playDelegate;                    //@synthesize playDelegate=_playDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaProgressDelegate> progressDelegate;                //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (assign,nonatomic) char audioEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)audioEnabled;
-(id)initWithLogger:(id)arg1 ;
-(IGEventViewerVideoPlaybackController *)videoPlaybackController;
-(IGEventViewerPhotoPlaybackController *)photoPlaybackController;
-(char)isPlayingPhoto;
-(id<IGEventViewerMediaPlaybackDelegate>)playDelegate;
-(void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 withDuration:(double)arg3 ;
-(void)videoPlaybackController:(id)arg1 didUpdateVideoProgress:(float)arg2 forItem:(id)arg3 ;
-(void)videoPlaybackController:(id)arg1 didPlayVideoToEndForItem:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didPauseVideoForItem:(id)arg2 ;
-(void)photoPlaybackController:(id)arg1 didBeginPlayingPhotoForItem:(id)arg2 withDuration:(double)arg3 ;
-(void)photoPlaybackController:(id)arg1 didUpdatePhotoProgress:(float)arg2 forItem:(id)arg3 ;
-(void)photoPlaybackController:(id)arg1 didEndPlayingPhotoForItem:(id)arg2 ;
-(void)photoPlaybackController:(id)arg1 didPausePhotoForItem:(id)arg2 ;
-(void)playMediaForItem:(id)arg1 startTime:(float)arg2 ;
-(char)isPlayingMedia;
-(void)stopCurrentMedia;
-(void)pauseCurrentMedia;
-(void)cacheCurrentFrameForTime:(float)arg1 completion:(/*^block*/id)arg2 ;
-(float)currentProgressForPost:(id)arg1 ;
-(float)currentDurationForPost:(id)arg1 ;
-(void)setPlayDelegate:(id<IGEventViewerMediaPlaybackDelegate>)arg1 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(void)setAudioEnabled:(char)arg1 ;
-(char)isPlayingVideo;
-(id<IGEventViewerMediaProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<IGEventViewerMediaProgressDelegate>)arg1 ;
@end

