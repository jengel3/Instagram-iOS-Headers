

@class NSString;

@interface IGInsightsQuery : NSObject {

	NSString* _pageType;
	NSString* _timeframe;
	NSString* _dataOrdering;

}

@property (nonatomic,copy,readonly) NSString * pageType;                  //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeframe;                 //@synthesize timeframe=_timeframe - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataOrdering;              //@synthesize dataOrdering=_dataOrdering - In the implementation block
-(id)toDict;
-(NSString *)timeframe;
-(NSString *)dataOrdering;
-(void)copyPageTypeFromQuery:(id)arg1 ;
-(void)copyTimeframeFromQuery:(id)arg1 ;
-(void)copyDataOrderingFromQuery:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)pageType;
@end

