

@class NSString;

@interface CountryData : NSObject {

	NSString* _name;
	NSString* _number;

}

@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * number;              //@synthesize number=_number - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
@end

