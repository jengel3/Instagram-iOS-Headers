

@protocol OS_dispatch_queue, OS_dispatch_source, IGAnalyticsTimeSpentDelegate;
@class NSObject;

@interface IGAnalyticsTimeSpent : NSObject {

	double _lastActive;
	double _startTime;
	int _tosArrayLengthInSeconds;
	int _sequenceID;
	int _tosCumulativeBitsSet;
	NSObject*<OS_dispatch_queue> _queue;
	double _unixTime;
	long _persistentUptime;
	int _tosArray[2];
	/*^block*/id _timingBlock;
	NSObject*<OS_dispatch_source> _timer;
	char _isActiveTimer;
	id<IGAnalyticsTimeSpentDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<IGAnalyticsTimeSpentDelegate> delegate; 
-(double)_currentSystemTime;
-(void)_shipItWithSystemTime:(double)arg1 ;
-(double)_currentUnixTime;
-(long)_currentPersistentUptime;
-(void)_doUpdate:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long)arg3 ;
-(void)_resetArray;
-(id)_packageData;
-(int)_calculateElapsedFromTime:(double)arg1 ;
-(char)_tosArrayEmpty;
-(void)_setArrayStartTime:(double)arg1 withUnixTime:(double)arg2 withPersistentUptime:(long)arg3 ;
-(void)save;
-(void)setDelegate:(id<IGAnalyticsTimeSpentDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAnalyticsTimeSpentDelegate>)delegate;
-(void)reset;
-(void)_startTimer:(int)arg1 ;
-(void)update:(double)arg1 ;
-(void)_stopTimer;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
@end

