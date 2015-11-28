

@protocol FBRequestDelegate <NSObject>
@optional
-(void)request:(id)arg1 didLoad:(id)arg2;
-(void)requestLoading:(id)arg1;
-(void)request:(id)arg1 didReceiveResponse:(id)arg2;
-(void)request:(id)arg1 didLoadRawResponse:(id)arg2;
-(void)request:(id)arg1 didFailWithError:(id)arg2;

@end

