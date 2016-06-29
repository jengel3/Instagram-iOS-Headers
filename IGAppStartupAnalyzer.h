

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IGAppStartupAnalyzer : NSObject {

	char _enabled;
	char _isComplete;
	NSMutableDictionary* _extras;
	NSObject*<OS_dispatch_queue> _serialQueue;
	double _mainCompleteTime;

}

@property (nonatomic,readonly) NSMutableDictionary * extras;                          //@synthesize extras=_extras - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) double mainCompleteTime;                                 //@synthesize mainCompleteTime=_mainCompleteTime - In the implementation block
@property (assign) char isComplete;                                                   //@synthesize isComplete=_isComplete - In the implementation block
@property (assign) char enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(void)markMainComplete;
-(NSMutableDictionary *)extras;
-(void)markTimePoint:(id)arg1 extra:(id)arg2 ;
-(void)completeColdStart;
-(void)setIsComplete:(char)arg1 ;
-(void)cancelWithStatus:(id)arg1 ;
-(void)markApplicationDidFinishLaunchingStarted;
-(void)markApplicationDidFinishLaunchingFinished;
-(void)markIGServiceSetupStarted;
-(void)markIGServiceSetupFinished;
-(void)markIGAuthHelperSetupStarted;
-(void)markIGAuthHelperSetupFinished;
-(void)markIGURLCacheSetupStarted;
-(void)markIGURLCacheSetupFinished;
-(void)markApplicationInitStarted;
-(void)markApplicationInitFinished;
-(void)markAppDelegateInitStarted;
-(void)markAppDelegateInitFinished;
-(void)markLaunchUsable;
-(void)markFeedViewControllerInitializationStarted;
-(void)markFeedViewControllerInitializationFinished;
-(void)markFeedViewControllerViewDidLoadStarted;
-(void)markFeedViewControllerViewDidLoadFinished;
-(void)markCachedStoriesDiskLoadStarted;
-(void)markCachedStoriesDiskLoadFinished;
-(void)markCachedStoriesDisplayed;
-(void)markFeedRequestSubmitted;
-(void)markFeedResponseReceived;
-(void)markFeedResponseProcessed;
-(double)mainCompleteTime;
-(void)setMainCompleteTime:(double)arg1 ;
-(char)isComplete;
-(void)timeout;
-(char)enabled;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(void)backgrounded;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end
