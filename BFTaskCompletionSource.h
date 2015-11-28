

@class BFTask;

@interface BFTaskCompletionSource : NSObject {

	BFTask* _task;

}

@property (nonatomic,retain) BFTask * task;              //@synthesize task=_task - In the implementation block
+(id)taskCompletionSource;
-(char)trySetResult:(id)arg1 ;
-(char)trySetError:(id)arg1 ;
-(char)trySetException:(id)arg1 ;
-(char)trySetCancelled;
-(void)setException:(id)arg1 ;
-(void)cancel;
-(id)init;
-(BFTask *)task;
-(void)setTask:(BFTask *)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setResult:(id)arg1 ;
@end

