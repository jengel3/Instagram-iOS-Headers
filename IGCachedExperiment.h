

@class IGExperimentSpec, IGExperimentGroup;

@interface IGCachedExperiment : NSObject {

	IGExperimentSpec* _spec;
	IGExperimentGroup* _group;
	int _source;
	double _lastExposureEventTime;

}

@property (nonatomic,readonly) IGExperimentSpec * spec;                 //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) IGExperimentGroup * group;               //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) int source;                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) double lastExposureEventTime;              //@synthesize lastExposureEventTime=_lastExposureEventTime - In the implementation block
-(id)initWithSpec:(id)arg1 group:(id)arg2 source:(int)arg3 ;
-(id)valueForParameterNamed:(id)arg1 ;
-(double)lastExposureEventTime;
-(void)setLastExposureEventTime:(double)arg1 ;
-(IGExperimentSpec *)spec;
-(int)source;
-(IGExperimentGroup *)group;
@end

