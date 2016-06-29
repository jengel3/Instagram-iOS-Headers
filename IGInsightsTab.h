

@class NSString, IGInsightsQuery;

@interface IGInsightsTab : NSObject {

	NSString* _title;
	IGInsightsQuery* _query;

}

@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) IGInsightsQuery * query;              //@synthesize query=_query - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(IGInsightsQuery *)query;
-(NSString *)title;
@end

