
#import <Instagram/IGInsightsComponent.h>

@class NSArray, NSString;

@interface IGInsightsParagraphComponent : NSObject <IGInsightsComponent> {

	NSArray* _paragraphUnits;
	NSString* _title;
	NSString* _renderStyle;

}

@property (nonatomic,copy,readonly) NSString * renderStyle;                //@synthesize renderStyle=_renderStyle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * paragraphUnits;              //@synthesize paragraphUnits=_paragraphUnits - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)renderStyle;
-(id)initWithTitle:(id)arg1 paragraphUnits:(id)arg2 renderStyle:(id)arg3 ;
-(NSArray *)paragraphUnits;
-(NSString *)title;
-(id)style;
@end

