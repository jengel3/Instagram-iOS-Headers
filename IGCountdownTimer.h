

@protocol IGCountdownTimerDelegate;
@class NSTimer;

@interface IGCountdownTimer : NSObject {

	id<IGCountdownTimerDelegate> _delegate;
	int _duration;
	NSTimer* _countdownTimer;
	int _secondsLeft;

}

@property (nonatomic,retain) NSTimer * countdownTimer;                                  //@synthesize countdownTimer=_countdownTimer - In the implementation block
@property (assign,nonatomic) int secondsLeft;                                           //@synthesize secondsLeft=_secondsLeft - In the implementation block
@property (assign,nonatomic) int duration;                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic,__weak) id<IGCountdownTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidateTimer;
-(void)setSecondsLeft:(int)arg1 ;
-(void)setCountdownTimer:(NSTimer *)arg1 ;
-(void)timerFired;
-(NSTimer *)countdownTimer;
-(int)secondsLeft;
-(void)continueTimer;
-(id)newTimer;
-(id)initWithDuration:(int)arg1 ;
-(void)setDelegate:(id<IGCountdownTimerDelegate>)arg1 ;
-(id<IGCountdownTimerDelegate>)delegate;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(void)resetTimer;
@end

