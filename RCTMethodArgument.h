

@class NSString;

@interface RCTMethodArgument : NSObject {

	char _unused;
	NSString* _type;
	unsigned _nullability;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned nullability;              //@synthesize nullability=_nullability - In the implementation block
@property (nonatomic,readonly) char unused;                       //@synthesize unused=_unused - In the implementation block
-(id)initWithType:(id)arg1 nullability:(unsigned)arg2 unused:(char)arg3 ;
-(unsigned)nullability;
-(char)unused;
-(NSString *)type;
@end

