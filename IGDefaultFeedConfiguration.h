
#import <Instagram/IGFeedConfigurationType.h>

@class NSString;

@interface IGDefaultFeedConfiguration : NSObject <IGFeedConfigurationType>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

