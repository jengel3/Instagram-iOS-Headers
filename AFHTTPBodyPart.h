
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSInputStream, NSDictionary, NSString;

@interface AFHTTPBodyPart : NSObject <NSCopying> {

	int _phase;
	NSInputStream* _inputStream;
	unsigned long long _phaseReadOffset;
	char _hasInitialBoundary;
	char _hasFinalBoundary;
	unsigned _stringEncoding;
	NSDictionary* _headers;
	id _body;
	NSString* _multipartBoundaryString;
	unsigned long long _bodyContentLength;

}

@property (assign,nonatomic) unsigned stringEncoding;                                     //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) id body;                                                     //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) unsigned long long bodyContentLength;                        //@synthesize bodyContentLength=_bodyContentLength - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                                 //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,copy) NSString * multipartBoundaryString;                            //@synthesize multipartBoundaryString=_multipartBoundaryString - In the implementation block
@property (assign,nonatomic) char hasInitialBoundary;                                     //@synthesize hasInitialBoundary=_hasInitialBoundary - In the implementation block
@property (assign,nonatomic) char hasFinalBoundary;                                       //@synthesize hasFinalBoundary=_hasFinalBoundary - In the implementation block
@property (getter=hasBytesAvailable,nonatomic,readonly) char bytesAvailable; 
@property (nonatomic,readonly) unsigned long long contentLength; 
-(void)setStringEncoding:(unsigned)arg1 ;
-(void)setMultipartBoundaryString:(NSString *)arg1 ;
-(NSString *)multipartBoundaryString;
-(id)initWithmultipartBoundaryString:(id)arg1 ;
-(void)setBodyContentLength:(unsigned long long)arg1 ;
-(void)setHasInitialBoundary:(char)arg1 ;
-(void)setHasFinalBoundary:(char)arg1 ;
-(char)transitionToNextPhase;
-(char)hasInitialBoundary;
-(id)stringForHeaders;
-(char)hasFinalBoundary;
-(int)readData:(id)arg1 intoBuffer:(char*)arg2 maxLength:(unsigned)arg3 ;
-(unsigned long long)bodyContentLength;
-(NSDictionary *)headers;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)body;
-(void)setBody:(id)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(unsigned long long)contentLength;
-(NSInputStream *)inputStream;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(unsigned)stringEncoding;
@end

