
#import <Instagram/IGFeedConfigurationType.h>

@class IGDefaultFeedConfiguration, NSString;

@interface IGContextualFeedConfiguration : NSObject <IGFeedConfigurationType> {

	int _entryPoint;
	IGDefaultFeedConfiguration* _defaultConfig;

}

@property (assign,nonatomic) int entryPoint;                                            //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) IGDefaultFeedConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEntryPoint:(int)arg1 ;
-(id)analyticsModule;
-(char)showRefreshButton;
-(char)shouldAutoplayVideos;
-(double)warmStartRefreshInterval;
-(char)showFindFriendsWhenEmpty;
-(char)loadsTitleFromNetworkSource;
-(char)shouldPrefetchMediaForFeedItems;
-(id)init;
-(IGDefaultFeedConfiguration *)defaultConfig;
-(int)entryPoint;
@end

