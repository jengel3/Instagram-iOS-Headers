

@class NSString, NSDictionary;

@interface IGEventServiceConfiguration : NSObject {

	NSString* _eventId;
	unsigned _eventType;
	NSString* _fetchPath;
	NSDictionary* _params;

}

@property (nonatomic,readonly) NSString * eventId;                 //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) unsigned eventType;                 //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSString * fetchPath;               //@synthesize fetchPath=_fetchPath - In the implementation block
@property (nonatomic,readonly) NSDictionary * params;              //@synthesize params=_params - In the implementation block
+(id)fetchPathFromEventType:(unsigned)arg1 eventId:(id)arg2 ;
-(id)initWithEventId:(id)arg1 eventType:(unsigned)arg2 params:(id)arg3 ;
-(NSString *)fetchPath;
-(NSDictionary *)params;
-(NSString *)eventId;
-(unsigned)eventType;
@end

