
#import <Instagram/IGExperimentManagerConfigurationProvider.h>

@class NSString;

@interface IGInstagramExperimentManagerConfigurationProvider : NSObject <IGExperimentManagerConfigurationProvider>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)provider;
-(id)deviceExperimentSet;
-(id)allExperimentSpecs;
-(id)currentExperimentSets;
@end

