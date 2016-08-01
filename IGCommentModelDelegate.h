

@protocol IGCommentModelDelegate <NSObject>
@required
-(void)commentPostRequestStarted:(id)arg1;
-(void)commentPostRequestFinished:(id)arg1;
-(void)commentPostRequestFailedSpam:(id)arg1;
-(void)commentPostRequestFailed:(id)arg1;
-(void)commentRemoveRequestFailed:(id)arg1;
-(void)commentRemoveRequestStarted:(id)arg1;
-(void)commentRemoveRequestFinished:(id)arg1;
-(void)commentRemoveRequestFinished:(id)arg1 notify:(char)arg2;
-(void)commentRemoveRequestFailed:(id)arg1 notify:(char)arg2;
-(void)commentRemoveRequestStarted:(id)arg1 notify:(char)arg2;

@end

