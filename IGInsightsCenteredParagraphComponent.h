
#import <Instagram/IGInsightsComponent.h>

@class NSString;

@interface IGInsightsCenteredParagraphComponent : NSObject <IGInsightsComponent> {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(NSString *)title;
-(id)style;
-(NSString *)subtitle;
@end

