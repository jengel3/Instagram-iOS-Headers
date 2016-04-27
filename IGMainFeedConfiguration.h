
#import <Instagram/IGFeedConfigurationType.h>

@class IGDefaultFeedConfiguration, NSString;

@interface IGMainFeedConfiguration : NSObject <IGFeedConfigurationType> {

	IGDefaultFeedConfiguration* _defaultConfig;

}

@property (nonatomic,readonly) IGDefaultFeedConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
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
-(id)init;
-(IGDefaultFeedConfiguration *)defaultConfig;
@end

