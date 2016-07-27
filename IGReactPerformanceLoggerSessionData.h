

@class NSString, NSDictionary, NSArray;

@interface IGReactPerformanceLoggerSessionData : NSObject {

	NSString* _viewName;
	NSString* _tag;
	NSString* _bridgeInitState;
	NSDictionary* _jsEvents;
	NSArray* _bridgeLoggerOutput;
	double _initialTime;
	double _bridgeInitStartTime;
	double _bridgeInitEndTime;
	double _contentDidAppearTime;
	unsigned long long _initialResidentMemory;
	unsigned long long _contentDidAppearResidentMemory;

}

@property (nonatomic,copy) NSString * viewName;                                              //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,copy) NSString * tag;                                                   //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSString * bridgeInitState;                                       //@synthesize bridgeInitState=_bridgeInitState - In the implementation block
@property (assign,nonatomic) double initialTime;                                             //@synthesize initialTime=_initialTime - In the implementation block
@property (assign,nonatomic) double bridgeInitStartTime;                                     //@synthesize bridgeInitStartTime=_bridgeInitStartTime - In the implementation block
@property (assign,nonatomic) double bridgeInitEndTime;                                       //@synthesize bridgeInitEndTime=_bridgeInitEndTime - In the implementation block
@property (assign,nonatomic) double contentDidAppearTime;                                    //@synthesize contentDidAppearTime=_contentDidAppearTime - In the implementation block
@property (assign,nonatomic) unsigned long long initialResidentMemory;                       //@synthesize initialResidentMemory=_initialResidentMemory - In the implementation block
@property (assign,nonatomic) unsigned long long contentDidAppearResidentMemory;              //@synthesize contentDidAppearResidentMemory=_contentDidAppearResidentMemory - In the implementation block
@property (nonatomic,copy) NSDictionary * jsEvents;                                          //@synthesize jsEvents=_jsEvents - In the implementation block
@property (nonatomic,copy) NSArray * bridgeLoggerOutput;                                     //@synthesize bridgeLoggerOutput=_bridgeLoggerOutput - In the implementation block
-(double)contentDidAppearTime;
-(double)initialTime;
-(double)bridgeInitEndTime;
-(double)bridgeInitStartTime;
-(NSString *)viewName;
-(void)setViewName:(NSString *)arg1 ;
-(NSString *)bridgeInitState;
-(void)setBridgeInitState:(NSString *)arg1 ;
-(void)setInitialTime:(double)arg1 ;
-(void)setBridgeInitStartTime:(double)arg1 ;
-(void)setBridgeInitEndTime:(double)arg1 ;
-(void)setContentDidAppearTime:(double)arg1 ;
-(unsigned long long)initialResidentMemory;
-(void)setInitialResidentMemory:(unsigned long long)arg1 ;
-(unsigned long long)contentDidAppearResidentMemory;
-(void)setContentDidAppearResidentMemory:(unsigned long long)arg1 ;
-(NSDictionary *)jsEvents;
-(void)setJsEvents:(NSDictionary *)arg1 ;
-(NSArray *)bridgeLoggerOutput;
-(void)setBridgeLoggerOutput:(NSArray *)arg1 ;
-(id)format;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
@end

