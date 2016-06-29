

@class NSString, NSArray;

@interface IGSimpleChartTab : NSObject {

	NSString* _tabName;
	NSArray* _dataList;

}

@property (nonatomic,copy) NSString * tabName;              //@synthesize tabName=_tabName - In the implementation block
@property (nonatomic,copy) NSArray * dataList;              //@synthesize dataList=_dataList - In the implementation block
-(void)setTabName:(NSString *)arg1 ;
-(void)setDataList:(NSArray *)arg1 ;
-(NSArray *)dataList;
-(NSString *)tabName;
-(id)initWithDictionary:(id)arg1 ;
@end

