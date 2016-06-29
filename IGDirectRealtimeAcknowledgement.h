

@class NSArray, NSString, NSDictionary;

@interface IGDirectRealtimeAcknowledgement : NSObject {

	NSArray* _itemIDs;
	NSArray* _expirationDates;
	NSString* _threadID;
	NSDictionary* _rawResponse;

}

@property (nonatomic,copy,readonly) NSArray * itemIDs;                       //@synthesize itemIDs=_itemIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * expirationDates;               //@synthesize expirationDates=_expirationDates - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadID;                     //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rawResponse;              //@synthesize rawResponse=_rawResponse - In the implementation block
-(id)initWithItemIDs:(id)arg1 expirationDates:(id)arg2 threadID:(id)arg3 rawResponse:(id)arg4 ;
-(NSArray *)expirationDates;
-(id)description;
-(NSArray *)itemIDs;
-(NSString *)threadID;
-(NSDictionary *)rawResponse;
@end

