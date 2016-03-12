
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL;

@interface IGExploreMarqueeImage : NSObject <NSCoding> {

	NSURL* _url;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(id)initWithSize:(CGSize)arg1 url:(id)arg2 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
@end

