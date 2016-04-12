

@class IGExperimentSet;

@interface IGExperimentManager : NSObject {

	IGExperimentSet* _deviceExperimentSet;

}

@property (nonatomic,retain) IGExperimentSet * deviceExperimentSet;              //@synthesize deviceExperimentSet=_deviceExperimentSet - In the implementation block
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(id)experimentsGroupsMapping;
+(id)exposeCachedValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(char)exposeCachedValueForBoolExperiment:(id)arg1 ;
+(id)effectiveGroupNameForExperiment:(id)arg1 ;
+(void)requestColdStart:(id)arg1 ;
+(id)experiments;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(id)experimentForKey:(id)arg1 ;
+(id)cachedExperimentForKey:(id)arg1 ;
+(id)exposeValueFromExperiment:(id)arg1 parameterName:(id)arg2 respectingHoldout:(id)arg3 ;
+(id)experimentsByCategory;
+(void)disableExperiments;
+(id)sharedInstance;
-(IGExperimentSet *)deviceExperimentSet;
-(void)setDeviceExperimentSet:(IGExperimentSet *)arg1 ;
-(id)init;
@end

