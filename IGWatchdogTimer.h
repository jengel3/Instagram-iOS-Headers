

#import <Instagram/Instagram-Structs.h>
@class NSThread;

@interface IGWatchdogTimer : NSObject {

	NSThread* _watchdogThread;
	double _backoff;
	CFRunLoopObserverRef _keepaliveObserver;
	atomic<double> _lastKeepaliveTime;
	atomic<double> _lastStallEndTime;
	atomic<signed char> _currentlyStalled;
	atomic<signed char> _currentlyAboveThreadThreshold;
	atomic<signed char> _suspended;
	char _enabled;
	double _timeout;

}

@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)mainThreadWatchdog;
-(id)initWithBackoff:(double)arg1 ;
-(void)_stopObservingNotifications;
-(void)_stopMonitoringThreads;
-(void)_startObservingNotifications;
-(void)_startWatchdog;
-(void)_stopWatchdog;
-(void)_startMonitoringThreads;
-(void)_watchdogExpired;
-(void)_watchdogMethod;
-(void)_watchdogThread;
-(void)raiseTimeoutForThisRunloop;
-(void)willRecordStackBacktraces;
-(double)_lastKeepaliveUnwrapped;
-(double)timeout;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setTimeout:(double)arg1 ;
@end

