

@class NSNumber, NSString;

@interface IGSimpleChartDataPoint : NSObject {

	NSNumber* _y;
	NSString* _label;

}

@property (y,nonatomic,copy) NSNumber * y;                //@synthesize y=_y - In the implementation block
@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSNumber *)y;
-(void)setY:(NSNumber *)arg1 ;
@end

