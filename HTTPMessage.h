

#import <Instagram/Instagram-Structs.h>
@interface HTTPMessage : NSObject {

	CFHTTPMessageRef message;

}
-(id)headerField:(id)arg1 ;
-(id)initEmptyRequest;
-(id)initResponseWithStatusCode:(int)arg1 description:(id)arg2 version:(id)arg3 ;
-(void)setHeaderField:(id)arg1 value:(id)arg2 ;
-(id)initRequestWithMethod:(id)arg1 URL:(id)arg2 version:(id)arg3 ;
-(char)isHeaderComplete;
-(id)messageData;
-(void)dealloc;
-(id)url;
-(id)body;
-(NSRange)range;
-(char)appendData:(id)arg1 ;
-(int)statusCode;
-(id)method;
-(id)version;
-(void)setBody:(id)arg1 ;
-(id)allHeaderFields;
@end

