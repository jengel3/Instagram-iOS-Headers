
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {

	unsigned _format;
	unsigned _readOptions;

}

@property (assign,nonatomic) unsigned format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned readOptions;              //@synthesize readOptions=_readOptions - In the implementation block
+(id)serializerWithFormat:(unsigned)arg1 readOptions:(unsigned)arg2 ;
+(id)acceptablePathExtensions;
+(id)serializer;
-(void)setReadOptions:(unsigned)arg1 ;
-(unsigned)readOptions;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

