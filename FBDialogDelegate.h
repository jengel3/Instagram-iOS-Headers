

@protocol FBDialogDelegate <NSObject>
@optional
-(void)dialogDidComplete:(id)arg1;
-(void)dialogCompleteWithUrl:(id)arg1;
-(void)dialogDidNotCompleteWithUrl:(id)arg1;
-(void)dialogDidNotComplete:(id)arg1;
-(void)dialog:(id)arg1 didFailWithError:(id)arg2;
-(char)dialog:(id)arg1 shouldOpenURLInExternalBrowser:(id)arg2;

@end

