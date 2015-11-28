

@class FBTask;

@interface FBTaskCompletionSource : NSObject {

	FBTask* _task;

}

@property (nonatomic,retain) FBTask * task;              //@synthesize task=_task - In the implementation block
+(id)taskCompletionSource;
-(char)trySetResult:(id)arg1 ;
-(char)trySetError:(id)arg1 ;
-(char)trySetException:(id)arg1 ;
-(char)trySetCancelled;
-(void)setException:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(FBTask *)task;
-(void)setTask:(FBTask *)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setResult:(id)arg1 ;
@end

