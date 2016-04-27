

@class NSString;

@interface IGAdsInlineInsightsModel : NSObject {

	float _impressionCount;
	float _websiteClickCount;
	NSString* _spentFormattedString;
	NSString* _budgetFormattedString;
	NSString* _costPerClick;
	float _percentage;
	NSString* _timeRemaining;

}

@property (nonatomic,readonly) float impressionCount;                              //@synthesize impressionCount=_impressionCount - In the implementation block
@property (nonatomic,readonly) float websiteClickCount;                            //@synthesize websiteClickCount=_websiteClickCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * spentFormattedString;               //@synthesize spentFormattedString=_spentFormattedString - In the implementation block
@property (nonatomic,copy,readonly) NSString * budgetFormattedString;              //@synthesize budgetFormattedString=_budgetFormattedString - In the implementation block
@property (nonatomic,copy,readonly) NSString * costPerClick;                       //@synthesize costPerClick=_costPerClick - In the implementation block
@property (nonatomic,readonly) float percentage;                                   //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeRemaining;                      //@synthesize timeRemaining=_timeRemaining - In the implementation block
-(float)impressionCount;
-(id)initWithImpressionCount:(float)arg1 websiteClickCount:(float)arg2 spentFormattedString:(id)arg3 budgetFormattedString:(id)arg4 costPerClick:(id)arg5 percentage:(float)arg6 timeRemaining:(id)arg7 ;
-(float)websiteClickCount;
-(NSString *)spentFormattedString;
-(NSString *)budgetFormattedString;
-(NSString *)costPerClick;
-(float)percentage;
-(NSString *)timeRemaining;
@end

