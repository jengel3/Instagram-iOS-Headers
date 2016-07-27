

@class NSOperationQueue, AFHTTPRequestOperationManager, AFNetworkReachabilityManager, NSString, NSURL, NSLock;

@interface IGService : NSObject {

	NSOperationQueue* _jsonParsingQueue;
	char _isAppleWatch;
	char _isDisposed;
	AFHTTPRequestOperationManager* _client;
	AFNetworkReachabilityManager* _reachabilityManager;
	NSString* _APIRequestUserAgent;
	NSString* _webViewUserAgent;
	NSString* _appName;
	NSURL* _baseURL;
	NSString* _acceptLanguageHeader;
	NSLock* _operationQueueDisposeLock;

}

@property (nonatomic,readonly) NSString * appName;                                              //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSString * acceptLanguageHeader;                                 //@synthesize acceptLanguageHeader=_acceptLanguageHeader - In the implementation block
@property (nonatomic,readonly) char isAppleWatch;                                               //@synthesize isAppleWatch=_isAppleWatch - In the implementation block
@property (nonatomic,readonly) char isDisposed;                                                 //@synthesize isDisposed=_isDisposed - In the implementation block
@property (nonatomic,readonly) NSLock * operationQueueDisposeLock;                              //@synthesize operationQueueDisposeLock=_operationQueueDisposeLock - In the implementation block
@property (nonatomic,readonly) AFHTTPRequestOperationManager * client;                          //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) AFNetworkReachabilityManager * reachabilityManager;              //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,readonly) NSString * APIRequestUserAgent;                                  //@synthesize APIRequestUserAgent=_APIRequestUserAgent - In the implementation block
@property (nonatomic,readonly) NSString * webViewUserAgent;                                     //@synthesize webViewUserAgent=_webViewUserAgent - In the implementation block
+(void)configureWithAppName:(id)arg1 baseURL:(id)arg2 ;
+(id)signedGETParameterStringFromDictionary:(id)arg1 ;
+(char)errorIsNetworkError:(id)arg1 ;
+(id)signedPOSTParametersFromDictionary:(id)arg1 ;
+(id)sharedService;
-(void)startAPIRequest:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(NSString *)webViewUserAgent;
-(void)startAPIRequest:(id)arg1 parsingHandler:(/*^block*/id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)startIGRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)postRequestErrorNotification:(id)arg1 ;
-(void)handleSystemMessages:(id)arg1 ;
-(void)handleAPIRequestFailure:(id)arg1 withFailureHandler:(/*^block*/id)arg2 reponseDictionary:(id)arg3 error:(id)arg4 ;
-(void)handleAPIRequestSuccess:(/*^block*/id)arg1 withParsedObject:(id)arg2 ;
-(void)startIGRequest:(id)arg1 completionQueue:(id)arg2 JSONResponseHandler:(/*^block*/id)arg3 ;
-(id)errorStringFromResponse:(id)arg1 ;
-(id)errorStringsFromObject:(id)arg1 ;
-(void)handleSystemMessage:(id)arg1 ;
-(void)startIGRequest:(id)arg1 JSONResponseHandler:(/*^block*/id)arg2 ;
-(void)startRequest:(id)arg1 JSONResponseHandler:(/*^block*/id)arg2 ;
-(void)startRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)reachabilityString;
-(id)initWithAppName:(id)arg1 baseURL:(id)arg2 ;
-(void)addCommonHeadersToRequest:(id)arg1 ;
-(id)commonHeaders;
-(id)instagramUserAgentForAppName:(id)arg1 ;
-(id)systemWebViewUserAgent;
-(NSString *)APIRequestUserAgent;
-(NSString *)acceptLanguageHeader;
-(void)enableHighRequestConcurrency;
-(char)tuneDownHighRequestConcurrency;
-(void)setNormalRequestConcurrency;
-(void)setLowRequestConcurrency;
-(char)isDisposed;
-(NSLock *)operationQueueDisposeLock;
-(char)isNetworkReachable;
-(void)invalidate;
-(NSURL *)baseURL;
-(char)isAppleWatch;
-(AFNetworkReachabilityManager *)reachabilityManager;
-(AFHTTPRequestOperationManager *)client;
-(NSString *)appName;
@end

