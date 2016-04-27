

@protocol OS_dispatch_queue;
@class NSString, NSObject, IGReactPerformanceLoggerSessionData;

@interface IGReactPerformanceLoggerSession : NSObject {

	NSString* _viewName;
	NSString* _tag;
	NSObject*<OS_dispatch_queue> _queue;
	IGReactPerformanceLoggerSessionData* _data;

}

@property (nonatomic,copy,readonly) NSString * viewName;                              //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,copy) NSString * tag;                                            //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IGReactPerformanceLoggerSessionData * data;              //@synthesize data=_data - In the implementation block
+(unsigned long long)residentMemoryBytes;
-(void)javaScriptDidLoad:(id)arg1 ;
-(NSString *)viewName;
-(void)logContentDidAppear;
-(void)didReceiveJSEvents:(id)arg1 ;
-(void)reportAnalyticsIfFinished;
-(id)initWithViewName:(id)arg1 ;
-(void)logBridgeStateOnInit:(id)arg1 ;
-(void)logBridgeInitStart;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(IGReactPerformanceLoggerSessionData *)data;
-(void)setData:(IGReactPerformanceLoggerSessionData *)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(void)start;
@end

