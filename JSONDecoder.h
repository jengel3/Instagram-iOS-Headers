

#import <Instagram/Instagram-Structs.h>
@interface JSONDecoder : NSObject {

	JKParseState* parseState;

}
+(id)decoderWithParseOptions:(unsigned)arg1 ;
+(id)decoder;
-(id)initWithParseOptions:(unsigned)arg1 ;
-(id)objectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)objectWithString:(id)arg1 error:(id*)arg2 ;
-(id)mutableObjectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)mutableObjectWithData:(id)arg1 error:(id*)arg2 ;
-(id)parseUTF8String:(const char*)arg1 length:(unsigned long)arg2 error:(id*)arg3 ;
-(id)parseJSONData:(id)arg1 ;
-(id)objectWithString:(id)arg1 ;
-(id)objectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 ;
-(id)mutableObjectWithUTF8String:(const char*)arg1 length:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(id)objectWithData:(id)arg1 ;
-(id)mutableObjectWithData:(id)arg1 ;
-(id)objectWithData:(id)arg1 error:(id*)arg2 ;
-(id)parseUTF8String:(const char*)arg1 length:(unsigned long)arg2 ;
-(id)parseJSONData:(id)arg1 error:(id*)arg2 ;
@end

