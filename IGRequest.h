
#import <Instagram/AFHTTPRequestOperation.h>

@class NSHashTable, NSMapTable, NSMutableURLRequest;

@interface IGRequest : AFHTTPRequestOperation {

	char _needsRetry;
	char _isForVideo;
	char _isHandlerDisposed;
	char _hasFailed;
	/*^block*/id _headerHandler;
	NSHashTable* _dependants;
	NSMapTable* _dependantPriorities;
	double _uploadDurationInMiliseconds;
	double _downloadDurationInMiliseconds;
	double _serverLatencyInMiliseconds;
	double _totalBytesUp;
	double _totalBytesDown;
	double _requestStartTimestamp;
	double _requestEndTimestamp;
	double _requestProcessedTimestamp;
	double _requestFailedTimestamp;
	double _firstUploadTimestamp;
	double _lastUploadTimestamp;
	double _responseReceivedTimestamp;

}

@property (assign,nonatomic) double requestStartTimestamp;                             //@synthesize requestStartTimestamp=_requestStartTimestamp - In the implementation block
@property (assign,nonatomic) double requestEndTimestamp;                               //@synthesize requestEndTimestamp=_requestEndTimestamp - In the implementation block
@property (assign,nonatomic) double requestProcessedTimestamp;                         //@synthesize requestProcessedTimestamp=_requestProcessedTimestamp - In the implementation block
@property (assign,nonatomic) double requestFailedTimestamp;                            //@synthesize requestFailedTimestamp=_requestFailedTimestamp - In the implementation block
@property (assign,nonatomic) double firstUploadTimestamp;                              //@synthesize firstUploadTimestamp=_firstUploadTimestamp - In the implementation block
@property (assign,nonatomic) double lastUploadTimestamp;                               //@synthesize lastUploadTimestamp=_lastUploadTimestamp - In the implementation block
@property (assign,nonatomic) double responseReceivedTimestamp;                         //@synthesize responseReceivedTimestamp=_responseReceivedTimestamp - In the implementation block
@property (assign,nonatomic) double totalBytesUp;                                      //@synthesize totalBytesUp=_totalBytesUp - In the implementation block
@property (assign,nonatomic) double totalBytesDown;                                    //@synthesize totalBytesDown=_totalBytesDown - In the implementation block
@property (assign,nonatomic) char hasFailed;                                           //@synthesize hasFailed=_hasFailed - In the implementation block
@property (nonatomic,retain) NSHashTable * dependants;                                 //@synthesize dependants=_dependants - In the implementation block
@property (nonatomic,retain) NSMapTable * dependantPriorities;                         //@synthesize dependantPriorities=_dependantPriorities - In the implementation block
@property (nonatomic,copy) id headerHandler;                                           //@synthesize headerHandler=_headerHandler - In the implementation block
@property (nonatomic,readonly) double totalRequestTimeInMiliseconds; 
@property (nonatomic,readonly) double requestProcessingTimeInMiliseconds; 
@property (nonatomic,readonly) double uploadDurationInMiliseconds;                     //@synthesize uploadDurationInMiliseconds=_uploadDurationInMiliseconds - In the implementation block
@property (nonatomic,readonly) double downloadDurationInMiliseconds;                   //@synthesize downloadDurationInMiliseconds=_downloadDurationInMiliseconds - In the implementation block
@property (nonatomic,readonly) double serverLatencyInMiliseconds;                      //@synthesize serverLatencyInMiliseconds=_serverLatencyInMiliseconds - In the implementation block
@property (assign,nonatomic) char needsRetry;                                          //@synthesize needsRetry=_needsRetry - In the implementation block
@property (assign,nonatomic) char isForVideo;                                          //@synthesize isForVideo=_isForVideo - In the implementation block
@property (nonatomic,readonly) NSMutableURLRequest * mutableRequest; 
@property (nonatomic,readonly) char isHandlerDisposed;                                 //@synthesize isHandlerDisposed=_isHandlerDisposed - In the implementation block
-(NSHashTable *)dependants;
-(void)reallySetDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)setRequestStartTimestamp:(double)arg1 ;
-(double)firstUploadTimestamp;
-(void)setFirstUploadTimestamp:(double)arg1 ;
-(void)setLastUploadTimestamp:(double)arg1 ;
-(void)setTotalBytesUp:(double)arg1 ;
-(void)setRequestEndTimestamp:(double)arg1 ;
-(void)setRequestProcessedTimestamp:(double)arg1 ;
-(void)setRequestFailedTimestamp:(double)arg1 ;
-(double)responseReceivedTimestamp;
-(void)setResponseReceivedTimestamp:(double)arg1 ;
-(double)totalBytesDown;
-(void)setTotalBytesDown:(double)arg1 ;
-(NSMapTable *)dependantPriorities;
-(void)setNeedsRetry:(char)arg1 ;
-(double)requestEndTimestamp;
-(double)requestFailedTimestamp;
-(double)requestStartTimestamp;
-(double)requestProcessedTimestamp;
-(double)lastUploadTimestamp;
-(id)initWithMutableRequest:(id)arg1 ;
-(NSMutableURLRequest *)mutableRequest;
-(void)addDependant:(id)arg1 withPriority:(int)arg2 ;
-(void)removeDependant:(id)arg1 ;
-(double)totalRequestTimeInMiliseconds;
-(double)requestProcessingTimeInMiliseconds;
-(double)serverLatency;
-(char)hasFailed;
-(void)disposeHandler;
-(id)headerHandler;
-(void)setHeaderHandler:(id)arg1 ;
-(double)uploadDurationInMiliseconds;
-(double)downloadDurationInMiliseconds;
-(double)serverLatencyInMiliseconds;
-(double)totalBytesUp;
-(char)needsRetry;
-(char)isForVideo;
-(void)setIsForVideo:(char)arg1 ;
-(char)isHandlerDisposed;
-(void)setHasFailed:(char)arg1 ;
-(void)setDependants:(NSHashTable *)arg1 ;
-(void)setDependantPriorities:(NSMapTable *)arg1 ;
-(void)notifySuccessWithData:(id)arg1 forURL:(id)arg2 ;
-(void)notifyFailureWithError:(id)arg1 forURL:(id)arg2 ;
-(double)downloadDuration;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setDownloadProgressBlock:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4 ;
-(double)uploadDuration;
@end

