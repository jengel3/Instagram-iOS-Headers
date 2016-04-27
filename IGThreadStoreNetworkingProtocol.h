

@protocol IGThreadStoreNetworkingProtocol <NSObject>
@required
-(void)fetchThreadWithID:(id)arg1 withNextMaxID:(id)arg2 successfulThreadHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4;
-(void)fetchThreadWithID:(id)arg1 retryCount:(int)arg2 successfulThreadHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4;

@end

