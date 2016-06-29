
#import <Instagram/IGFeedConfigurationType.h>

@class IGDefaultFeedConfiguration, NSString;

@interface IGAdPreviewFeedConfiguration : NSObject <IGFeedConfigurationType> {

	IGDefaultFeedConfiguration* _defaultConfig;

}

@property (nonatomic,readonly) IGDefaultFeedConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)shouldPrefetchMediaForFeedItems;
-(char)shouldAutoplayVideos;
-(char)allowAutoPlay;
-(id)feedAccessibilityIdentifier;
-(unsigned)tombstoneTypeForFeed;
-(char)showFindFriendsWhenEmpty;
-(id)init;
-(IGDefaultFeedConfiguration *)defaultConfig;
@end

