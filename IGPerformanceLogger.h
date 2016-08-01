

@class NSString;

@interface IGPerformanceLogger : NSObject {

	NSString* _identifier;

}
+(id)sampledPerformanceLogger;
+(id)unsampledPerformanceLogger;
-(void)_log:(id)arg1 start:(double)arg2 duration:(double)arg3 extra:(id)arg4 ;
-(id)_memoryConsumption;
-(id)markStart:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

