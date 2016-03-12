

@protocol IGNetworkSourceDelegate <NSObject>
@required
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2;

@end

