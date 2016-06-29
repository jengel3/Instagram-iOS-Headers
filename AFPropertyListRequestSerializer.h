
#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPRequestSerializer.h>

@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer {

	unsigned _format;
	unsigned _writeOptions;

}

@property (assign,nonatomic) unsigned format;                    //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned writeOptions;              //@synthesize writeOptions=_writeOptions - In the implementation block
+(id)serializerWithFormat:(unsigned)arg1 writeOptions:(unsigned)arg2 ;
+(id)serializer;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setWriteOptions:(unsigned)arg1 ;
-(unsigned)writeOptions;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

