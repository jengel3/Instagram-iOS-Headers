
#import <Instagram/IGFeedConfigurationType.h>

@class NSString;

@interface IGDefaultFeedConfiguration : NSObject <IGFeedConfigurationType>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

