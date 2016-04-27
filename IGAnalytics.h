
#import <Instagram/IGAnalyticsImmediateActiveSecondsDelegate.h>
#import <Instagram/IGAnalyticsLoggerDelegate.h>
#import <Instagram/IGAnalyticsConnectionObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, IGAnalyticsLogger, IGImmediateActiveSeconds, NSString, IGAnalyticsLogFileManager, IGAnalyticsUploader, IGAnalyticsConnectionObserver, NSTimer;

@interface IGAnalytics : NSObject <IGAnalyticsImmediateActiveSecondsDelegate, IGAnalyticsLoggerDelegate, IGAnalyticsConnectionObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	IGAnalyticsLogger* _logger;
	IGImmediateActiveSeconds* _immediateActiveSeconds;
	NSString* _deviceID;
	NSString* _APIKey;
	NSString* _APISecret;
	char _periodicUploadEnabled;
	NSString* _toView;
	NSString* _toViewEntityId;
	NSString* _userID;
	NSString* _facebookID;
	IGAnalyticsLogFileManager* _logFileManager;
	IGAnalyticsLogFileManager* _noLatencyFileManager;
	IGAnalyticsUploader* _uploader;
	IGAnalyticsUploader* _noLatencyLogsUploader;
	int _lastAppIconBadgeNumber;
	IGAnalyticsConnectionObserver* _connectionObserver;
	int _periodicUploadTimeInterval;
	NSTimer* _uploadTimer;
	double _lastActiveTimestamp;
	double _lastForegroundTimestamp;
	double _accumulatedBackgroundTime;
	double _accumulatedActiveTime;

}

@property (nonatomic,retain) NSString * toView;                                               //@synthesize toView=_toView - In the implementation block
@property (nonatomic,retain) NSString * toViewEntityId;                                       //@synthesize toViewEntityId=_toViewEntityId - In the implementation block
@property (nonatomic,copy) NSString * userID;                                                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * facebookID;                                             //@synthesize facebookID=_facebookID - In the implementation block
@property (nonatomic,retain) IGAnalyticsLogFileManager * logFileManager;                      //@synthesize logFileManager=_logFileManager - In the implementation block
@property (nonatomic,retain) IGAnalyticsLogFileManager * noLatencyFileManager;                //@synthesize noLatencyFileManager=_noLatencyFileManager - In the implementation block
@property (nonatomic,retain) IGAnalyticsUploader * uploader;                                  //@synthesize uploader=_uploader - In the implementation block
@property (nonatomic,retain) IGAnalyticsUploader * noLatencyLogsUploader;                     //@synthesize noLatencyLogsUploader=_noLatencyLogsUploader - In the implementation block
@property (assign,nonatomic) int lastAppIconBadgeNumber;                                      //@synthesize lastAppIconBadgeNumber=_lastAppIconBadgeNumber - In the implementation block
@property (assign,nonatomic) double lastActiveTimestamp;                                      //@synthesize lastActiveTimestamp=_lastActiveTimestamp - In the implementation block
@property (assign,nonatomic) double lastForegroundTimestamp;                                  //@synthesize lastForegroundTimestamp=_lastForegroundTimestamp - In the implementation block
@property (assign,nonatomic) double accumulatedBackgroundTime;                                //@synthesize accumulatedBackgroundTime=_accumulatedBackgroundTime - In the implementation block
@property (assign,nonatomic) double accumulatedActiveTime;                                    //@synthesize accumulatedActiveTime=_accumulatedActiveTime - In the implementation block
@property (nonatomic,retain) IGAnalyticsConnectionObserver * connectionObserver;              //@synthesize connectionObserver=_connectionObserver - In the implementation block
@property (assign,nonatomic) char periodicUploadEnabled;                                      //@synthesize periodicUploadEnabled=_periodicUploadEnabled - In the implementation block
@property (assign,nonatomic) int periodicUploadTimeInterval;                                  //@synthesize periodicUploadTimeInterval=_periodicUploadTimeInterval - In the implementation block
@property (nonatomic,retain) NSTimer * uploadTimer;                                           //@synthesize uploadTimer=_uploadTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPeriodicUploadEnabled:(char)arg1 ;
+(void)setPeriodicUploadTimeInterval:(int)arg1 ;
+(void)setNoLatencyLogFileDirectory:(id)arg1 ;
+(void)logApplicationInit;
+(void)logApplicationLaunch:(char)arg1 ;
+(void)logApplicationForeground;
+(double)applicationLaunchTimestamp;
+(void)setLogFileDirectory:(id)arg1 ;
+(id)sharedAnalytics;
-(void)incrementCounter:(id)arg1 byAmount:(int)arg2 ;
-(void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3 ;
-(void)startTimer:(id)arg1 uuid:(id)arg2 ;
-(void)setPeriodicUploadEnabled:(char)arg1 ;
-(void)setPeriodicUploadTimeInterval:(int)arg1 ;
-(IGAnalyticsLogFileManager *)logFileManager;
-(void)setLogFileManager:(IGAnalyticsLogFileManager *)arg1 ;
-(void)setUploader:(IGAnalyticsUploader *)arg1 ;
-(void)setNoLatencyFileManager:(IGAnalyticsLogFileManager *)arg1 ;
-(void)setNoLatencyLogsUploader:(IGAnalyticsUploader *)arg1 ;
-(void)handleApplicationDidBecomeActive;
-(void)handleApplicationDidEnterBackground;
-(void)handleApplicationWillEnterForeground;
-(void)handleApplicationWillResignActive;
-(void)handleApplicationWillTerminate;
-(void)logApplication:(id)arg1 state:(id)arg2 ;
-(void)uploadNoLatencyEventsIfNecessary;
-(double)accumulatedBackgroundTime;
-(void)setAccumulatedBackgroundTime:(double)arg1 ;
-(void)logApplication:(id)arg1 state:(id)arg2 timestamp:(double)arg3 ;
-(void)scheduleUploadTimer;
-(char)periodicUploadEnabled;
-(int)periodicUploadTimeInterval;
-(void)handlePeriodicUpload;
-(void)uploadEvents;
-(void)handleUserCredentialsUpdated;
-(void)setFacebookID:(NSString *)arg1 ;
-(void)setLastForegroundTimestamp:(double)arg1 ;
-(void)setLastActiveTimestamp:(double)arg1 ;
-(double)lastActiveTimestamp;
-(double)lastForegroundTimestamp;
-(double)accumulatedActiveTime;
-(void)setAccumulatedActiveTime:(double)arg1 ;
-(void)addDeviceDetailsToExtras:(id)arg1 ;
-(void)logApplicationData:(id)arg1 forState:(id)arg2 ;
-(void)observeApplication;
-(void)setConnectionObserver:(IGAnalyticsConnectionObserver *)arg1 ;
-(void)logNoLatencyEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)logApplicationPush:(id)arg1 withType:(int)arg2 userInfo:(id)arg3 ;
-(void)setToViewEntityId:(NSString *)arg1 ;
-(void)logApplicationPushNotificationsSettings:(id)arg1 onStateTransition:(id)arg2 ;
-(void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 uuid:(id)arg4 ;
-(int)lastAppIconBadgeNumber;
-(void)setLastAppIconBadgeNumber:(int)arg1 ;
-(void)uploadSessionData:(id)arg1 session:(id)arg2 allowableRetries:(int)arg3 channel:(int)arg4 ;
-(IGAnalyticsUploader *)noLatencyLogsUploader;
-(IGAnalyticsLogFileManager *)noLatencyFileManager;
-(void)logNoLatencyUploadSuccessWithResponseData:(id)arg1 rawResponse:(id)arg2 ;
-(IGAnalyticsUploader *)uploader;
-(void)handleUserIDUpdated:(id)arg1 ;
-(void)handleFacebookIDUpdated:(id)arg1 ;
-(void)startAnalyticsWithAPIKey:(id)arg1 secret:(id)arg2 deviceID:(id)arg3 userID:(id)arg4 facebookID:(id)arg5 ;
-(void)logBinaryEvent:(id)arg1 data:(id)arg2 ;
-(void)logApplication:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)switchToView:(id)arg1 entityId:(id)arg2 ;
-(void)logTimeSpentForModule:(id)arg1 ;
-(NSString *)toViewEntityId;
-(IGAnalyticsConnectionObserver *)connectionObserver;
-(NSTimer *)uploadTimer;
-(void)setUploadTimer:(NSTimer *)arg1 ;
-(void)connectionObserver:(id)arg1 connectionChangedWithReachability:(id)arg2 radioTechnology:(id)arg3 ;
-(void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 uuid:(id)arg4 timestamp:(double)arg5 channel:(int)arg6 ;
-(void)recordAverage:(id)arg1 value:(double)arg2 ;
-(void)analyticsLoggerForEvent:(id)arg1 addExtraEventInfoTo:(id)arg2 ;
-(void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 uuid:(id)arg4 timestamp:(double)arg5 ;
-(NSString *)facebookID;
-(void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(void)immediateActiveSeconds:(id)arg1 didProduceData:(id)arg2 forModule:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)toView;
-(void)setToView:(NSString *)arg1 ;
-(void)endSession;
-(void)beginSession;
-(double)currentTimestamp;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
@end

