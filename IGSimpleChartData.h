

@class NSString, NSArray;

@interface IGSimpleChartData : NSObject {

	NSString* _title;
	NSArray* _datapoints;

}

@property (nonatomic,copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * datapoints;              //@synthesize datapoints=_datapoints - In the implementation block
-(NSArray *)datapoints;
-(void)setDatapoints:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
@end

