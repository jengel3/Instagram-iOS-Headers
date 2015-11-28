
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol FBURLConnectionDelegate;
@class NSURLConnection, NSMutableData, NSURLResponse, NSString;

@interface FBURLConnection : NSObject <NSURLConnectionDataDelegate> {

	char _skipRoundtripIfCached;
	id<FBURLConnectionDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _data;
	/*^block*/id _handler;
	NSURLResponse* _response;
	unsigned long _requestStartTime;
	unsigned _loggerSerialNumber;

}

@property (assign,nonatomic) id<FBURLConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id handler;                                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                          //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned long requestStartTime;                    //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) unsigned loggerSerialNumber;                     //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (assign,nonatomic) char skipRoundtripIfCached;                        //@synthesize skipRoundtripIfCached=_skipRoundtripIfCached - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(char)isCDNURL:(id)arg1 ;
-(unsigned)loggerSerialNumber;
-(id)initWithRequest:(id)arg1 skipRoundTripIfCached:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSkipRoundtripIfCached:(char)arg1 ;
-(id)getCache;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 cachedData:(id)arg2 forURL:(id)arg3 ;
-(void)invokeHandler:(/*^block*/id)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)logAndInvokeHandler:(/*^block*/id)arg1 response:(id)arg2 responseData:(id)arg3 ;
-(char)shouldShortCircuitRedirectResponse:(id)arg1 ;
-(char)skipRoundtripIfCached;
-(id)initWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<FBURLConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<FBURLConnectionDelegate>)delegate;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(NSURLResponse *)response;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)logMessage:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(unsigned long)requestStartTime;
-(void)setRequestStartTime:(unsigned long)arg1 ;
@end

