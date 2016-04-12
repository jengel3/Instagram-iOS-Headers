

@class NSOperationQueue, AFHTTPRequestOperationManager, AFNetworkReachabilityManager, NSString, NSURL;

@interface IGService : NSObject {

	NSOperationQueue* _jsonParsingQueue;
	char _isAppleWatch;
	AFHTTPRequestOperationManager* _client;
	AFNetworkReachabilityManager* _reachabilityManager;
	NSString* _APIRequestUserAgent;
	NSString* _webViewUserAgent;
	NSString* _appName;
	NSURL* _baseURL;
	NSString* _capabilitiesString;
	NSString* _acceptLanguageHeader;

}

@property (nonatomic,readonly) AFHTTPRequestOperationManager * client;                          //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) AFNetworkReachabilityManager * reachabilityManager;              //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,readonly) NSString * APIRequestUserAgent;                                  //@synthesize APIRequestUserAgent=_APIRequestUserAgent - In the implementation block
@property (nonatomic,readonly) NSString * webViewUserAgent;                                     //@synthesize webViewUserAgent=_webViewUserAgent - In the implementation block
@property (nonatomic,readonly) NSString * appName;                                              //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                                 //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSString * capabilitiesString;                                   //@synthesize capabilitiesString=_capabilitiesString - In the implementation block
@property (nonatomic,readonly) NSString * acceptLanguageHeader;                                 //@synthesize acceptLanguageHeader=_acceptLanguageHeader - In the implementation block
@property (nonatomic,readonly) char isAppleWatch;                                               //@synthesize isAppleWatch=_isAppleWatch - In the implementation block
+(id)signedGETParameterStringFromDictionary:(id)arg1 ;
+(char)errorIsNetworkError:(id)arg1 ;
+(void)configureWithAppName:(id)arg1 baseURL:(id)arg2 capabilitiesString:(id)arg3 ;
+(id)signedPOSTParametersFromDictionary:(id)arg1 includeIDs:(char)arg2 ;
+(id)sharedService;
-(void)startAPIRequest:(id)arg1 parsingHandler:(/*^block*/id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)startAPIRequest:(id)arg1 successHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(void)startRawRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)startJSONRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)postRequestErrorNotification:(id)arg1 ;
-(id)reachabilityString;
-(void)handleHeaders:(id)arg1 ;
-(void)handleSystemMessages:(id)arg1 ;
-(void)handleAPIRequestFailure:(id)arg1 withReponseDictionary:(id)arg2 error:(id)arg3 ;
-(void)handleAPIRequestSuccess:(id)arg1 withParsedObject:(id)arg2 ;
-(void)startJSONRequest:(id)arg1 completionQueue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)errorStringFromResponse:(id)arg1 ;
-(id)errorStringsFromObject:(id)arg1 ;
-(void)handleSystemMessage:(id)arg1 ;
-(NSString *)webViewUserAgent;
-(NSString *)APIRequestUserAgent;
-(id)instagramUserAgentForAppName:(id)arg1 ;
-(id)systemWebViewUserAgent;
-(id)initWithAppName:(id)arg1 baseURL:(id)arg2 capabilitiesString:(id)arg3 ;
-(id)commonHeaders;
-(NSString *)acceptLanguageHeader;
-(NSString *)capabilitiesString;
-(void)addCommonHeadersToRequest:(id)arg1 ;
-(void)enableHighRequestConcurrency;
-(char)tuneDownHighRequestConcurrency;
-(void)setNormalRequestConcurrency;
-(void)setLowRequestConcurrency;
-(char)isNetworkReachable;
-(NSURL *)baseURL;
-(char)isAppleWatch;
-(AFNetworkReachabilityManager *)reachabilityManager;
-(AFHTTPRequestOperationManager *)client;
-(NSString *)appName;
@end

