

@protocol OS_dispatch_queue;
@class NSString, NSObject, IGReactPerformanceLoggerSessionData, RCTPerformanceLogger;

@interface IGReactPerformanceLoggerSession : NSObject {

	NSString* _viewName;
	NSString* _tag;
	NSObject*<OS_dispatch_queue> _queue;
	IGReactPerformanceLoggerSessionData* _data;
	RCTPerformanceLogger* _reactPerformanceLogger;

}

@property (nonatomic,copy,readonly) NSString * viewName;                                 //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,copy) NSString * tag;                                               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IGReactPerformanceLoggerSessionData * data;                 //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) RCTPerformanceLogger * reactPerformanceLogger;              //@synthesize reactPerformanceLogger=_reactPerformanceLogger - In the implementation block
+(unsigned long long)residentMemoryBytes;
-(void)logContentDidAppear;
-(void)logInitialContentDidAppear;
-(NSString *)viewName;
-(void)javaScriptDidLoad:(id)arg1 ;
-(void)didReceiveJSEvents:(id)arg1 ;
-(void)reportAnalyticsIfFinished;
-(id)initWithViewName:(id)arg1 ;
-(void)logBridgeStateOnInit:(id)arg1 ;
-(void)logBridgeInitStart;
-(RCTPerformanceLogger *)reactPerformanceLogger;
-(void)setReactPerformanceLogger:(RCTPerformanceLogger *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(IGReactPerformanceLoggerSessionData *)data;
-(void)setData:(IGReactPerformanceLoggerSessionData *)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)start;
@end

