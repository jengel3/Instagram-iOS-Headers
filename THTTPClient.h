
#import <Instagram/TTransport.h>

@class NSURL, NSMutableURLRequest, NSMutableData, NSData, NSString;

@interface THTTPClient : NSObject <TTransport> {

	NSURL* mURL;
	NSMutableURLRequest* mRequest;
	NSMutableData* mRequestData;
	NSData* mResponseData;
	int mResponseDataOffset;
	NSString* mUserAgent;
	int mTimeout;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3 ;
-(void)setupRequest;
-(void)dealloc;
-(void)flush;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(id)arg1 ;
@end

