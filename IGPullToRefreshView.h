
#import <UIKit/UIView.h>

@protocol IGPullRefreshControlDelegate;
@class UIView, UILabel, CALayer;

@interface IGPullToRefreshView : UIView {

	char _isSpinning;
	char _hasEverPullBeyondRefreshThreshold;
	char _isRecordingStatistics;
	float _startingContentOffsetY;
	id<IGPullRefreshControlDelegate> _delegate;
	UIView* _spinnerView;
	UILabel* _statusLabel;
	int _state;
	CALayer* _gradientLayer;
	float _previousProgress;
	float _startingProgressWhenLogged;
	float _angleSpeed;
	double _startingProgressTimeStamp;

}

@property (assign,nonatomic) float startingContentOffsetY;                                  //@synthesize startingContentOffsetY=_startingContentOffsetY - In the implementation block
@property (assign,nonatomic,__weak) id<IGPullRefreshControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * spinnerView;                                          //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) int state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char isSpinning;                                               //@synthesize isSpinning=_isSpinning - In the implementation block
@property (assign,nonatomic) char hasEverPullBeyondRefreshThreshold;                        //@synthesize hasEverPullBeyondRefreshThreshold=_hasEverPullBeyondRefreshThreshold - In the implementation block
@property (nonatomic,retain) CALayer * gradientLayer;                                       //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) float previousProgress;                                        //@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) float startingProgressWhenLogged;                              //@synthesize startingProgressWhenLogged=_startingProgressWhenLogged - In the implementation block
@property (assign,nonatomic) double startingProgressTimeStamp;                              //@synthesize startingProgressTimeStamp=_startingProgressTimeStamp - In the implementation block
@property (assign,nonatomic) float angleSpeed;                                              //@synthesize angleSpeed=_angleSpeed - In the implementation block
@property (assign,nonatomic) char isRecordingStatistics;                                    //@synthesize isRecordingStatistics=_isRecordingStatistics - In the implementation block
-(id)progressPathWithProgress:(float)arg1 ;
-(void)setupInitialAnimationState;
-(id)circularSpinningAnimation;
-(id)gradientSpinningAnimation;
-(void)setupFinishedAnimationState;
-(id)suggestedCircleSpinAnimationDestinationAngle;
-(double)suggestedCircleSpinAnimationDuration;
-(float)angleSpeed;
-(float)numberOfDiscreteUnits;
-(char)isShowingOnlyFirstSpinnerBar:(float)arg1 ;
-(char)isShowingNineClockSpinnerBars:(float)arg1 ;
-(char)isRecordingStatistics;
-(void)setIsRecordingStatistics:(char)arg1 ;
-(void)setStartingProgressWhenLogged:(float)arg1 ;
-(void)setStartingProgressTimeStamp:(double)arg1 ;
-(char)isShowingAllSpinnerBars:(float)arg1 ;
-(float)startingProgressWhenLogged;
-(double)startingProgressTimeStamp;
-(void)setAngleSpeed:(float)arg1 ;
-(float)discreteProgress:(float)arg1 ;
-(void)setSpinnerView:(UIView *)arg1 ;
-(char)hasEverPullBeyondRefreshThreshold;
-(float)startingContentOffsetY;
-(void)updateSpinnerWithPullOffset:(float)arg1 ;
-(void)setHasEverPullBeyondRefreshThreshold:(char)arg1 ;
-(void)setStartingContentOffsetY:(float)arg1 ;
-(void)updateWithPullingOffset:(float)arg1 ;
-(void)startSpinningAndTriggerNetworkFetchIfPulledPastThreshold;
-(void)stopSpinning;
-(void)ensureHiddenIfNotSpinning;
-(void)setDelegate:(id<IGPullRefreshControlDelegate>)arg1 ;
-(id)init;
-(id<IGPullRefreshControlDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(CALayer *)gradientLayer;
-(void)stopAnimation;
-(void)startAnimation;
-(void)setPreviousProgress:(float)arg1 ;
-(float)previousProgress;
-(char)isSpinning;
-(void)setIsSpinning:(char)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UIView *)spinnerView;
-(void)setGradientLayer:(CALayer *)arg1 ;
@end

