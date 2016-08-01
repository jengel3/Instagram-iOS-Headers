

@class BFCancellationToken, NSObject;

@interface BFCancellationTokenRegistration : NSObject {

	char _disposed;
	BFCancellationToken* _token;
	/*^block*/id _cancellationObserverBlock;
	NSObject* _lock;

}

@property (assign,nonatomic,__weak) BFCancellationToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id cancellationObserverBlock;                      //@synthesize cancellationObserverBlock=_cancellationObserverBlock - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) char disposed;                                   //@synthesize disposed=_disposed - In the implementation block
+(id)registrationWithToken:(id)arg1 delegate:(/*^block*/id)arg2 ;
-(void)setCancellationObserverBlock:(id)arg1 ;
-(char)disposed;
-(void)setDisposed:(char)arg1 ;
-(void)throwIfDisposed;
-(id)cancellationObserverBlock;
-(void)notifyDelegate;
-(void)dispose;
-(id)init;
-(NSObject *)lock;
-(BFCancellationToken *)token;
-(void)setToken:(BFCancellationToken *)arg1 ;
-(void)setLock:(NSObject *)arg1 ;
@end

