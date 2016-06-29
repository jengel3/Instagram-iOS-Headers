

@protocol IGMainFeedNetworkSourceDelegate <NSObject>
@required
-(void)mainFeedNetworkSourceDidGetEmptyNewStories:(id)arg1;
-(void)mainFeedNetworkSource:(id)arg1 didGetNumberOfNewStories:(int)arg2;

@end

