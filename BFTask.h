

@class NSError, NSException, NSObject, NSCondition, NSMutableArray;

@interface BFTask : NSObject {

	id _result;
	NSError* _error;
	NSException* _exception;
	char _cancelled;
	char _faulted;
	char _completed;
	NSObject* _lock;
	NSCondition* _condition;
	NSMutableArray* _callbacks;

}

@property (assign,getter=isCancelled,nonatomic) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isFaulted,nonatomic) char faulted;                  //@synthesize faulted=_faulted - In the implementation block
@property (assign,getter=isCompleted,nonatomic) char completed;              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSCondition * condition;                        //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) NSMutableArray * callbacks;                     //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,readonly) id result; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSException * exception; 
+(id)taskWithResult:(id)arg1 ;
+(id)taskForCompletionOfAllTasks:(id)arg1 ;
+(id)cancelledTask;
+(id)taskWithError:(id)arg1 ;
+(id)taskWithException:(id)arg1 ;
+(id)taskForCompletionOfAllTasksWithResults:(id)arg1 ;
+(id)taskForCompletionOfAnyTask:(id)arg1 ;
+(id)taskWithDelay:(int)arg1 ;
+(id)taskWithDelay:(int)arg1 cancellationToken:(id)arg2 ;
+(id)taskFromExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)continueWithSuccessBlock:(/*^block*/id)arg1 ;
-(char)trySetResult:(id)arg1 ;
-(char)trySetError:(id)arg1 ;
-(char)trySetException:(id)arg1 ;
-(char)trySetCancelled;
-(id)initWithException:(id)arg1 ;
-(id)initCancelled;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(id)continueWithExecutor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)runContinuations;
-(void)setFaulted:(char)arg1 ;
-(id)continueWithExecutor:(id)arg1 block:(/*^block*/id)arg2 cancellationToken:(id)arg3 ;
-(id)continueWithExecutor:(id)arg1 successBlock:(/*^block*/id)arg2 cancellationToken:(id)arg3 ;
-(char)isFaulted;
-(void)warnOperationOnMainThread;
-(id)continueWithBlock:(/*^block*/id)arg1 cancellationToken:(id)arg2 ;
-(id)continueWithExecutor:(id)arg1 withSuccessBlock:(/*^block*/id)arg2 ;
-(id)continueWithSuccessBlock:(/*^block*/id)arg1 cancellationToken:(id)arg2 ;
-(void)waitUntilFinished;
-(NSMutableArray *)callbacks;
-(NSError *)error;
-(id)initWithResult:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setCompleted:(char)arg1 ;
-(char)isCompleted;
-(NSObject *)lock;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(NSCondition *)condition;
-(void)setCondition:(NSCondition *)arg1 ;
-(id)result;
-(void)setCallbacks:(NSMutableArray *)arg1 ;
-(void)setLock:(NSObject *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSException *)exception;
@end

