
#import <Instagram/IGInsightsComponent.h>

@class NSString, NSDictionary;

@interface IGInsightsVerticalBarChartComponent : NSObject <IGInsightsComponent> {

	NSString* _header;
	NSString* _buttonText;
	NSDictionary* _buttonQueryItems;

}

@property (nonatomic,copy,readonly) NSString * header;                            //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                        //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * buttonQueryItems;              //@synthesize buttonQueryItems=_buttonQueryItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)buttonQueryItems;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQueryItems:(id)arg3 ;
-(id)style;
-(NSString *)header;
-(NSString *)buttonText;
@end

