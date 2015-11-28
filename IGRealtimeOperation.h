

@class NSString, IGSequence;

@interface IGRealtimeOperation : NSObject {

	unsigned _type;
	NSString* _path;
	id _value;
	IGSequence* _timestamp;

}

@property (nonatomic,readonly) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) id value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) IGSequence * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithType:(unsigned)arg1 path:(id)arg2 value:(id)arg3 timestamp:(id)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
-(IGSequence *)timestamp;
-(unsigned)type;
-(NSString *)path;
-(id)value;
@end

