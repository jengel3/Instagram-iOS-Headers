
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSCoding;
@interface IGDiskCacheObject : NSObject <NSCoding> {

	unsigned _cost;
	id<NSCoding> _object;

}

@property (assign,nonatomic) unsigned cost;                    //@synthesize cost=_cost - In the implementation block
@property (nonatomic,retain) id<NSCoding> object;              //@synthesize object=_object - In the implementation block
-(id)initWithObject:(id)arg1 cost:(unsigned)arg2 ;
-(void)setCost:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<NSCoding>)object;
-(void)setObject:(id<NSCoding>)arg1 ;
-(unsigned)cost;
@end

