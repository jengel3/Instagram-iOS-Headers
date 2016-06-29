

@protocol IGNetworkSourceDelegate, IGNetworkParser, OS_dispatch_queue;
@class NSObject, IGRequest, NSString;

@interface IGNetworkSource : NSObject {

	char _cancelsPreviousRequest;
	char _loading;
	id<IGNetworkSourceDelegate> _delegate;
	id<IGNetworkParser> _parser;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	IGRequest* _previousRequest;
	NSString* _maxId;

}

@property (nonatomic,retain) IGRequest * previousRequest;                                //@synthesize previousRequest=_previousRequest - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                              //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * maxId;                                             //@synthesize maxId=_maxId - In the implementation block
@property (nonatomic,__weak,readonly) id<IGNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<IGNetworkParser> parser;                               //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) char cancelsPreviousRequest;                              //@synthesize cancelsPreviousRequest=_cancelsPreviousRequest - In the implementation block
-(NSString *)maxId;
-(void)fetchMore;
-(void)fetchWithLoadMore:(char)arg1 ;
-(char)cancelsPreviousRequest;
-(IGRequest *)previousRequest;
-(char)isMoreAvailable;
-(void)setPreviousRequest:(IGRequest *)arg1 ;
-(void)handleSuccessResponse:(id)arg1 isLoadMore:(char)arg2 ;
-(void)handleFailure:(id)arg1 ;
-(void)setMaxId:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 parser:(id)arg2 cancelsPreviousRequest:(char)arg3 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id<IGNetworkParser>)parser;
-(void)cancel;
-(id<IGNetworkSourceDelegate>)delegate;
-(char)isLoading;
-(void)fetch;
-(void)setLoading:(char)arg1 ;
@end

