
#import <Instagram/Instagram-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSOutputStream, NSSet, NSURLRequest, NSURLResponse, NSError, NSData, NSURLCredential, AFSecurityPolicy, NSObject, NSDictionary, NSRecursiveLock, NSURLConnection, NSString, NSInputStream;

@interface AFURLConnectionOperation : NSOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSCoding, NSCopying> {

	char _cancelled;
	char _shouldUseCredentialStorage;
	NSOutputStream* _outputStream;
	NSSet* _runLoopModes;
	NSURLRequest* _request;
	NSURLResponse* _response;
	NSError* _error;
	NSData* _responseData;
	NSURLCredential* _credential;
	AFSecurityPolicy* _securityPolicy;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_group> _completionGroup;
	NSDictionary* _userInfo;
	int _state;
	NSRecursiveLock* _lock;
	NSURLConnection* _connection;
	NSString* _responseString;
	unsigned _responseStringEncoding;
	unsigned _backgroundTaskIdentifier;
	/*^block*/id _uploadProgress;
	/*^block*/id _downloadProgress;
	/*^block*/id _authenticationChallenge;
	/*^block*/id _cacheResponse;
	/*^block*/id _redirectResponse;
	long long _totalBytesRead;

}

@property (assign,nonatomic) int state;                                                 //@synthesize state=_state - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                                  //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * responseData;                                     //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSString * responseString;                                   //@synthesize responseString=_responseString - In the implementation block
@property (assign,nonatomic) unsigned responseStringEncoding;                           //@synthesize responseStringEncoding=_responseStringEncoding - In the implementation block
@property (assign,nonatomic) long long totalBytesRead;                                  //@synthesize totalBytesRead=_totalBytesRead - In the implementation block
@property (assign,nonatomic) unsigned backgroundTaskIdentifier;                         //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) id uploadProgress;                                           //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (nonatomic,copy) id downloadProgress;                                         //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) id authenticationChallenge;                                  //@synthesize authenticationChallenge=_authenticationChallenge - In the implementation block
@property (nonatomic,copy) id cacheResponse;                                            //@synthesize cacheResponse=_cacheResponse - In the implementation block
@property (nonatomic,copy) id redirectResponse;                                         //@synthesize redirectResponse=_redirectResponse - In the implementation block
@property (nonatomic,retain) NSSet * runLoopModes;                                      //@synthesize runLoopModes=_runLoopModes - In the implementation block
@property (assign,nonatomic) char shouldUseCredentialStorage;                           //@synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage - In the implementation block
@property (nonatomic,retain) NSURLCredential * credential;                              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) AFSecurityPolicy * securityPolicy;                         //@synthesize securityPolicy=_securityPolicy - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream; 
@property (nonatomic,retain) NSOutputStream * outputStream;                             //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> completionGroup;              //@synthesize completionGroup=_completionGroup - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)networkRequestThreadEntryPoint:(id)arg1 ;
+(id)networkRequestThread;
+(id)batchOfRequestOperations:(id)arg1 progressBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setUploadProgress:(id)arg1 ;
-(id)uploadProgress;
-(void)setCacheResponseBlock:(/*^block*/id)arg1 ;
-(void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 ;
-(char)shouldUseCredentialStorage;
-(void)setShouldUseCredentialStorage:(char)arg1 ;
-(void)setAuthenticationChallenge:(id)arg1 ;
-(void)setCacheResponse:(id)arg1 ;
-(unsigned)responseStringEncoding;
-(void)setResponseString:(NSString *)arg1 ;
-(void)setResponseStringEncoding:(unsigned)arg1 ;
-(void)operationDidStart;
-(long long)totalBytesRead;
-(void)setTotalBytesRead:(long long)arg1 ;
-(id)cacheResponse;
-(void)setWillSendRequestForAuthenticationChallengeBlock:(/*^block*/id)arg1 ;
-(void)setRedirectResponseBlock:(/*^block*/id)arg1 ;
-(NSString *)responseString;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(AFSecurityPolicy *)securityPolicy;
-(void)setSecurityPolicy:(AFSecurityPolicy *)arg1 ;
-(void)setCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(char)isReady;
-(char)isConcurrent;
-(NSSet *)runLoopModes;
-(void)setRunLoopModes:(NSSet *)arg1 ;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(NSError *)error;
-(char)isPaused;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(NSURLRequest *)request;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSRecursiveLock *)lock;
-(void)start;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(void)resume;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)pause;
-(void)setBackgroundTaskIdentifier:(unsigned)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(unsigned)backgroundTaskIdentifier;
-(void)finish;
-(void)setRedirectResponse:(id)arg1 ;
-(id)redirectResponse;
-(void)setDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setUploadProgressBlock:(/*^block*/id)arg1 ;
-(void)cancelConnection;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(char)connectionShouldUseCredentialStorage:(id)arg1 ;
-(NSURLCredential *)credential;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSOutputStream *)outputStream;
-(NSInputStream *)inputStream;
-(void)setError:(NSError *)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(id)downloadProgress;
-(void)setDownloadProgress:(id)arg1 ;
-(id)authenticationChallenge;
@end

