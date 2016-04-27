
#import <Instagram/IGCountdownTimerDelegate.h>

@protocol IGConfirmPhoneManagerDelegate;
@class IGConfirmPhoneSettings, NSTimer, IGCountdownTimer;

@interface IGConfirmPhoneManager : NSObject <IGCountdownTimerDelegate> {

	char _resendSMSDelayPassed;
	IGConfirmPhoneSettings* _confirmPhoneSettings;
	id<IGConfirmPhoneManagerDelegate> _delegate;
	NSTimer* _resendSMSTimer;
	IGCountdownTimer* _robocallTimer;
	int _numSMSResends;

}

@property (nonatomic,readonly) IGConfirmPhoneSettings * confirmPhoneSettings;                //@synthesize confirmPhoneSettings=_confirmPhoneSettings - In the implementation block
@property (assign,nonatomic,__weak) id<IGConfirmPhoneManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSTimer * resendSMSTimer;                                       //@synthesize resendSMSTimer=_resendSMSTimer - In the implementation block
@property (nonatomic,retain) IGCountdownTimer * robocallTimer;                               //@synthesize robocallTimer=_robocallTimer - In the implementation block
@property (assign,nonatomic) int numSMSResends;                                              //@synthesize numSMSResends=_numSMSResends - In the implementation block
@property (assign,nonatomic) char resendSMSDelayPassed;                                      //@synthesize resendSMSDelayPassed=_resendSMSDelayPassed - In the implementation block
-(void)resetResendTimer;
-(int)numSMSResends;
-(IGCountdownTimer *)robocallTimer;
-(void)invalidateResendTimer;
-(void)setResendSMSDelayPassed:(char)arg1 ;
-(void)setNumSMSResends:(int)arg1 ;
-(char)resendSMSDelayPassed;
-(NSTimer *)resendSMSTimer;
-(void)setResendSMSTimer:(NSTimer *)arg1 ;
-(void)resendTimerFired:(id)arg1 ;
-(id)initWithConfirmPhoneSettings:(id)arg1 ;
-(void)invalidateActiveTimer;
-(void)continueActiveTimer;
-(void)updateManagerAfterResendingCode;
-(char)canResendSMS;
-(void)setRobocallTimer:(IGCountdownTimer *)arg1 ;
-(void)timer:(id)arg1 didFireWithSecondsLeft:(int)arg2 ;
-(IGConfirmPhoneSettings *)confirmPhoneSettings;
-(void)setDelegate:(id<IGConfirmPhoneManagerDelegate>)arg1 ;
-(id<IGConfirmPhoneManagerDelegate>)delegate;
@end

