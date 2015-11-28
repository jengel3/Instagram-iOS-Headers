

@interface AFQueryStringPair : NSObject {

	id _field;
	id _value;

}

@property (nonatomic,retain) id field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) id value;              //@synthesize value=_value - In the implementation block
-(id)initWithField:(id)arg1 value:(id)arg2 ;
-(id)URLEncodedStringValueWithEncoding:(unsigned)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)field;
-(void)setField:(id)arg1 ;
@end

