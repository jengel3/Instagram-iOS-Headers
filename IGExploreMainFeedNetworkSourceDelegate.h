

@protocol IGExploreMainFeedNetworkSourceDelegate <NSObject>
@required
-(void)exploreMainFeedNetworkSourceDidGetEmptyResponseForPrefetch:(id)arg1;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadInitialExploreItems:(id)arg2;
-(void)exploreMainFeedNetworkSource:(id)arg1 didLoadMoreExploreItems:(id)arg2;

@end

