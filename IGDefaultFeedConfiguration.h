
#import <Instagram/IGFeedConfigurationType.h>

@class NSString;

@interface IGDefaultFeedConfiguration : NSObject <IGFeedConfigurationType> {

	NSString* _moduleName;

}

@property (nonatomic,copy,readonly) NSString * moduleName;              //@synthesize moduleName=_moduleName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithModuleName:(id)arg1 ;
-(char)shouldPrefetchMediaForFeedItems;
-(char)shouldAutoplayVideos;
-(char)allowAutoPlay;
-(id)feedAccessibilityIdentifier;
-(unsigned)tombstoneTypeForFeed;
-(NSString *)moduleName;
@end

