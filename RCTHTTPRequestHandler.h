
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <Instagram/RCTURLRequestHandler.h>
#import <Instagram/RCTInvalidating.h>

@class NSMapTable, NSURLSession, NSString, RCTBridge;

@interface RCTHTTPRequestHandler : NSObject <NSURLSessionDataDelegate, RCTURLRequestHandler, RCTInvalidating> {

	NSMapTable* _delegates;
	NSURLSession* _session;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)invalidate;
-(char)isValid;
-(void)cancelRequest:(id)arg1 ;
-(char)canHandleRequest:(id)arg1 ;
@end

