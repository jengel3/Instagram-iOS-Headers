
#import <Instagram/IGEventAggregatorDelegate.h>

@protocol OS_dispatch_queue, IGAnalyticsLoggerDelegate;
@class IGTimeSpent, IGCounterEvent, IGTimerEvent, IGAverageEvent, NSObject, IGAnalyticsLogFileManager, NSString, IGAnalyticsBinarySession, IGAnalyticsSession;

@interface IGAnalyticsLogger : NSObject <IGEventAggregatorDelegate> {

	IGTimeSpent* _timeSpent;
	IGCounterEvent* _counter;
	IGTimerEvent* _timer;
	IGAverageEvent* _averages;
	NSObject*<OS_dispatch_queue> _queue;
	IGAnalyticsLogFileManager* _fileManager;
	NSString* _appID;
	NSString* _deviceID;
	NSString* _deviceSoftwareVersion;
	NSString* _deviceHardwareVersion;
	NSString* _appVersion;
	unsigned _lastProcessedBatchSize;
	IGAnalyticsBinarySession* _binarySession;
	IGAnalyticsSession* _session;
	id<IGAnalyticsLoggerDelegate> _delegate;

}

@property (nonatomic,readonly) IGAnalyticsSession * session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<IGAnalyticsLoggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eventAggregatorDidProduceEvent:(id)arg1 module:(id)arg2 data:(id)arg3 ;
-(void)incrementCounter:(id)arg1 byAmount:(int)arg2 ;
-(void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3 ;
-(void)startTimer:(id)arg1 uuid:(id)arg2 ;
-(void)processCurrentBatch;
-(void)beginNewBatch;
-(void)flushBinaryEvents;
-(void)flushBinaryEventsIfNeeded;
-(void)doLogEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 uuid:(id)arg4 timestamp:(double)arg5 ;
-(void)checkCurrentBatchSize;
-(void)recordAverage:(id)arg1 value:(double)arg2 ;
-(void)appendEventsFromSession:(id)arg1 ;
-(void)eventAggregatorForEvent:(id)arg1 addExtraEventInfoTo:(id)arg2 ;
-(id)initWithQueue:(id)arg1 appID:(id)arg2 deviceID:(id)arg3 delegate:(id)arg4 fileManager:(id)arg5 ;
-(void)beginSessionWithFacebookID:(id)arg1 userID:(id)arg2 ;
-(void)logTimeSpentWithTimeStamp:(double)arg1 ;
-(void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 uuid:(id)arg4 timestamp:(double)arg5 ;
-(void)logEvent:(id)arg1 data:(id)arg2 ;
-(IGAnalyticsSession *)session;
-(void)setDelegate:(id<IGAnalyticsLoggerDelegate>)arg1 ;
-(id<IGAnalyticsLoggerDelegate>)delegate;
-(void)endSession;
@end

