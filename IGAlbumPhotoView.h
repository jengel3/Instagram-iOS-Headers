
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageProgressViewDelegate.h>
#import <Instagram/IGAlbumPlayerMediaViewType.h>

@protocol IGAlbumItemType, IGAlbumPlayerMediaViewDelegate;
@class IGImageProgressView, NSTimer, CADisplayLink, NSString;

@interface IGAlbumPhotoView : UIView <IGImageProgressViewDelegate, IGAlbumPlayerMediaViewType> {

	char _paused;
	id<IGAlbumItemType> _item;
	IGImageProgressView* _photoView;
	NSTimer* _timer;
	CADisplayLink* _displayLink;
	id<IGAlbumPlayerMediaViewDelegate> _delegate;
	double _timerStartTime;
	double _durationBeforePhotoPause;

}

@property (nonatomic,readonly) IGImageProgressView * photoView;                                 //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                       //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double timerStartTime;                                             //@synthesize timerStartTime=_timerStartTime - In the implementation block
@property (assign,nonatomic) double durationBeforePhotoPause;                                   //@synthesize durationBeforePhotoPause=_durationBeforePhotoPause - In the implementation block
@property (assign,nonatomic) char paused;                                                       //@synthesize paused=_paused - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumPlayerMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> item;                                        //@synthesize item=_item - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isViewFinishedLoading;
-(void)configureWithItem:(id)arg1 delegate:(id)arg2 ;
-(void)seekToBeginning;
-(double)timerStartTime;
-(void)setDurationBeforePhotoPause:(double)arg1 ;
-(double)durationBeforePhotoPause;
-(void)advanceTimerFired:(id)arg1 ;
-(void)setTimerStartTime:(double)arg1 ;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3 ;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)play;
-(IGImageProgressView *)photoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumPlayerMediaViewDelegate>)delegate;
-(id<IGAlbumItemType>)item;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)prepareForReuse;
-(void)setPaused:(char)arg1 ;
-(void)startTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(char)paused;
-(void)pause;
-(void)cancelTimer;
@end

