
#import <Instagram/IGDKDiffable.h>

@class IGFeedItemRowIdentifier;

@interface IGFeedItemRow : NSObject <IGDKDiffable> {

	IGFeedItemRowIdentifier* _identifier;
	unsigned _hash;
	int _type;
	int _textType;
	id _value;

}

@property (nonatomic,readonly) int type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int textType;              //@synthesize textType=_textType - In the implementation block
@property (nonatomic,readonly) id value;                  //@synthesize value=_value - In the implementation block
-(id)diffIdentifier;
-(id)initWithType:(int)arg1 textType:(int)arg2 value:(id)arg3 ;
-(id)initWithType:(int)arg1 textType:(int)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
-(id)value;
-(id)initWithType:(int)arg1 ;
-(int)textType;
@end

