

@protocol IGFeedConfigurationType <NSObject>
@required
-(id)analyticsModule;
-(char)showRefreshButton;
-(char)shouldAutoplayVideos;
-(double)warmStartRefreshInterval;
-(char)showFindFriendsWhenEmpty;
-(char)loadsTitleFromNetworkSource;
-(char)shouldPrefetchMediaForFeedItems;

@end

