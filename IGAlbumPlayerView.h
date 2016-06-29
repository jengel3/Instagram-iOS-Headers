
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGAlbumPlayerViewVideoViewDelegate.h>
#import <Instagram/IGAlbumPlayerViewPhotoViewDelegate.h>
#import <Instagram/IGSoundStateListenerDelegate.h>

@protocol IGAlbumPlayerViewDelegate, IGAlbumPlayerCurrentItemViewProtocol;
@class IGAlbumFocusCoordinator, IGKVOHandle, IGFeedItem, UIView, IGImagePreparer, UIImage, IGSoundStateListener, NSTimer, CADisplayLink, NSString;

@interface IGAlbumPlayerView : UIView <IGAlbumPlayerViewVideoViewDelegate, IGAlbumPlayerViewPhotoViewDelegate, IGSoundStateListenerDelegate> {

	id<IGAlbumPlayerViewDelegate> _delegate;
	IGAlbumFocusCoordinator* _focusCoordinator;
	IGKVOHandle* _currentItemFocusCoordinatorObserver;
	IGFeedItem* _currentItem;
	UIView*<IGAlbumPlayerCurrentItemViewProtocol> _currentItemView;
	IGImagePreparer* _imagePreparer;
	UIImage* _nextItemImage;
	UIImage* _previousItemImage;
	IGSoundStateListener* _soundStateListener;
	NSTimer* _timer;
	CADisplayLink* _displayLink;
	int _state;
	double _timerStartTime;
	double _durationBeforePhotoPause;

}

@property (nonatomic,retain) IGAlbumFocusCoordinator * focusCoordinator;                                 //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,readonly) IGKVOHandle * currentItemFocusCoordinatorObserver;                        //@synthesize currentItemFocusCoordinatorObserver=_currentItemFocusCoordinatorObserver - In the implementation block
@property (nonatomic,retain) IGFeedItem * currentItem;                                                   //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) UIView*<IGAlbumPlayerCurrentItemViewProtocol> currentItemView;              //@synthesize currentItemView=_currentItemView - In the implementation block
@property (nonatomic,readonly) IGImagePreparer * imagePreparer;                                          //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (nonatomic,retain) UIImage * nextItemImage;                                                    //@synthesize nextItemImage=_nextItemImage - In the implementation block
@property (nonatomic,retain) UIImage * previousItemImage;                                                //@synthesize previousItemImage=_previousItemImage - In the implementation block
@property (nonatomic,readonly) IGSoundStateListener * soundStateListener;                                //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                            //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double timerStartTime;                                                      //@synthesize timerStartTime=_timerStartTime - In the implementation block
@property (assign,nonatomic) double durationBeforePhotoPause;                                            //@synthesize durationBeforePhotoPause=_durationBeforePhotoPause - In the implementation block
@property (assign,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumPlayerViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)configureWithFocusCoordinator:(id)arg1 ;
-(void)jumpToIndex:(int)arg1 ;
-(UIView*<IGAlbumPlayerCurrentItemViewProtocol>)currentItemView;
-(void)updateCurrentItem;
-(void)stopCurrentItem;
-(void)setPreviousItemImage:(UIImage *)arg1 ;
-(void)setDurationBeforePhotoPause:(double)arg1 ;
-(void)setViewsForItem:(id)arg1 ;
-(void)setNextItemImage:(UIImage *)arg1 ;
-(id)viewForItem:(id)arg1 ;
-(void)setCurrentItemView:(UIView*<IGAlbumPlayerCurrentItemViewProtocol>)arg1 ;
-(void)playCurrentItem;
-(void)pauseCurrentItem;
-(double)durationBeforePhotoPause;
-(void)advanceTimerFired:(id)arg1 ;
-(void)setTimerStartTime:(double)arg1 ;
-(double)timerStartTime;
-(void)currentItemViewDidLoad:(id)arg1 ;
-(int)currentMediaType;
-(id)currentVideoItemView;
-(void)recycleVideoPlayer;
-(IGKVOHandle *)currentItemFocusCoordinatorObserver;
-(UIImage *)nextItemImage;
-(UIImage *)previousItemImage;
-(void)albumPlayerViewPhotoViewDidFinishLoading:(id)arg1 ;
-(void)albumPlayerViewVideoViewDidLoad:(id)arg1 ;
-(void)albumPlayerViewVideoViewDidPlayToEnd:(id)arg1 ;
-(void)albumPlayerViewVideoViewDidUpdateProgress:(float)arg1 ;
-(IGSoundStateListener *)soundStateListener;
-(void)soundListenerDidUpdate:(id)arg1 ;
-(void)setFocusCoordinator:(IGAlbumFocusCoordinator *)arg1 ;
-(IGImagePreparer *)imagePreparer;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(void)play;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumPlayerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGAlbumPlayerViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)stop;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)prepareForReuse;
-(void)setCurrentItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)currentItem;
-(void)startTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)pause;
-(void)skip;
-(void)rewind;
-(void)cancelTimer;
@end

