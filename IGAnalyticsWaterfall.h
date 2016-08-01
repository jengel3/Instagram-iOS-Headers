
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGAnalyticsUploadWaterfall.h>

@class NSString;

@interface IGAnalyticsWaterfall : NSObject <NSCoding, IGAnalyticsUploadWaterfall> {

	NSString* _currentSessionID;
	NSString* _entryPoint;
	NSString* _experimentGroupName;
	int _numberOfStepsBackward;
	int _numberOfStepsForward;
	unsigned _funnelInstanceID;
	double _startTimestamp;

}

@property (nonatomic,copy) NSString * currentSessionID;                 //@synthesize currentSessionID=_currentSessionID - In the implementation block
@property (nonatomic,copy) NSString * entryPoint;                       //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy) NSString * experimentGroupName;              //@synthesize experimentGroupName=_experimentGroupName - In the implementation block
@property (assign,nonatomic) double startTimestamp;                     //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) int numberOfStepsBackward;                 //@synthesize numberOfStepsBackward=_numberOfStepsBackward - In the implementation block
@property (assign,nonatomic) int numberOfStepsForward;                  //@synthesize numberOfStepsForward=_numberOfStepsForward - In the implementation block
@property (nonatomic,readonly) unsigned funnelInstanceID;               //@synthesize funnelInstanceID=_funnelInstanceID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)currentSessionID;
-(id)logUploadEvent:(id)arg1 ;
-(id)entryPointStringFromEntryPointType:(int)arg1 ;
-(void)setEntryPoint:(NSString *)arg1 ;
-(void)setExperimentGroupName:(NSString *)arg1 ;
-(void)setNumberOfStepsForward:(int)arg1 ;
-(void)setNumberOfStepsBackward:(int)arg1 ;
-(void)setCurrentSessionID:(NSString *)arg1 ;
-(void)startWaterfallFunnel;
-(id)logStepWithName:(id)arg1 stepDirection:(int)arg2 ;
-(int)numberOfStepsForward;
-(int)numberOfStepsBackward;
-(NSString *)experimentGroupName;
-(id)initWithEntryPoint:(int)arg1 experimentGroupName:(id)arg2 ;
-(id)logStepForwardWithName:(id)arg1 ;
-(id)logStepBackwardWithName:(id)arg1 ;
-(unsigned)funnelInstanceID;
-(double)secondsSinceStart;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logEvent:(id)arg1 ;
-(id)eventName;
-(NSString *)entryPoint;
-(void)setStartTimestamp:(double)arg1 ;
-(double)startTimestamp;
@end

