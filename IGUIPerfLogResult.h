

@class NSDate, NSString;

@interface IGUIPerfLogResult : NSObject {

	NSDate* _stamps[16];
	NSString* _entryPoint;

}

@property (nonatomic,readonly) NSString * entryPoint;              //@synthesize entryPoint=_entryPoint - In the implementation block
-(double)timeIntervalFromEvent:(unsigned)arg1 toEvent:(unsigned)arg2 ;
-(id)initWithEntryPoint:(id)arg1 ;
-(void)markEvent:(unsigned)arg1 ;
-(NSString *)entryPoint;
@end

