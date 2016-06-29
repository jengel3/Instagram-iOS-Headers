
#import <Instagram/IGExperimentManagerProvider.h>

@class NSString;

@interface IGInstagramExperimentProvider : NSObject <IGExperimentManagerProvider>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)provider;
-(id)deviceExperimentSet;
-(id)currentUserSessionExperimentSet;
-(id)allExperimentSpecs;
@end

