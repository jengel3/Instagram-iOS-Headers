
#import <Instagram/IGFeedConfigurationType.h>

@class IGDefaultFeedConfiguration, NSString;

@interface IGContextualFeedConfiguration : NSObject <IGFeedConfigurationType> {

	int _entryPoint;
	IGDefaultFeedConfiguration* _defaultConfig;

}

@property (nonatomic,readonly) IGDefaultFeedConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (assign,nonatomic) int entryPoint;                                            //@synthesize entryPoint=_entryPoint - In the implementation block
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
-(id)initWithEntryPoint:(int)arg1 ;
-(void)setEntryPoint:(int)arg1 ;
-(IGDefaultFeedConfiguration *)defaultConfig;
-(int)entryPoint;
@end

