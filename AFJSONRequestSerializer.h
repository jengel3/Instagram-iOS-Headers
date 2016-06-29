
#import <Instagram/AFHTTPRequestSerializer.h>

@interface AFJSONRequestSerializer : AFHTTPRequestSerializer {

	unsigned _format;
	unsigned _writingOptions;

}

@property (assign,nonatomic) unsigned format;                      //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned writingOptions;              //@synthesize writingOptions=_writingOptions - In the implementation block
+(id)serializerWithWritingOptions:(unsigned)arg1 ;
+(id)serializer;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setWritingOptions:(unsigned)arg1 ;
-(unsigned)writingOptions;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
@end

