

@class NSString;

@interface IGBoostPostLogger : NSObject {

	NSString* _entryPoint;
	NSString* _waterfallID;

}

@property (nonatomic,copy,readonly) NSString * entryPoint;               //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * waterfallID;              //@synthesize waterfallID=_waterfallID - In the implementation block
+(id)loggerWithEntryPoint:(id)arg1 ;
-(id)initWithEntryPoint:(id)arg1 ;
-(NSString *)waterfallID;
-(void)didTapEntryPoint;
-(void)logEvent:(id)arg1 additionalFields:(id)arg2 ;
-(NSString *)entryPoint;
@end

