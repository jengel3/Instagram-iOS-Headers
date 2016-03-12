

@interface IGDiskCacheAnalyzer : NSObject
+(void)logCacheStatistics;
+(void)calculateCacheSizes:(id*)arg1 counts:(id*)arg2 ;
+(id)regularExpressionsExcludedFromSizesCalculation;
+(id)pathsForCacheStatistics;
+(void)startBackgroundLogCacheStatisticsTaskIfNeeded;
@end

