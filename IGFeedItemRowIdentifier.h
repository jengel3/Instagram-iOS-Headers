

@interface IGFeedItemRowIdentifier : NSObject {

	int _type;
	int _textType;
	id _value;
	unsigned _hash;

}
-(id)initWithType:(int)arg1 textType:(int)arg2 value:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

