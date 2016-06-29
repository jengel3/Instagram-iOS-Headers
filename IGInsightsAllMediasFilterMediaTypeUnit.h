

@class NSString, IGInsightsQuery, NSArray;

@interface IGInsightsAllMediasFilterMediaTypeUnit : NSObject {

	NSString* _title;
	IGInsightsQuery* _query;
	NSArray* _mediaOrderingTabs;
	NSArray* _timeframeTabs;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) IGInsightsQuery * query;                  //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaOrderingTabs;              //@synthesize mediaOrderingTabs=_mediaOrderingTabs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timeframeTabs;                  //@synthesize timeframeTabs=_timeframeTabs - In the implementation block
-(NSArray *)mediaOrderingTabs;
-(NSArray *)timeframeTabs;
-(id)initWithDictionary:(id)arg1 ;
-(IGInsightsQuery *)query;
-(NSString *)title;
@end

