

@protocol IGAnalyticsImmediateActiveSecondsDelegate;
@class NSString;

@interface IGImmediateActiveSeconds : NSObject {

	unsigned _bucketForReportingActiveSeconds;
	unsigned _immediateActiveSecondsSamplingRate;
	double _lastActiveTimeSecond;
	double _lastForegroundTime;
	char _shouldComputeBucketForReportingActiveSeconds;
	NSString* _userID;
	id<IGAnalyticsImmediateActiveSecondsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGAnalyticsImmediateActiveSecondsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)shouldReportCurrentActiveSecond:(double)arg1 ;
-(void)maybeReportActiveSecond:(double)arg1 forModule:(id)arg2 ;
-(void)setLastForegroundTime:(double)arg1 ;
-(void)setDelegate:(id<IGAnalyticsImmediateActiveSecondsDelegate>)arg1 ;
-(id<IGAnalyticsImmediateActiveSecondsDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setUserID:(id)arg1 ;
@end

