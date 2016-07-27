

@class NSString, NSNumber;

@interface IGBrandLiftAnswer : NSObject {

	NSString* _text;
	NSNumber* _numberResponders;
	NSString* _value;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSNumber * numberResponders;              //@synthesize numberResponders=_numberResponders - In the implementation block
@property (nonatomic,copy) NSString * value;                           //@synthesize value=_value - In the implementation block
-(void)setNumberResponders:(NSNumber *)arg1 ;
-(NSNumber *)numberResponders;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

