
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString;

@interface IGExploreTrend : NSObject <NSCoding> {

	NSArray* _items;
	unsigned _type;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)initWithItems:(id)arg1 type:(unsigned)arg2 title:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 type:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)type;
-(NSString *)title;
-(NSArray *)items;
@end

