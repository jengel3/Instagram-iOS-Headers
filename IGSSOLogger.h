

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IGSSOLogger : NSObject {

	char _isComplete;
	NSMutableDictionary* _extras;
	NSObject*<OS_dispatch_queue> _serialQueue;
	double _viewControllerInitializationStartTime;

}

@property (nonatomic,readonly) NSMutableDictionary * extras;                            //@synthesize extras=_extras - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) double viewControllerInitializationStartTime;              //@synthesize viewControllerInitializationStartTime=_viewControllerInitializationStartTime - In the implementation block
@property (assign) char isComplete;                                                     //@synthesize isComplete=_isComplete - In the implementation block
+(id)sharedInstance;
-(void)markTimeForEvent:(id)arg1 ;
-(void)completeSSOProcess;
-(void)setIsComplete:(char)arg1 ;
-(void)cancelForReason:(id)arg1 ;
-(void)markLoginViewControllerInitializationStarted;
-(void)markLoginViewControllerViewDidLoadStarted;
-(void)markSSOFetchDeviceIDStarted;
-(void)markSSOContinueAsNetworkRequestSubmitted;
-(void)markSSOContinueAsNetworkRequestResponseReceived;
-(NSMutableDictionary *)extras;
-(double)viewControllerInitializationStartTime;
-(void)setViewControllerInitializationStartTime:(double)arg1 ;
-(char)isComplete;
-(void)timeout;
-(void)dealloc;
-(id)init;
-(void)backgrounded;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

