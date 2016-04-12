

@protocol IGFeedConfigurationType <NSObject>
@required
-(id)analyticsModule;
-(char)showRefreshButton;
-(char)shouldPullToRefresh;
-(char)shouldAutoplayVideos;
-(double)warmStartRefreshInterval;
-(char)showFindFriendsWhenEmpty;
-(char)showAlbumSubscriptionTray;
-(char)loadsTitleFromNetworkSource;
-(char)shouldPrefetchMediaForFeedItems;

@end

