

@class NSString;

@interface IGExposureLogger : NSObject {

	NSString* _uniqueIdentifier;

}
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(void)logExposureForExperiment:(id)arg1 ;
@end

