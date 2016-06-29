

@class NSArray, NSString, NSUUID, IGSequence;

@interface IGRealtimePatchEvent : NSObject {

	NSArray* _operations;
	NSString* _topic;
	NSUUID* _uuid;
	IGSequence* _sequence;

}

@property (nonatomic,readonly) NSArray * operations;               //@synthesize operations=_operations - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;              //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) IGSequence * sequence;              //@synthesize sequence=_sequence - In the implementation block
-(IGSequence *)sequence;
-(id)initWithDictionary:(id)arg1 ;
-(NSUUID *)uuid;
-(NSArray *)operations;
-(NSString *)topic;
@end

