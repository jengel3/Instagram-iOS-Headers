

@protocol FBWebDialogsDelegate <NSObject>
@optional
-(void)webDialogsWillDismissDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3 result:(unsigned*)arg4 url:(id*)arg5 error:(id*)arg6;
-(char)webDialogsDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3 shouldAutoHandleURL:(id)arg4;
-(void)webDialogsWillPresentDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3;

@end

