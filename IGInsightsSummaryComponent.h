
#import <Instagram/IGInsightsComponent.h>

@class NSString;

@interface IGInsightsSummaryComponent : NSObject <IGInsightsComponent> {

	NSString* _title;
	NSString* _buttonText;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;              //@synthesize buttonText=_buttonText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTitle:(id)arg1 buttonText:(id)arg2 ;
-(NSString *)title;
-(id)style;
-(NSString *)buttonText;
@end

