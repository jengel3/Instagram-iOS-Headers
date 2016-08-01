
#import <Instagram/IGFeedConfigurationType.h>

@class IGDefaultFeedConfiguration, IGMainFeedConfiguration, NSString;

@interface IGAdRatingFeedConfiguration : NSObject <IGFeedConfigurationType> {

	IGDefaultFeedConfiguration* _defaultFeedConfiguration;
	IGMainFeedConfiguration* _mainFeedConfiguration;

}

@property (nonatomic,readonly) IGDefaultFeedConfiguration * defaultFeedConfiguration;              //@synthesize defaultFeedConfiguration=_defaultFeedConfiguration - In the implementation block
@property (nonatomic,readonly) IGMainFeedConfiguration * mainFeedConfiguration;                    //@synthesize mainFeedConfiguration=_mainFeedConfiguration - In the implementation block
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
-(IGMainFeedConfiguration *)mainFeedConfiguration;
-(IGDefaultFeedConfiguration *)defaultFeedConfiguration;
-(id)init;
@end

