
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface IGStyledStringCacheKey : NSObject <NSCopying> {

	unsigned _hash;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
+(id)keyWithItems:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(NSArray *)items;
@end

