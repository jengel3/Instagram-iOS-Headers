
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGAlbumPlayerViewVideoViewDelegate.h>

@protocol IGAlbumPlayerViewProgressDelegate;
@class IGAlbumFocusCoordinator, IGAlbumPlayerViewConfiguration, IGKVOHandle, IGPostItem, UIView, IGMediaPreloader, IGImagePreparer, NSTimer, CADisplayLink, NSString;

@interface IGAlbumPlayerView : UIView <IGAlbumPlayerViewVideoViewDelegate> {

	id<IGAlbumPlayerViewProgressDelegate> _progressDelegate;
	IGAlbumFocusCoordinator* _focusCoordinator;
	IGAlbumPlayerViewConfiguration* _config;
	IGKVOHandle* _currentItemFocusCoordinatorObserver;
	IGPostItem* _currentItem;
	UIView* _currentItemView;
	IGMediaPreloader* _mediaPreloader;
	IGImagePreparer* _imagePreparer;
	NSTimer* _timer;
	CADisplayLink* _displayLink;
	int _state;
	double _timerStartTime;

}

@property (assign,nonatomic,__weak) id<IGAlbumPlayerViewProgressDelegate> progressDelegate;              //@synthesize progressDelegate=_progressDelegate - In the implementation block
@property (nonatomic,retain) IGAlbumFocusCoordinator * focusCoordinator;                                 //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerViewConfiguration * config;                                    //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) IGKVOHandle * currentItemFocusCoordinatorObserver;                        //@synthesize currentItemFocusCoordinatorObserver=_currentItemFocusCoordinatorObserver - In the implementation block
@property (nonatomic,retain) IGPostItem * currentItem;                                                   //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) UIView * currentItemView;                                                   //@synthesize currentItemView=_currentItemView - In the implementation block
@property (nonatomic,readonly) IGMediaPreloader * mediaPreloader;                                        //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,readonly) IGImagePreparer * imagePreparer;                                          //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double timerStartTime;                                                      //@synthesize timerStartTime=_timerStartTime - In the implementation block
@property (assign,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)configureWithFocusCoordinator:(id)arg1 configuration:(id)arg2 ;
-(void)setFocusCoordinator:(IGAlbumFocusCoordinator *)arg1 ;
-(UIView *)currentItemView;
-(void)updateCurrentItem;
-(void)stopCurrentItem;
-(void)setViewsForItem:(id)arg1 ;
-(void)playCurrentItem;
-(void)preloadItem:(id)arg1 ;
-(id)viewForItem:(id)arg1 ;
-(void)setCurrentItemView:(UIView *)arg1 ;
-(void)pauseCurrentItem;
-(void)advanceTimerFired:(id)arg1 ;
-(void)setTimerStartTime:(double)arg1 ;
-(double)timerStartTime;
-(int)currentMediaType;
-(id)currentVideoItemView;
-(void)recycleVideoPlayer;
-(IGKVOHandle *)currentItemFocusCoordinatorObserver;
-(void)albumPlayerViewVideoViewDidPlayToEnd:(id)arg1 ;
-(void)albumPlayerViewVideoViewDidUpdateProgress:(float)arg1 ;
-(IGMediaPreloader *)mediaPreloader;
-(IGImagePreparer *)imagePreparer;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(void)play;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)stop;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)prepareForReuse;
-(void)setCurrentItem:(IGPostItem *)arg1 ;
-(IGPostItem *)currentItem;
-(void)startTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)pause;
-(IGAlbumPlayerViewConfiguration *)config;
-(void)setConfig:(IGAlbumPlayerViewConfiguration *)arg1 ;
-(id<IGAlbumPlayerViewProgressDelegate>)progressDelegate;
-(void)setProgressDelegate:(id<IGAlbumPlayerViewProgressDelegate>)arg1 ;
-(void)skip;
-(void)cancelTimer;
@end

