

@interface IGMainFeedPillConfiguration : NSObject
+(char)enableFeedPillAtWarmStart;
+(char)enableFeedPillAtColdStart;
+(double)warmStartMaxInterval;
+(char)shouldFetchFeedPillFast;
@end

