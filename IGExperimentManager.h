

@interface IGExperimentManager : NSObject
+(id)deviceExperimentSet;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(void)setExperimentProvider:(id)arg1 ;
+(id)dumpExperimentGroupMappingForDebugging;
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(void)disableExperiments;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(char)exposeCachedValueForMainFeedExperiment;
@end

