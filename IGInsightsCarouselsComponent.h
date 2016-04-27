
#import <Instagram/IGInsightsComponent.h>

@class NSString, NSArray, IGInsightsQuery;

@interface IGInsightsCarouselsComponent : NSObject <IGInsightsComponent> {

	NSString* _header;
	NSString* _buttonText;
	NSArray* _medias;
	IGInsightsQuery* _buttonQuery;

}

@property (nonatomic,copy,readonly) NSString * header;                     //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonText;                 //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * medias;                      //@synthesize medias=_medias - In the implementation block
@property (nonatomic,readonly) IGInsightsQuery * buttonQuery;              //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGInsightsQuery *)buttonQuery;
-(id)initWithHeader:(id)arg1 buttonText:(id)arg2 buttonQuery:(id)arg3 medias:(id)arg4 ;
-(NSArray *)medias;
-(id)style;
-(NSString *)header;
-(NSString *)buttonText;
@end

