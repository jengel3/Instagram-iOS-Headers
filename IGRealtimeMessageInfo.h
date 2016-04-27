

@class NSDictionary, NSDate, NSString;

@interface IGRealtimeMessageInfo : NSObject {

	NSDictionary* _dict;
	NSDate* _timestamp;
	id _message;
	unsigned _type;
	NSString* _operationType;
	NSString* _path;

}

@property (nonatomic,retain) NSDictionary * dict;                     //@synthesize dict=_dict - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * operationType;              //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                  //@synthesize path=_path - In the implementation block
+(id)IGRealtimeMessageInfoTypeToString:(unsigned)arg1 ;
+(id)timestampToString:(id)arg1 ;
-(id)initWithMessage:(id)arg1 atTimestamp:(id)arg2 withType:(unsigned)arg3 withOperationType:(id)arg4 withPath:(id)arg5 ;
-(id)description;
-(NSDate *)timestamp;
-(unsigned)type;
-(NSString *)path;
-(id)message;
-(NSDictionary *)dict;
-(void)setDict:(NSDictionary *)arg1 ;
-(NSString *)operationType;
@end

