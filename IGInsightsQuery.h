

@class NSString;

@interface IGInsightsQuery : NSObject {

	NSString* _pageType;
	NSString* _timeframe;
	NSString* _dataOrdering;
	NSString* _after;
	NSString* _first;

}

@property (nonatomic,copy,readonly) NSString * pageType;                  //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeframe;                 //@synthesize timeframe=_timeframe - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataOrdering;              //@synthesize dataOrdering=_dataOrdering - In the implementation block
@property (nonatomic,copy) NSString * after;                              //@synthesize after=_after - In the implementation block
@property (nonatomic,copy) NSString * first;                              //@synthesize first=_first - In the implementation block
-(id)toDict;
-(NSString *)timeframe;
-(NSString *)dataOrdering;
-(NSString *)after;
-(void)copyPageTypeFromQuery:(id)arg1 ;
-(void)copyTimeframeFromQuery:(id)arg1 ;
-(void)copyDataOrderingFromQuery:(id)arg1 ;
-(void)setAfter:(NSString *)arg1 ;
-(NSString *)first;
-(void)setFirst:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)pageType;
@end

