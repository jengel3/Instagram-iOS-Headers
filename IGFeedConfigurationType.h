

@protocol IGFeedConfigurationType <NSObject>
@required
-(id)analyticsModule;
-(char)shouldPrefetchMediaForFeedItems;
-(char)shouldAutoplayVideos;
-(char)allowAutoPlay;
-(id)feedAccessibilityIdentifier;
-(unsigned)tombstoneTypeForFeed;

@end

