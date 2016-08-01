

@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject {

	BFCancellationToken* _token;

}

@property (nonatomic,readonly) BFCancellationToken * token;                                            //@synthesize token=_token - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) char cancellationRequested; 
+(id)cancellationTokenSource;
-(void)cancelAfterDelay:(int)arg1 ;
-(char)isCancellationRequested;
-(void)dispose;
-(void)cancel;
-(id)init;
-(BFCancellationToken *)token;
@end

