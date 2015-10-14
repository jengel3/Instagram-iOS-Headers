/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBURLConnectionDelegate.h>
#import <Instagram/FBRequestConnectionRetryManagerDelegate.h>

@protocol FBRequestConnectionDelegate;
@class NSHTTPURLResponse, FBURLConnection, NSMutableArray, NSMutableURLRequest, FBRequest, FBLogger, FBRequestConnectionRetryManager, NSError, NSString;

@interface FBRequestConnection : NSObject <FBURLConnectionDelegate, FBRequestConnectionRetryManagerDelegate> {

	char _errorBehavior;
	char _isResultFromCache;
	NSHTTPURLResponse* _urlResponse;
	id<FBRequestConnectionDelegate> _delegate;
	FBURLConnection* _connection;
	NSMutableArray* _requests;
	int _state;
	NSMutableURLRequest* _internalUrlRequest;
	FBRequest* _deprecatedRequest;
	FBLogger* _logger;
	unsigned long _requestStartTime;
	FBRequestConnectionRetryManager* _retryManager;
	NSError* _connectionError;
	double _timeout;

}

@property (nonatomic,retain) NSMutableURLRequest * urlRequest; 
@property (nonatomic,retain) NSHTTPURLResponse * urlResponse;                             //@synthesize urlResponse=_urlResponse - In the implementation block
@property (assign,nonatomic) int errorBehavior; 
@property (assign,nonatomic) id<FBRequestConnectionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBURLConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                                   //@synthesize requests=_requests - In the implementation block
@property (assign,nonatomic) int state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double timeout;                                              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * internalUrlRequest;                    //@synthesize internalUrlRequest=_internalUrlRequest - In the implementation block
@property (nonatomic,retain) FBRequest * deprecatedRequest;                               //@synthesize deprecatedRequest=_deprecatedRequest - In the implementation block
@property (nonatomic,retain) FBLogger * logger;                                           //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) unsigned long requestStartTime;                              //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) char isResultFromCache;                                    //@synthesize isResultFromCache=_isResultFromCache - In the implementation block
@property (nonatomic,retain) FBRequestConnectionRetryManager * retryManager;              //@synthesize retryManager=_retryManager - In the implementation block
@property (nonatomic,retain) NSError * connectionError;                                   //@synthesize connectionError=_connectionError - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)processGraphObject:(id)arg1 forPath:(id)arg2 withAction:(/*^block*/id)arg3 ;
+(void)processGraphObjectPropertyKey:(id)arg1 value:(id)arg2 action:(/*^block*/id)arg3 passByValue:(char)arg4 ;
+(void)addRequestToExtendTokenForSession:(id)arg1 connection:(id)arg2 ;
+(char)isPermissionsRequest:(id)arg1 ;
+(void)addRequestToRefreshPermissionsSession:(id)arg1 connection:(id)arg2 ;
+(id)startForMeWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)startForMyFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)startForUploadPhoto:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostStatusUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostStatusUpdate:(id)arg1 place:(id)arg2 tags:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)startForPlacesSearchAtCoordinate:(SCD_Struct_IG40)arg1 radiusInMeters:(int)arg2 resultsLimit:(int)arg3 searchText:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)startForCustomAudienceThirdPartyID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startWithGraphPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForDeleteObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostWithGraphPath:(id)arg1 graphObject:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)startForPostOpenGraphObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostOpenGraphObjectWithType:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)startForUpdateOpenGraphObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForUpdateOpenGraphObjectWithId:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)startForUploadStagingResourceWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)userAgent;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableURLRequest *)internalUrlRequest;
-(void)logRequest:(id)arg1 bodyLength:(unsigned)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4 ;
-(id)requestWithBatch:(id)arg1 timeout:(double)arg2 ;
-(void)setInternalUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchEntryName:(id)arg3 ;
-(int)errorBehavior;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 behavior:(int)arg4 ;
-(void)startWithCacheIdentity:(id)arg1 skipRoundtripIfCached:(char)arg2 ;
-(void)setDeprecatedRequest:(FBRequest *)arg1 ;
-(FBRequest *)deprecatedRequest;
-(id)getBatchAppID:(id)arg1 ;
-(void)addPiggybackRequests;
-(void)completeWithResponse:(id)arg1 data:(id)arg2 orError:(id)arg3 ;
-(void)startURLConnectionWithRequest:(id)arg1 skipRoundTripIfCached:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newFBURLConnection;
-(id)urlStringForSingleRequest:(id)arg1 forBatch:(char)arg2 ;
-(void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(char)arg3 logger:(id)arg4 ;
-(void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4 ;
-(id)accessTokenWithRequest:(id)arg1 ;
-(void)registerTokenToOmitFromLog:(id)arg1 ;
-(void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 ;
-(char)isAttachment:(id)arg1 ;
-(id)errorWithCode:(int)arg1 statusCode:(int)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5 ;
-(id)parseJSONResponse:(id)arg1 error:(id*)arg2 statusCode:(int)arg3 ;
-(id)checkConnectionError:(id)arg1 statusCode:(int)arg2 parsedJSONResponse:(id)arg3 ;
-(void)completeDeprecatedWithData:(id)arg1 results:(id)arg2 orError:(id)arg3 ;
-(void)completeWithResults:(id)arg1 orError:(id)arg2 ;
-(id)parseJSONOrOtherwise:(id)arg1 error:(id*)arg2 ;
-(id)errorFromResult:(id)arg1 ;
-(char)isInvalidSessionError:(id)arg1 resultIndex:(unsigned)arg2 ;
-(void)setRetryManager:(FBRequestConnectionRetryManager *)arg1 ;
-(id)unpackIndividualJSONResponseError:(id)arg1 ;
-(void)logDeveloperError:(id)arg1 forRequest:(id)arg2 ;
-(char)isInsufficientPermissionError:(id)arg1 resultIndex:(unsigned)arg2 ;
-(char)isExpiredTokenError:(id)arg1 resultIndex:(unsigned)arg2 ;
-(char)isPasswordChangeError:(id)arg1 resultIndex:(unsigned)arg2 ;
-(char)shouldCloseRequestSession:(id)arg1 ;
-(FBRequestConnectionRetryManager *)retryManager;
-(char)isResultFromCache;
-(void)retryManagerDidFinishWithNoRetries:(id)arg1 ;
-(void)retryManagerDidFinishAbortingRetries:(id)arg1 ;
-(void)retryManager:(id)arg1 willRetryWithRequestConnection:(id)arg2 ;
-(void)setErrorBehavior:(int)arg1 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(id)getRequestMetadata:(id)arg1 ;
-(void)facebookURLConnection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(NSHTTPURLResponse *)urlResponse;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<FBRequestConnectionDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<FBRequestConnectionDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)start;
-(FBURLConnection *)connection;
-(void)setConnection:(FBURLConnection *)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setConnectionError:(NSError *)arg1 ;
-(NSError *)connectionError;
-(double)timeout;
-(NSMutableURLRequest *)urlRequest;
-(FBLogger *)logger;
-(void)setLogger:(FBLogger *)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(unsigned long)requestStartTime;
-(void)setRequestStartTime:(unsigned long)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
@end

