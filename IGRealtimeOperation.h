
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IGSequence;

@interface IGRealtimeOperation : NSObject <NSCopying> {

	unsigned _type;
	NSString* _path;
	id _value;
	IGSequence* _timestamp;

}

@property (assign,nonatomic) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) IGSequence * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)IGRealtimeOperationTypeToString;
-(id)initWithType:(unsigned)arg1 path:(id)arg2 value:(id)arg3 timestamp:(id)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
-(IGSequence *)timestamp;
-(void)setType:(unsigned)arg1 ;
-(void)setTimestamp:(IGSequence *)arg1 ;
-(unsigned)type;
-(NSString *)path;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(NSString *)arg1 ;
@end

