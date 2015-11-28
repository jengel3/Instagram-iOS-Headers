

@protocol IGCountdownTimerDelegate;
@class NSTimer;

@interface IGCountdownTimer : NSObject {

	id<IGCountdownTimerDelegate> _delegate;
	NSTimer* _timeRemainingTimer;
	int _timeRemainingBeforeCall;
	int _initialTimeBeforeCall;

}

@property (assign,nonatomic,__weak) id<IGCountdownTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSTimer * timeRemainingTimer;                              //@synthesize timeRemainingTimer=_timeRemainingTimer - In the implementation block
@property (assign,nonatomic) int timeRemainingBeforeCall;                               //@synthesize timeRemainingBeforeCall=_timeRemainingBeforeCall - In the implementation block
@property (assign,nonatomic) int initialTimeBeforeCall;                                 //@synthesize initialTimeBeforeCall=_initialTimeBeforeCall - In the implementation block
-(void)invalidateTimer;
-(int)initialTimeBeforeCall;
-(void)setTimeRemainingBeforeCall:(int)arg1 ;
-(void)setTimeRemainingTimer:(NSTimer *)arg1 ;
-(void)timerFired;
-(NSTimer *)timeRemainingTimer;
-(int)timeRemainingBeforeCall;
-(id)initWithInitialTimeBeforeCall:(int)arg1 ;
-(int)timeBeforeCall;
-(void)setInitialTimeBeforeCall:(int)arg1 ;
-(id)newTimer;
-(void)setDelegate:(id<IGCountdownTimerDelegate>)arg1 ;
-(id<IGCountdownTimerDelegate>)delegate;
-(void)resetTimer;
@end

