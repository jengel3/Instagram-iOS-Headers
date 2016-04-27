

@protocol IGFeedConfigurationType <NSObject>
@required
-(id)analyticsModule;
-(double)warmStartRefreshInterval;
-(char)showRefreshButton;
-(char)shouldPullToRefresh;
-(char)loadsTitleFromNetworkSource;
-(char)shouldPrefetchMediaForFeedItems;
-(char)shouldAutoplayVideos;
-(char)showFindFriendsWhenEmpty;
-(char)showAlbumSubscriptionTray;
-(char)allowAutoPlay;

@end

