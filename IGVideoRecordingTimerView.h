
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGVideoInfo, UIView, UILabel, CADisplayLink;

@interface IGVideoRecordingTimerView : UIView {

	char _timerEnabled;
	/*^block*/id _progressBlock;
	IGVideoInfo* _videoInfo;
	UIView* _indicatorView;
	UILabel* _timerTextView;
	float _clipsDuration;
	CADisplayLink* _displayLink;
	int _counter;
	unsigned _totalDuration;

}

@property (nonatomic,retain) UIView * indicatorView;                   //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) UILabel * timerTextView;                  //@synthesize timerTextView=_timerTextView - In the implementation block
@property (assign,nonatomic) float clipsDuration;                      //@synthesize clipsDuration=_clipsDuration - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) int counter;                              //@synthesize counter=_counter - In the implementation block
@property (assign,nonatomic) unsigned totalDuration;                   //@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,copy) id progressBlock;                           //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) IGVideoInfo * videoInfo;                  //@synthesize videoInfo=_videoInfo - In the implementation block
@property (assign,nonatomic) char timerEnabled;                        //@synthesize timerEnabled=_timerEnabled - In the implementation block
+(float)defaultHeight;
-(IGVideoInfo *)videoInfo;
-(void)addClip:(id)arg1 ;
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(void)setTimerEnabled:(char)arg1 ;
-(void)removeLastClip;
-(void)updateBlinker;
-(void)onClipAdded:(id)arg1 ;
-(void)reloadAllClips;
-(float)clipsDuration;
-(void)setClipsDuration:(float)arg1 ;
-(UILabel *)timerTextView;
-(void)updateRunningTime:(float)arg1 ;
-(char)timerEnabled;
-(void)setTimerTextView:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(int)counter;
-(void)setCounter:(int)arg1 ;
-(unsigned)totalDuration;
-(void)setTotalDuration:(unsigned)arg1 ;
-(UIView *)indicatorView;
-(void)setIndicatorView:(UIView *)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
@end

