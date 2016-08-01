

@class NSMutableArray, NSObject;

@interface BFCancellationToken : NSObject {

	char _cancellationRequested;
	char _disposed;
	NSMutableArray* _registrations;
	NSObject* _lock;

}

@property (nonatomic,retain) NSMutableArray * registrations;                                           //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                                          //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) char disposed;                                                            //@synthesize disposed=_disposed - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) char cancellationRequested;              //@synthesize cancellationRequested=_cancellationRequested - In the implementation block
-(void)cancelPrivate;
-(NSMutableArray *)registrations;
-(void)notifyCancellation:(id)arg1 ;
-(void)setRegistrations:(NSMutableArray *)arg1 ;
-(id)registerCancellationObserverWithBlock:(/*^block*/id)arg1 ;
-(void)cancelAfterDelay:(int)arg1 ;
-(char)disposed;
-(void)setDisposed:(char)arg1 ;
-(void)unregisterRegistration:(id)arg1 ;
-(void)throwIfDisposed;
-(char)isCancellationRequested;
-(void)dispose;
-(void)cancel;
-(id)init;
-(NSObject *)lock;
-(void)setLock:(NSObject *)arg1 ;
@end

