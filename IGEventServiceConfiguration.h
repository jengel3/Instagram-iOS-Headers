

@class NSString;

@interface IGEventServiceConfiguration : NSObject {

	NSString* _eventId;
	NSString* _eventType;
	NSString* _fetchPath;

}

@property (nonatomic,readonly) NSString * eventId;                //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSString * fetchPath;              //@synthesize fetchPath=_fetchPath - In the implementation block
+(id)fetchPathFromEventType:(id)arg1 eventId:(id)arg2 ;
-(id)initWithEventId:(id)arg1 eventType:(id)arg2 ;
-(NSString *)fetchPath;
-(NSString *)eventId;
-(NSString *)eventType;
@end

