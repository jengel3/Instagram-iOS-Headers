
#import <Instagram/AFMultipartFormData.h>

@class NSMutableURLRequest, AFMultipartBodyStream, NSString;

@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData> {

	NSMutableURLRequest* _request;
	AFMultipartBodyStream* _bodyStream;
	unsigned _stringEncoding;
	NSString* _multipartBoundaryString;

}

@property (nonatomic,copy) NSMutableURLRequest * request;                     //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AFMultipartBodyStream * bodyStream;              //@synthesize bodyStream=_bodyStream - In the implementation block
@property (assign,nonatomic) unsigned stringEncoding;                         //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,copy) NSString * multipartBoundaryString;                //@synthesize multipartBoundaryString=_multipartBoundaryString - In the implementation block
-(void)setStringEncoding:(unsigned)arg1 ;
-(id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned)arg2 ;
-(void)appendPartWithFormData:(id)arg1 name:(id)arg2 ;
-(id)requestByFinalizingMultipartFormData;
-(void)setMultipartBoundaryString:(NSString *)arg1 ;
-(void)setBodyStream:(AFMultipartBodyStream *)arg1 ;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id*)arg5 ;
-(NSString *)multipartBoundaryString;
-(AFMultipartBodyStream *)bodyStream;
-(void)appendPartWithHeaders:(id)arg1 body:(id)arg2 ;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5 ;
-(void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 ;
-(void)throttleBandwidthWithPacketSize:(unsigned)arg1 delay:(double)arg2 ;
-(NSMutableURLRequest *)request;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(unsigned)stringEncoding;
@end

