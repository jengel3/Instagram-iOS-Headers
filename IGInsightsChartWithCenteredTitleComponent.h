
#import <Instagram/IGInsightsComponent.h>

@class NSString, IGInsightsQuery, NSArray;

@interface IGInsightsChartWithCenteredTitleComponent : NSObject <IGInsightsComponent> {

	NSString* _header;
	NSString* _buttonText;
	IGInsightsQuery* _buttonQuery;
	NSArray* _chartTab;
	NSString* _chartStyle;

}

@property (nonatomic,copy,readonly) NSString * header;                     //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                 //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;              //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,copy,readonly) NSArray * chartTab;                    //@synthesize chartTab=_chartTab - In the implementation block
@property (nonatomic,copy,readonly) NSString * chartStyle;                 //@synthesize chartStyle=_chartStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGInsightsQuery *)buttonQuery;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 chartTab:(id)arg4 chartStyle:(id)arg5 ;
-(NSArray *)chartTab;
-(NSString *)chartStyle;
-(id)style;
-(NSString *)header;
-(NSString *)buttonText;
@end

