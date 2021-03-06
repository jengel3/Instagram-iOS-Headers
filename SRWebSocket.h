
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, SRWebSocketDelegate;
@class NSOperationQueue, NSObject, NSMutableArray, NSInputStream, NSOutputStream, NSMutableData, NSString, NSURLRequest, NSMutableSet, NSArray, SRIOConsumerPool, NSURL;

@interface SRWebSocket : NSObject <NSStreamDelegate> {

	int _webSocketVersion;
	NSOperationQueue* _delegateOperationQueue;
	NSObject*<OS_dispatch_queue> _delegateDispatchQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _consumers;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSMutableData* _readBuffer;
	unsigned _readBufferOffset;
	NSMutableData* _outputBuffer;
	unsigned _outputBufferOffset;
	unsigned char _currentFrameOpcode;
	unsigned long _currentFrameCount;
	unsigned long _readOpCount;
	unsigned _currentStringScanPosition;
	NSMutableData* _currentFrameData;
	NSString* _closeReason;
	NSString* _secKey;
	char _pinnedCertFound;
	unsigned char _currentReadMaskKey[4];
	unsigned long _currentReadMaskOffset;
	char _consumerStopped;
	char _closeWhenFinishedWriting;
	char _failed;
	char _secure;
	NSURLRequest* _urlRequest;
	CFHTTPMessageRef _receivedHTTPHeaders;
	char _sentClose;
	char _didFail;
	int _closeCode;
	char _isPumping;
	NSMutableSet* _scheduledRunloops;
	SRWebSocket* _selfRetain;
	NSArray* _requestedProtocols;
	SRIOConsumerPool* _consumerPool;
	id<SRWebSocketDelegate> _delegate;
	NSURL* _url;
	int _readyState;
	NSString* _protocol;

}

@property (assign,nonatomic) int readyState;                                                  //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateOperationQueue;                       //@synthesize delegateOperationQueue=_delegateOperationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateDispatchQueue;              //@synthesize delegateDispatchQueue=_delegateDispatchQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SRWebSocketDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * protocol;                                      //@synthesize protocol=_protocol - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)_SR_commonInit;
-(id)initWithURLRequest:(id)arg1 protocols:(id)arg2 ;
-(id)initWithURL:(id)arg1 protocols:(id)arg2 ;
-(void)_initializeStreams;
-(char)_checkHandshake:(CFHTTPMessageRef)arg1 ;
-(void)_readFrameNew;
-(void)_performDelegateBlock:(/*^block*/id)arg1 ;
-(void)_HTTPHeadersDidFinish;
-(void)_readHTTPHeader;
-(void)_readUntilHeaderCompleteWithCallback:(/*^block*/id)arg1 ;
-(void)closeWithCode:(int)arg1 reason:(id)arg2 ;
-(void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2 ;
-(void)assertOnWorkQueue;
-(void)_pumpWriting;
-(void)_closeWithProtocolError:(id)arg1 ;
-(void)_readFrameContinue;
-(void)handleCloseWithData:(id)arg1 ;
-(void)handlePing:(id)arg1 ;
-(void)handlePong:(id)arg1 ;
-(void)_handleFrameWithData:(id)arg1 opCode:(int)arg2 ;
-(void)_addConsumerWithDataLength:(unsigned long)arg1 callback:(/*^block*/id)arg2 readToCurrentFrame:(char)arg3 unmaskBytes:(char)arg4 ;
-(void)_handleFrameHeader:(SCD_Struct_SR70)arg1 curData:(id)arg2 ;
-(void)_addConsumerWithScanner:(/*^block*/id)arg1 callback:(/*^block*/id)arg2 dataLength:(unsigned long)arg3 ;
-(void)_pumpScanner;
-(void)_readUntilBytes:(const void*)arg1 length:(unsigned long)arg2 callback:(/*^block*/id)arg3 ;
-(void)_addConsumerWithScanner:(/*^block*/id)arg1 callback:(/*^block*/id)arg2 ;
-(char)_innerPumpScanner;
-(void)didConnect;
-(void)setDelegateDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendPing:(id)arg1 ;
-(NSOperationQueue *)delegateOperationQueue;
-(void)setDelegateOperationQueue:(NSOperationQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateDispatchQueue;
-(void)_disconnect;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)send:(id)arg1 ;
-(void)setDelegate:(id<SRWebSocketDelegate>)arg1 ;
-(void)dealloc;
-(id<SRWebSocketDelegate>)delegate;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(NSString *)protocol;
-(void)_writeData:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(void)_connect;
-(void)setReadyState:(int)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(int)readyState;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)_handleMessage:(id)arg1 ;
@end

