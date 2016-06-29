
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@interface AFJSONResponseSerializer : AFHTTPResponseSerializer {

	unsigned _readingOptions;

}

@property (assign,nonatomic) unsigned readingOptions;              //@synthesize readingOptions=_readingOptions - In the implementation block
+(id)serializerWithReadingOptions:(unsigned)arg1 ;
+(id)serializer;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setReadingOptions:(unsigned)arg1 ;
-(unsigned)readingOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

