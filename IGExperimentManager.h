

@interface IGExperimentManager : NSObject
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(id)dumpExperimentGroupMappingForDebugging;
+(void)setConfigurationProvider:(id)arg1 ;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(char)exposeCachedValueForMainFeedExperiment;
+(id)currentExperimentSets;
+(void)disableExperiments;
@end

